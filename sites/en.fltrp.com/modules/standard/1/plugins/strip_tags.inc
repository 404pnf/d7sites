<?php
// $Id: strip_tags.inc,v 1.2.2.3 2011/01/30 13:50:07 twistor Exp $

$plugin = array(
  'form' => 'feeds_tamper_strip_tags_form',
  'callback' => 'feeds_tamper_strip_tags_callback',
  'validate' => 'feeds_tamper_strip_tags_validate',
  'description' => 'feeds_tamper_strip_tags_description',
  'machine_name' => 'feeds_tamper_strip_tags_machine_name',
  'name' => 'Strip tags',
  'multi' => 'loop',
  'category' => 'HTML',
);

function feeds_tamper_strip_tags_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Remove all HTML tags except:');
  $form['allowed_tags'] = array(
    '#type' => 'textfield',
    '#title' => t('Allowed tags'),
    '#default_value' => isset($settings['allowed_tags']) ? $settings['allowed_tags'] : '',
    '#description' => t('A list of allowed tags, such as %a, %b.', array('%a' => '<a>', '%b' => '<em>')),
  );
  return $form;
}

function feeds_tamper_strip_tags_description($settings) {
  return 'Strip HTML tags.';
}

function feeds_tamper_strip_tags_machine_name($settings) {
  return 'strip_html_tags';
}

function feeds_tamper_strip_tags_validate(&$settings) {
  $settings['allowed_tags'] = trim($settings['allowed_tags']);
}

function feeds_tamper_strip_tags_callback($result, $item_key, $element_key, &$field, $settings) {
  $field = strip_tags($field, $settings['allowed_tags']);
}
