<?php


function qrynews_config_form(){
	$form['qrynews_machine_name'] = array(
    '#type' => 'textfield',
    '#title' => t('新闻资源分类所在词汇表的机读名字'),
    '#default_value' => variable_get('qrynews_machine_name','resource_cat'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	$form['qrynews_cid'] = array(
    '#type' => 'textfield',
    '#title' => t('对应词汇表中，原有ID对应的字段的机读名字'),
    '#default_value' => variable_get('qrynews_cid','field_source_code'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );

	$form['qrynews_content_type'] = array(
    '#type' => 'textfield',
    '#title' => t('要导入新闻，资源的内容类型'),
    '#default_value' => variable_get('qrynews_content_type','resource'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
	
	$form['qrynews_field'] = array(
    '#type' => 'textfield',
    '#title' => t('词汇表在内容类型中对应的字段'),
    '#default_value' => variable_get('qrynews_field','field_resource_category'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );

	$form['submit'] = array(
		'#type' =>'submit',
		'#value' => t('保存'),
	);
	
	return $form;
}

function qrynews_config_form_submit($form,&$form_state){
	//$types = array_filter($form_state['values']['types']);
	$qrynews_machine_name = $form_state['values']['qrynews_machine_name'];
	$qrynews_cid = $form_state['values']['qrynews_cid'];
	$qrynews_content_type = $form_state['values']['qrynews_content_type'];
	
	$qrynews_field = $form_state['values']['qrynews_field'];

	
	
	$qrynews_vid_result = db_select('taxonomy_vocabulary', 'tv')
			->fields('tv', array('vid'))
			->condition('tv.machine_name', $qrynews_machine_name, '=')
			->execute()
			->fetchAssoc();
	$qrynews_vid = $qrynews_vid_result['vid'];
	
	variable_set('qrynews_vid',$qrynews_vid);
	variable_set('qrynews_machine_name',$qrynews_machine_name);
	variable_set('qrynews_cid',$qrynews_cid);
	variable_set('qrynews_content_type',$qrynews_content_type);
	variable_set('qrynews_field',$qrynews_field);


}

