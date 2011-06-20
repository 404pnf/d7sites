<?php
/**
 * @file
 * en_fltrp_export.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function en_fltrp_export_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feed_en';
  $feeds_importer->config = array(
    'name' => 'enfltrp',
    'description' => '测试导入社网图书',
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
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'ISBN',
            'target' => 'field_isbn',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'bsno',
            'target' => 'field_bsno',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'sp',
            'target' => 'field_sp',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'author',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'author_info',
            'target' => 'field_author_info',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'publish_date',
            'target' => 'field_publish_date',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'category_recommended',
            'target' => 'field_category_recommended',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'type_new',
            'target' => 'field_product_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'preface',
            'target' => 'field_preface',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'ebname',
            'target' => 'field_ebname',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'features',
            'target' => 'field_features',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'ekb',
            'target' => 'field_ekb',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'authorization_details',
            'target' => 'field_authorization_details',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'relative_info',
            'target' => 'field_relative_info',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'accessories',
            'target' => 'field_accessories',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'zdfs',
            'target' => 'field_zdfs',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'bianshi',
            'target' => 'field_bianshi',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'yc',
            'target' => 'field_yc',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'words',
            'target' => 'field_words',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'price',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'edition',
            'target' => 'field_edition',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'materielno',
            'target' => 'field_materielno',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'sample',
            'target' => 'field_sample',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'series',
            'target' => 'field_series_name',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'series_new',
            'target' => 'field_series',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'bookbinding',
            'target' => 'field_bookbinding',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'readers',
            'target' => 'field_readers',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'important',
            'target' => 'field_is_important',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'recommended',
            'target' => 'field_is_recommended',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'bsno',
            'target' => 'guid',
            'unique' => 1,
          ),
          31 => array(
            'source' => 'img',
            'target' => 'field_img',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'yuzhong',
            'target' => 'field_language',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'typ',
            'target' => 'field_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['feed_en'] = $feeds_importer;

  return $export;
}
