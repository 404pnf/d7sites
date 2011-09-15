<?php
/**
 * @file
 * feeds_export.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function feeds_export_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'basic';
  $feeds_importer->config = array(
    'name' => 'basic',
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
        'content_type' => 'book',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'field_isbn',
            'target' => 'field_isbn',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_materielno',
            'target' => 'field_materielno',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_author',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_price',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_format',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_yc',
            'target' => 'field_yc',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_pages',
            'target' => 'field_pages',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_publish_date',
            'target' => 'field_publish_date',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_img',
            'target' => 'field_img',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_product_type',
            'target' => 'field_product_type',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'field_language',
            'target' => 'field_language',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'field_education',
            'target' => 'field_education',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'field_series',
            'target' => 'field_series',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'field_directory',
            'target' => 'field_directory',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'field_author_info',
            'target' => 'field_author_info',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'field_words',
            'target' => 'field_words',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'field_sample',
            'target' => 'field_sample',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'field_preface',
            'target' => 'field_preface',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'field_sp',
            'target' => 'field_sp',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'field_zdfs',
            'target' => 'field_zdfs',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'field_read_online',
            'target' => 'field_read_online',
            'unique' => FALSE,
          ),
          23 => array(
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
    'import_period' => '43200',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['basic'] = $feeds_importer;

  return $export;
}
