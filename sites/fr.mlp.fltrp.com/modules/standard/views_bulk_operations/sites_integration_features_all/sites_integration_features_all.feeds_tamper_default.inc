<?php
/**
 * @file
 * sites_integration_features_all.feeds_tamper_default.inc
 */

/**
 * Implementation of hook_feeds_tamper_default().
 */
function sites_integration_features_all_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edu_tamper';
  $feeds_tamper->importer = 'product_import';
  $feeds_tamper->source = 'field_education';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '10',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Break text into items at every ",". Limit to 10 items.';
  $export['edu_tamper'] = $feeds_tamper;

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'education_category_tamper';
  $feeds_tamper->importer = 'product_import';
  $feeds_tamper->source = 'field_category';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '10',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Break text into items at every ",". Limit to 10 items.';
  $export['education_category_tamper'] = $feeds_tamper;

  return $export;
}
