<?php


function bookotype_config_form(){
	$form['cat_machine_name'] = array(
    '#type' => 'textfield',
    '#title' => t('category machine name'),
    '#default_value' => variable_get('cat_machine_name','mlp_category'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['cat_field'] = array(
    '#type' => 'textfield',
    '#title' => t('category field machine name'),
    '#default_value' => variable_get('cat_field','field_mlp_category'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['cat_cid'] = array(
    '#type' => 'textfield',
    '#title' => t('category CID'),
    '#default_value' => variable_get('cat_cid','field_mlp_cid'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	
	$form['edu_machine_name'] = array(
    '#type' => 'textfield',
    '#title' => t('education machine name'),
    '#default_value' => variable_get('edu_machine_name','edu_category'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['edu_field'] = array(
    '#type' => 'textfield',
    '#title' => t('education field machine name'),
    '#default_value' => variable_get('edu_field','field_edu_category'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['edu_cid'] = array(
    '#type' => 'textfield',
    '#title' => t('education CID'),
    '#default_value' => variable_get('edu_cid','field_edu_cid'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['submit'] = array(
		'#type' =>'submit',
		'#value' => t('保存'),
	);
	
	return $form;
}

function bookotype_config_form_submit($form,&$form_state){
	//$types = array_filter($form_state['values']['types']);
	$cat_machine_name = $form_state['values']['cat_machine_name'];
	$cat_field = $form_state['values']['cat_field'];
	$cat_cid = $form_state['values']['cat_cid'];
	
	$edu_machine_name = $form_state['values']['edu_machine_name'];
	$edu_field = $form_state['values']['edu_field'];
	$edu_cid = $form_state['values']['edu_cid'];
	
	$cat_vid_result = db_select('taxonomy_vocabulary', 'tv')
			->fields('tv', array('vid'))
			->condition('tv.machine_name', $cat_machine_name, '=')
			->execute()
			->fetchAssoc();
	$cat_vid = $cat_vid_result['vid'];
	
	$edu_vid_result = db_select('taxonomy_vocabulary', 'tv')
			->fields('tv', array('vid'))
			->condition('tv.machine_name', $edu_machine_name, '=')
			->execute()
			->fetchAssoc();
	$edu_vid = $edu_vid_result['vid'];
	
	variable_set('cat_machine_name',$cat_machine_name);
	variable_set('cat_field',$cat_field);
	variable_set('cat_cid',$cat_cid);
	variable_set('edu_machine_name',$edu_machine_name);
	variable_set('edu_field',$edu_field);
	variable_set('edu_cid',$edu_cid);
	
	variable_set('cat_vid',$cat_vid);
	variable_set('edu_vid',$edu_vid);

}

