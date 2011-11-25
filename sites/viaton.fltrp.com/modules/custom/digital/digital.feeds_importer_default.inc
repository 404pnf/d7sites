<?php
/**
 * @file
 * digital.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function digital_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'digital_product';
  $feeds_importer->config = array(
    'name' => '数码产品导入',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'digital',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_digital_image',
            'target' => 'field_digital_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_digital_url',
            'target' => 'field_digital_url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_digital_language',
            'target' => 'field_digital_language',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_digital_category',
            'target' => 'field_digital_category',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_digital_education',
            'target' => 'field_digital_education',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_digital_price',
            'target' => 'field_digital_price',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_digital_dollar',
            'target' => 'field_digital_dollar',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'field_digital_department',
            'target' => 'field_digital_department',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Nid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['digital_product'] = $feeds_importer;

  return $export;
}
