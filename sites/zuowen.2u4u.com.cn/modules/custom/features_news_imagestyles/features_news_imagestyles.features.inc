<?php
/**
 * @file
 * features_news_imagestyles.features.inc
 */

/**
 * Implementation of hook_image_default_styles().
 */
function features_news_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: news
  $styles['news'] = array(
    'name' => 'news',
    'effects' => array(
      6 => array(
        'label' => '比例缩放并裁切',
        'help' => '比例缩放将会保持原始图片的宽高比，然后裁切最大边。这通常对创建不拉伸的完美的方形缩略图是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '400',
          'height' => '268',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function features_news_imagestyles_node_info() {
  $items = array(
    'news' => array(
      'name' => t('新闻'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('新闻标题'),
      'help' => '',
    ),
  );
  return $items;
}
