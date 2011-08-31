<?php

/**
 * @file
 * user_picture_field callback
 */ 

function user_picture_field_config_form(){
	$form['user_picture_field_source_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Machine name of source field that used user picture'),
    '#default_value' => variable_get('user_picture_field_source_field','field_user_avatar'),
    '#maxlength' => 255,
    '#required' => TRUE,
  );
  
  return system_settings_form($form, TRUE);
}