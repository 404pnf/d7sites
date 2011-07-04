<?php
// $Id: required.inc,v 1.2.2.3 2011/01/30 13:50:07 twistor Exp $

$plugin = array(
  'form' => 'feeds_tamper_required_form',
  'callback' => 'feeds_tamper_required_callback',
  'description' => 'feeds_tamper_required_description',
  'machine_name' => 'feeds_tamper_required_machine_name',
  'name' => 'Required field',
  'multi' => 'direct',
  'category' => 'Filter',
);

function feeds_tamper_required_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Make this field required. If it is empty, the feed item will not be saved.'),
  );
  return $form;
}

function feeds_tamper_required_description($settings) {
  return 'If the field is empty, do not save item.';
}

function feeds_tamper_required_machine_name($settings) {
  return 'make_required';
}

function feeds_tamper_required_callback($result, $item_key, $element_key, &$field, $settings) {
  if (empty($field)) {
    unset($result->items[$item_key]);
  }
}
