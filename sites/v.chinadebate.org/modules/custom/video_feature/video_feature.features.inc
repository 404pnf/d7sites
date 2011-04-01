<?php

/**
 * Implementation of hook_node_info().
 */
function video_feature_node_info() {
  $items = array(
    'video' => array(
      'name' => t('video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
