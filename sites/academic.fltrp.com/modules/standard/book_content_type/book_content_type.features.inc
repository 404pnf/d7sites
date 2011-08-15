<?php
/**
 * @file
 * book_content_type.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function book_content_type_node_info() {
  $items = array(
    'book' => array(
      'name' => t('book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('产品名称'),
      'help' => '',
    ),
  );
  return $items;
}
