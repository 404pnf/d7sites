<?php

/**
 * @file
 * provides API and management functions for the field validation rules
 */

/**
 * Get a rule entry
 */
function field_validation_get_rule($ruleid) {
  $result = db_query("SELECT * FROM {field_validation_rule} WHERE ruleid = :ruleid", array(':ruleid' => $ruleid), array('fetch' => PDO::FETCH_ASSOC));
  $rule = $result->fetchAssoc();
  return $rule;
}

/**
 * Get an array of rules assigned to a field instance
 */
function field_validation_get_field_rules($instance) {
  $rules = array();
	$bundle = $instance['bundle'];
  $entity_type = $instance['entity_type'];
  $field_name = $instance['field_name'];
	$sql = "SELECT * FROM {field_validation_rule} WHERE field_name = :field_name AND entity_type = :entity_type AND bundle = :bundle ORDER BY ruleid DESC";
  $result = db_query($sql, array(':field_name' => $field_name, ':entity_type' => $entity_type, ':bundle' => $bundle), array('fetch' => PDO::FETCH_ASSOC));
  foreach ($result as $rule) {
    //$rule['components'] = webform_validation_get_rule_components($rule['ruleid'], $rule['nid']);
    $rules[$rule['ruleid']] = $rule;
  }
  return $rules;
}

/**
 * Get an array of rules assigned to a field instance
 */
function field_validation_get_bundle_rules($entity_type, $bundle) {
  $rules = array();
	$sql = "SELECT * FROM {field_validation_rule} WHERE entity_type = :entity_type AND bundle = :bundle ORDER BY ruleid DESC";
  $result = db_query($sql, array(':entity_type' => $entity_type, ':bundle' => $bundle), array('fetch' => PDO::FETCH_ASSOC));
  foreach ($result as $rule) {
    //$rule['components'] = webform_validation_get_rule_components($rule['ruleid'], $rule['nid']);
    $rules[$rule['ruleid']] = $rule;
  }
  return $rules;
}


/**
 * This helper function takes a list of full component info arrays and returns a basic representation of it for output purposes.
 */
function field_validation_rule_components_basic($components) {
  $ret = array();
  if ($components) {
    foreach ($components as $cid => $component) {
      $ret[$cid] = $component["name"];
    }
  }
  return $ret;
}

/**
 * Delete a rule and dependencies
 */
function field_dynamic_delete_rule($ruleid) {
  // delete rule
  db_delete('field_validation_rule')
  ->condition('ruleid', $ruleid)
  ->execute();
}
