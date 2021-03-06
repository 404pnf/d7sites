<?php

/**
 * @file
 * Manages validation rules administration UI
 */
 
/**
 * Menu callback function using to dispatch.
 */
function field_validation_callback_dispatch($instance, $arg1 = NULL, $arg2 = NULL, $arg3 = NULL) {
  $output = '';
	if(empty($arg1)){
	  drupal_set_title(t('Validation'));
		$output .= field_validation_manage($instance);
	}elseif($arg1 == 'add'){
	  drupal_set_title(t('Add validation'));
		$output .= drupal_render(drupal_get_form('field_validation_manage_rule', $instance, 'add', $arg2));
	}elseif($arg1 == 'edit'){
		drupal_set_title(t('Edit rule'));
		$output .= drupal_render(drupal_get_form('field_validation_manage_rule', $instance, 'edit', $arg2, $arg3));
	}elseif($arg1 == 'delete'){
		drupal_set_title(t('Delete rule'));
		$output .= drupal_render(drupal_get_form('field_validation_delete_rule', $arg2));
	}else{
	  drupal_set_title(t('Validation'));
		$output .= field_validation_manage($instance);	
	}

  return $output;
}

/**
 * Menu callback function to show an overview of the existing validation rules, and the option to add a rule
 */
function field_validation_manage($instance) {
  $output = '';
  $rules = field_validation_get_field_rules($instance);
  $output .= theme('field_validation_manage_overview', array('rules' => $rules, 'instance' => $instance));
  $output .= theme('field_validation_manage_add_rule', array('instance' => $instance));
  return $output;
}

/**
 * Themable function to list the rules assigned to a field instance
 */
