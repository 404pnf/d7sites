<?php
/**
 * @file
 * hanyu.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function hanyu_node_info() {
  $items = array(
    'book' => array(
      'name' => t('book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('图书产品名称'),
      'help' => '',
    ),
  );
  return $items;
}
