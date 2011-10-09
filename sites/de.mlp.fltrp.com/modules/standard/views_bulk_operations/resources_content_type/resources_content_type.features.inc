<?php
/**
 * @file
 * resources_content_type.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function resources_content_type_node_info() {
  $items = array(
    'resources' => array(
      'name' => t('资源'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('资源名称'),
      'help' => '',
    ),
  );
  return $items;
}
