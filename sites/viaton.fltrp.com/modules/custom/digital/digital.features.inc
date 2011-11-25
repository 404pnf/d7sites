<?php
/**
 * @file
 * digital.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function digital_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function digital_node_info() {
  $items = array(
    'digital' => array(
      'name' => t('数字产品'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('数字产品名称'),
      'help' => '',
    ),
  );
  return $items;
}
