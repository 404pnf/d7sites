<?php
/**
 * @file
 * books.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function books_node_info() {
  $items = array(
    'book' => array(
      'name' => t('book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Book name'),
      'help' => '',
    ),
  );
  return $items;
}
