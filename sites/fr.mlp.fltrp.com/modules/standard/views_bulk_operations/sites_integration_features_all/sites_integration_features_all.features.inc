<?php
/**
 * @file
 * sites_integration_features_all.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sites_integration_features_all_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implementation of hook_node_info().
 */
function sites_integration_features_all_node_info() {
  $items = array(
    'news' => array(
      'name' => t('新闻'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('新闻标题'),
      'help' => '',
    ),
    'sitefiles' => array(
      'name' => t('站点引用的与内容无直接关联的文件'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('引用文件标题'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function sites_integration_features_all_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
