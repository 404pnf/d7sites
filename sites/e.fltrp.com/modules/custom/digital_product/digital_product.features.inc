<?php
/**
 * @file
 * digital_product.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function digital_product_node_info() {
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