function theme_field_validation_manage_overview($variables) {
  $rules = $variables['rules'];
  $instance = $variables['instance'];

  $header = array(t('Rule name'), t('Validator'), array(
      'data' => t('Operations'),
      'colspan' => 2,
    ));
  $validators = field_validation_get_validators_selection();
  if (!empty($rules)) {
    foreach ($rules as $rule) {
      $row = array();
      $row[] = array(
        'data' => $rule['rulename'],
      );
      $row[] = array(
        'data' => $validators[$rule['validator']],
      );
			$path = isset($_GET['q']) ? $_GET['q'] : '';
      $row[] = array(
        'data' => l(t('Edit'), $path.'/edit/' . $rule['validator'] . '/' . $rule['ruleid'], array("query" => drupal_get_destination())),
      );
      $row[] = array(
        'data' => l(t('Delete'), $path.'/delete/' . $rule['ruleid'], array("query" => drupal_get_destination())),
      );
      $rows[] = $row;
    }
  }
  else {
    $rows[][] = array(
      'data' => t('No validation rules available.'),
      'colspan' => 5,
    );
  }

  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Callback function to add or edit a validation rule
 */
function field_validation_manage_rule($form, $form_state, $instance, $action = 'add', $validator = 'regex', $ruleid = NULL) {
  $form = array();
  $rule_validator = field_validation_get_validator_info($validator);
  $rule = field_validation_get_rule($ruleid);
  $form['rule'] = array(
    '#type' => 'fieldset',
    '#title' => ($action == 'edit') ? t('Edit rule') : t('Add rule'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $form['rule']['validator'] = array(
    '#type' => 'hidden',
    '#value' => $validator,
  );

  $form['rule']['action'] = array(
    '#type' => 'hidden',
    '#value' => $action,
  );

  if ($action == 'edit' && $rule) {
    $form['rule']['ruleid'] = array(
      '#type' => 'hidden',
      '#value' => $rule['ruleid'],
    );

    $form['rule']['field_name'] = array(
      '#type' => 'hidden',
      '#value' => $rule['field_name'],
    );
		
	  $form['rule']['entity_type'] = array(
      '#type' => 'hidden',
      '#value' => $rule['entity_type'],
    );
		
	  $form['rule']['bundle'] = array(
      '#type' => 'hidden',
      '#value' => $rule['bundle'],
    );
  }
  else {
    $form['rule']['field_name'] = array(
      '#type' => 'hidden',
      '#value' => $instance['field_name'],
    );
		
	  $form['rule']['entity_type'] = array(
      '#type' => 'hidden',
      '#value' => $instance['entity_type'],
    );
		
	  $form['rule']['bundle'] = array(
      '#type' => 'hidden',
      '#value' => $instance['bundle'],
    );
  }

  $form['rule']['rulename'] = array(
    '#type' => 'textfield',
    '#title' => t('Rule name'),
    '#default_value' => (isset($rule['rulename'])) ? $rule['rulename'] : '',
    '#required' => TRUE,
    '#size' => 60,
    '#maxlength' => 255,
    '#weight' => 1,
  );
	
	$form['rule']['col'] = array(
    '#type' => 'textfield',
    '#title' => t('Column'),
		'#description' => t('A column defined in the hook_field_schema() of this field.'),
    '#default_value' => (isset($rule['col'])) ? $rule['col'] : 'value',
    '#required' => TRUE,
    '#size' => 60,
    '#maxlength' => 255,
    '#weight' => 2,
  );

  if (isset($rule_validator['custom_data']) && is_array($rule_validator['custom_data'])) {
    $required = isset($rule_validator['custom_data']['required']) ? $rule_validator['custom_data']['required'] : TRUE;
    $form['rule']['data'] = array(
      '#type' => 'textfield',
      '#title' => $rule_validator['custom_data']['label'],
      '#description' => $rule_validator['custom_data']['description'],
      '#required' => ($required !== FALSE) ? TRUE : FALSE,
      '#size' => 60,
      '#maxlength' => 255,
      '#default_value' => $rule['data'],
      '#weight' => 4,
    );
  }

  if (isset($rule_validator['custom_error'])) {
    $form['rule']['error_message'] = array(
      '#type' => 'textfield',
      '#title' => t('Custom error message'),
      '#description' => t("Specify an error message that should be displayed when user input doesn't pass validation"),
      '#required' => TRUE,
      '#size' => 60,
      '#maxlength' => 255,
      '#default_value' => $rule['error_message'],
      '#weight' => 5,
    );
  }

  $form['rule']['submit'] = array(
    '#type' => 'submit',
    '#value' => (isset($rule['ruleid'])) ? t('Save rule') : t('Add rule'),
    '#weight' => 25,
  );

  return $form;
}

/**
 * Validation handler to add / edit a rule
 */
function field_validation_manage_rule_validate($form, &$form_state) {
  $values = $form_state['values'];
  if ($values['action'] == 'edit') {
    if (!is_numeric($values['ruleid']) || $values['ruleid'] == 0) {
      form_set_error(NULL, t('A problem occurred while editing this rule. Please try again.'));
    }
  }
}


/**
 * Submit handler to add / edit a rule
 */
function field_validation_manage_rule_submit($form, &$form_state) {
  $values = $form_state['values'];
  field_validation_rule_save($values);
}

/**
 * Confirmation form to delete a rule
 */
function field_validation_delete_rule($form, &$form_state, $ruleid) {
  $rule = array();
  if (isset($ruleid) && $ruleid > 0) {
	  $rule = field_validation_get_rule($ruleid);
    $form['ruleid'] = array(
      '#type' => 'hidden',
      '#value' => $ruleid,
    );
  }
	
	if(empty($rule)){
	  $source_path = isset($_GET['destination']) ? $_GET['destination']:"";
		drupal_goto($source_path);
	}

  return confirm_form($form,
    t('Are you sure you want to delete the rule %name?', array('%name' => $rule['rulename'])),
    isset($_GET['destination']) ? $_GET['destination'] : $_GET['q'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Submit handler to delete a rule
 */
function field_validation_delete_rule_submit($form, &$form_state) {
  $ruleid = $form_state['values']['ruleid'];
  field_validation_dynamic_delete_rule($ruleid);
  module_invoke_all('field_validation', 'rule', 'delete', $ruleid);
}
