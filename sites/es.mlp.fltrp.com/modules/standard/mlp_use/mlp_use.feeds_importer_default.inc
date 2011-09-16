<?php
/**
 * @file
 * mlp_use.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function mlp_use_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'product_import';
  $feeds_importer->config = array(
    'name' => '产品导入',
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
            'source' => 'Nid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'field_bsno',
            'target' => 'field_bsno',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_materielno',
            'target' => 'field_materielno',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_isbn',
            'target' => 'field_isbn',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_publish_date',
            'target' => 'field_publish_date',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_author',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_price',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_words',
            'target' => 'field_words',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'field_yc',
            'target' => 'field_yc',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_pages',
            'target' => 'field_pages',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_format',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'field_zdfs',
            'target' => 'field_zdfs',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'field_language',
            'target' => 'field_language',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'field_product_type',
            'target' => 'field_product_type',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'field_directory',
            'target' => 'field_directory',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'field_sp',
            'target' => 'field_sp',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'field_author_info',
            'target' => 'field_author_info',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'field_preface',
            'target' => 'field_preface',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'field_sample',
            'target' => 'field_sample',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'field_category',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'field_department',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'field_education',
            'target' => 'field_education',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'field_series',
            'target' => 'field_series',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'field_read_online',
            'target' => 'field_read_online',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'field_img',
            'target' => 'field_img',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['product_import'] = $feeds_importer;

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'term_import';
  $feeds_importer->config = array(
    'name' => '分类导入',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'category',
        'mappings' => array(
          0 => array(
            'source' => 'term',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'weighing',
            'target' => 'weight',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'term_upper_layer',
            'target' => 'parent',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'termID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['term_import'] = $feeds_importer;

  return $export;
}
