<?php
/**
 * @file
 * viewsbeifen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viewsbeifen_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = '21st_rss';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '21st_rss';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 路径 */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'news';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://www.fltrp.com[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: 21news */
  $handler = $view->new_display('views_data_export', '21news', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['transform'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 路径 */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'link';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'http://www.fltrp.com[path]';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'news';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://www.fltrp.com[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
    'match' => 'match',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = '21news';
  $handler->display->display_options['use_batch'] = '0';

  /* Display: 21books */
  $handler = $view->new_display('views_data_export', '21books', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 路径 */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'link';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'http://www.fltrp.com[path]';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'http://www.fltrp.com';
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = 'books_jpg';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '21st_jpg',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_img']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = '21books';
  $handler->display->display_options['use_batch'] = '0';
  $translatables['21st_rss'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('news'),
    t('http://www.fltrp.com[path]'),
    t('21news'),
    t('link'),
    t('21books'),
    t('http://www.fltrp.com'),
    t('books_jpg'),
  );
  $export['21st_rss'] = $view;

  $view = new view;
  $view->name = 'cate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '分类名称';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Contextual filter: 分类术语: 术语ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '产品中心';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: 分类名称 */
  $handler = $view->new_display('block', '分类名称', 'block');
  $translatables['cate'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('全部'),
    t('分类名称'),
  );
  $export['cate'] = $view;

  $view = new view;
  $view->name = 'category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '产品分类';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '电子产品分类';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
  );
  $handler->display->display_options['row_options']['separator'] = '，';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="item-list single-category"><h3><a href="digital?category=1423">品牌教程</a></h3></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: 分类术语: 父术语 */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = 1;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* Sort criterion: 分类术语: 权重 */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: 分类术语: 权重 */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    236 => '236',
  );
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: 期刊分类  */
  $handler = $view->new_display('block', '期刊分类 ', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '期刊分类';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'productslist?category=[tid_1]';
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/productlist?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1619 => '1619',
    1678 => '1678',
    1666 => '1666',
    1660 => '1660',
    1645 => '1645',
    1637 => '1637',
    1632 => '1632',
    1620 => '1620',
    1640 => '1640',
    1685 => '1685',
    1676 => '1676',
    1662 => '1662',
    1649 => '1649',
    1641 => '1641',
    1655 => '1655',
    1683 => '1683',
    1647 => '1647',
    1686 => '1686',
    1635 => '1635',
    1687 => '1687',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: 图书产品分类 */
  $handler = $view->new_display('block', '图书产品分类', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '产品分类';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
  );
  $handler->display->display_options['row_options']['separator'] = '，';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="item-list single-category"><h3><a href="productslist?category=1630">品牌教程</a></h3></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'productslist?category=[tid_1]';
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/productslist?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1606 => '1606',
    1684 => '1684',
    1672 => '1672',
    1663 => '1663',
    1643 => '1643',
    1639 => '1639',
    1626 => '1626',
    1621 => '1621',
    1616 => '1616',
    1609 => '1609',
    1607 => '1607',
    1650 => '1650',
    1679 => '1679',
    1671 => '1671',
    1661 => '1661',
    1651 => '1651',
    1601 => '1601',
    1690 => '1690',
    1665 => '1665',
    1653 => '1653',
    1648 => '1648',
    1642 => '1642',
    1628 => '1628',
    1624 => '1624',
    1617 => '1617',
    1610 => '1610',
    1608 => '1608',
    1605 => '1605',
    1604 => '1604',
    1603 => '1603',
    1602 => '1602',
    1614 => '1614',
    1688 => '1688',
    1674 => '1674',
    1654 => '1654',
    1652 => '1652',
    1627 => '1627',
    1618 => '1618',
    1615 => '1615',
    1638 => '1638',
    1681 => '1681',
    1668 => '1668',
    1664 => '1664',
    1630 => '1630',
    1622 => '1622',
    1677 => '1677',
    1673 => '1673',
    1634 => '1634',
    1644 => '1644',
    1636 => '1636',
    1629 => '1629',
    1625 => '1625',
    1611 => '1611',
    1689 => '1689',
    1675 => '1675',
    1658 => '1658',
    1646 => '1646',
    1633 => '1633',
    1631 => '1631',
    1623 => '1623',
    1613 => '1613',
    1612 => '1612',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 电子产品分类  */
  $handler = $view->new_display('block', '电子产品分类 ', 'block_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="item-list single-category"><h3><a href="digital?category=1659">网络产品</a></h3></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'digital?category=[tid_1]';
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'digital?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1669 => '1669',
    1680 => '1680',
    1670 => '1670',
    1656 => '1656',
    1682 => '1682',
    1667 => '1667',
    1657 => '1657',
    1659 => '1659',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 期刊分类附件 */
  $handler = $view->new_display('attachment', '期刊分类附件', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '期刊分类';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'productlist?category=[tid_1]';
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['value'] = array(
    755 => '755',
    763 => '763',
    764 => '764',
    765 => '765',
    766 => '766',
    767 => '767',
    768 => '768',
    813 => '813',
    756 => '756',
    760 => '760',
    761 => '761',
    762 => '762',
    814 => '814',
    815 => '815',
    757 => '757',
    769 => '769',
    758 => '758',
    770 => '770',
    759 => '759',
    771 => '771',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: 电子产品分类附件 */
  $handler = $view->new_display('attachment', '电子产品分类附件', 'attachment_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid_1']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['path'] = 'productlist?category=[tid_1]';
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['value'] = array(
    234 => '234',
    772 => '772',
    773 => '773',
    235 => '235',
    774 => '774',
    775 => '775',
    776 => '776',
    236 => '236',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: 网络产品附件 */
  $handler = $view->new_display('attachment', '网络产品附件', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '网络产品分类';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
  );
  $handler->display->display_options['row_options']['separator'] = '，';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'digital?category=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: 分类术语: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    236 => '236',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['category'] = array(
    t('Master'),
    t('电子产品分类'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="item-list single-category"><h3><a href="digital?category=1423">品牌教程</a></h3></div>'),
    t('上层'),
    t('.'),
    t(','),
    t('productslist?category=[tid]'),
    t('名称'),
    t('期刊分类 '),
    t('期刊分类'),
    t('productslist?category=[tid_1]'),
    t('/productlist?category=[tid]'),
    t('图书产品分类'),
    t('产品分类'),
    t('<div class="item-list single-category"><h3><a href="productslist?category=1630">品牌教程</a></h3></div>'),
    t('/productslist?category=[tid]'),
    t('电子产品分类 '),
    t('<div class="item-list single-category"><h3><a href="digital?category=1659">网络产品</a></h3></div>'),
    t('digital?category=[tid_1]'),
    t('digital?category=[tid]'),
    t('期刊分类附件'),
    t('productlist?category=[tid_1]'),
    t('电子产品分类附件'),
    t('网络产品附件'),
    t('网络产品分类'),
  );
  $export['category'] = $view;

  $view = new view;
  $view->name = 'check_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'check_update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-2 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = '0';
  $translatables['check_update'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
  );
  $export['check_update'] = $view;

  $view = new view;
  $view->name = 'daoshudan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '导书单';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_isbn']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn']['field_api_classes'] = 0;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_img']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: 附件 */
  $handler = $view->new_display('attachment', '附件', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'cyou';
  $translatables['daoshudan'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('ISBN'),
    t('产品图片'),
    t('附件'),
    t('Data export'),
  );
  $export['daoshudan'] = $view;

  $view = new view;
  $view->name = 'decosearch';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '全站内容';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-3';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = '0';

  /* Display: mysitemap */
  $handler = $view->new_display('page', 'mysitemap', 'page_1');
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'mysitemap';

  /* Display: mysiteupdate */
  $handler = $view->new_display('page', 'mysiteupdate', 'page_2');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['value']['min'] = '-2 day';
  $handler->display->display_options['filters']['changed']['value']['max'] = '+1 day';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-3 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['path'] = 'mysiteupdate';
  $translatables['decosearch'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('mysitemap'),
    t('mysiteupdate'),
  );
  $export['decosearch'] = $view;

  $view = new view;
  $view->name = 'digital';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '数字产品';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '数字产品';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'column';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_digital_price' => 'field_digital_price',
    'field_digital_dollar' => 'field_digital_dollar',
    'field_digital_url' => 'field_digital_url',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '					<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* 字段: 内容: 数字产品图片 */
  $handler->display->display_options['fields']['field_digital_image']['id'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['table'] = 'field_data_field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['field'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['label'] = '';
  $handler->display->display_options['fields']['field_digital_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_digital_image']['element_class'] = 'bookbg2';
  $handler->display->display_options['fields']['field_digital_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_digital_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'forbottom';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品人民币价格 */
  $handler->display->display_options['fields']['field_digital_price']['id'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['table'] = 'field_data_field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['field'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['label'] = '';
  $handler->display->display_options['fields']['field_digital_price']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['text'] = '￥[field_digital_price]';
  $handler->display->display_options['fields']['field_digital_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_price']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_price']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品美元价格 */
  $handler->display->display_options['fields']['field_digital_dollar']['id'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['table'] = 'field_data_field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['field'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['label'] = '';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['text'] = '$[field_digital_dollar]';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_dollar']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_dollar']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品相关URL */
  $handler->display->display_options['fields']['field_digital_url']['id'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['table'] = 'field_data_field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['field'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['label'] = '';
  $handler->display->display_options['fields']['field_digital_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['text'] = '了解详情';
  $handler->display->display_options['fields']['field_digital_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['path'] = '[field_digital_url] ';
  $handler->display->display_options['fields']['field_digital_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'digital' => 'digital',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';

  /* Display: 数字产品 */
  $handler = $view->new_display('page', '数字产品', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'digitalproducts';

  /* Display: 苹果产品 */
  $handler = $view->new_display('page', '苹果产品', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '苹果产品 ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'fleft column2';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_digital_price' => 'field_digital_price',
    'field_digital_dollar' => 'field_digital_dollar',
    'field_digital_url' => 'field_digital_url',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 数字产品图片 */
  $handler->display->display_options['fields']['field_digital_image']['id'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['table'] = 'field_data_field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['field'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['label'] = '';
  $handler->display->display_options['fields']['field_digital_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_digital_image']['element_class'] = 'bookbg3';
  $handler->display->display_options['fields']['field_digital_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_digital_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: 数字产品人民币价格 */
  $handler->display->display_options['fields']['field_digital_price']['id'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['table'] = 'field_data_field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['field'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['label'] = '';
  $handler->display->display_options['fields']['field_digital_price']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['text'] = '￥[field_digital_price]';
  $handler->display->display_options['fields']['field_digital_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_price']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_price']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品美元价格 */
  $handler->display->display_options['fields']['field_digital_dollar']['id'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['table'] = 'field_data_field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['field'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['label'] = '';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['text'] = '$[field_digital_dollar]';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_dollar']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_dollar']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品相关URL */
  $handler->display->display_options['fields']['field_digital_url']['id'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['table'] = 'field_data_field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['field'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['label'] = '';
  $handler->display->display_options['fields']['field_digital_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['text'] = '购买';
  $handler->display->display_options['fields']['field_digital_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['path'] = '[field_digital_url] ';
  $handler->display->display_options['fields']['field_digital_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['field_api_classes'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'digitalproducts';

  /* Display: mobile 苹果产品列表 */
  $handler = $view->new_display('page', 'mobile 苹果产品列表', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_digital_price' => 'field_digital_price',
    'field_digital_dollar' => 'field_digital_dollar',
    'field_digital_url' => 'field_digital_url',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 数字产品相关URL */
  $handler->display->display_options['fields']['field_digital_url']['id'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['table'] = 'field_data_field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['field'] = 'field_digital_url';
  $handler->display->display_options['fields']['field_digital_url']['label'] = '';
  $handler->display->display_options['fields']['field_digital_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_digital_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['text'] = '购买';
  $handler->display->display_options['fields']['field_digital_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['path'] = '[field_digital_url] ';
  $handler->display->display_options['fields']['field_digital_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_digital_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_url']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品图片 */
  $handler->display->display_options['fields']['field_digital_image']['id'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['table'] = 'field_data_field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['field'] = 'field_digital_image';
  $handler->display->display_options['fields']['field_digital_image']['label'] = '';
  $handler->display->display_options['fields']['field_digital_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['path'] = '[field_digital_url] ';
  $handler->display->display_options['fields']['field_digital_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_digital_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_digital_image']['element_wrapper_class'] = 'image fleft';
  $handler->display->display_options['fields']['field_digital_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_digital_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_digital_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_digital_url] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'description';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '20',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品人民币价格 */
  $handler->display->display_options['fields']['field_digital_price']['id'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['table'] = 'field_data_field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['field'] = 'field_digital_price';
  $handler->display->display_options['fields']['field_digital_price']['label'] = '';
  $handler->display->display_options['fields']['field_digital_price']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['text'] = '￥[field_digital_price]';
  $handler->display->display_options['fields']['field_digital_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_price']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_price']['field_api_classes'] = 0;
  /* 字段: 内容: 数字产品美元价格 */
  $handler->display->display_options['fields']['field_digital_dollar']['id'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['table'] = 'field_data_field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['field'] = 'field_digital_dollar';
  $handler->display->display_options['fields']['field_digital_dollar']['label'] = '';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['text'] = '$[field_digital_dollar-value]';
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_digital_dollar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_digital_dollar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_digital_dollar']['element_wrapper_class'] = 'price';
  $handler->display->display_options['fields']['field_digital_dollar']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['empty'] = '免费';
  $handler->display->display_options['fields']['field_digital_dollar']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_digital_dollar']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_digital_dollar']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_digital_dollar']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'digital' => 'digital',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    1657 => '1657',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  $handler->display->display_options['path'] = 'mobile/apple';
  $translatables['digital'] = array(
    t('Master'),
    t('数字产品'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('					<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>'),
    t('￥[field_digital_price]'),
    t('$[field_digital_dollar]'),
    t('了解详情'),
    t('[field_digital_url] '),
    t('Has taxonomy terms (with depth)'),
    t('苹果产品'),
    t('苹果产品 '),
    t('购买'),
    t('mobile 苹果产品列表'),
    t('$[field_digital_dollar-value]'),
    t('免费'),
  );
  $export['digital'] = $view;

  $view = new view;
  $view->name = 'kaijian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '开卷导出';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: ISBN */
  $handler->display->display_options['fields']['field_isbn']['id'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['table'] = 'field_data_field_isbn';
  $handler->display->display_options['fields']['field_isbn']['field'] = 'field_isbn';
  $handler->display->display_options['fields']['field_isbn']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isbn']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isbn']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isbn']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isbn']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_isbn']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isbn']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isbn']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isbn']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isbn']['field_api_classes'] = 0;
  /* 字段: 内容: 作者 */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_author']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = 0;
  /* 字段: 内容: 定价 */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price']['field_api_classes'] = 0;
  /* 字段: 内容: 开本 */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_format']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_format']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_format']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_format']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_format']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_format']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_format']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_format']['field_api_classes'] = 0;
  /* 字段: 内容: 出版日期 */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publish_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publish_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_publish_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publish_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publish_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_publish_date']['field_api_classes'] = 0;
  /* 字段: 内容: 装订方式 */
  $handler->display->display_options['fields']['field_zdfs']['id'] = 'field_zdfs';
  $handler->display->display_options['fields']['field_zdfs']['table'] = 'field_data_field_zdfs';
  $handler->display->display_options['fields']['field_zdfs']['field'] = 'field_zdfs';
  $handler->display->display_options['fields']['field_zdfs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zdfs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zdfs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zdfs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zdfs']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zdfs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_zdfs']['field_api_classes'] = 0;
  /* 字段: 内容: 印次 */
  $handler->display->display_options['fields']['field_yc']['id'] = 'field_yc';
  $handler->display->display_options['fields']['field_yc']['table'] = 'field_data_field_yc';
  $handler->display->display_options['fields']['field_yc']['field'] = 'field_yc';
  $handler->display->display_options['fields']['field_yc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_yc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_yc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_yc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_yc']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_yc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_yc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_yc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_yc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_yc']['field_api_classes'] = 0;
  /* 字段: 内容: 页数 */
  $handler->display->display_options['fields']['field_pages']['id'] = 'field_pages';
  $handler->display->display_options['fields']['field_pages']['table'] = 'field_data_field_pages';
  $handler->display->display_options['fields']['field_pages']['field'] = 'field_pages';
  /* 字段: 内容: 字数 */
  $handler->display->display_options['fields']['field_words']['id'] = 'field_words';
  $handler->display->display_options['fields']['field_words']['table'] = 'field_data_field_words';
  $handler->display->display_options['fields']['field_words']['field'] = 'field_words';
  $handler->display->display_options['fields']['field_words']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_words']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_words']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_words']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_words']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_words']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_words']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_words']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_words']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_words']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_words']['field_api_classes'] = 0;
  /* 字段: 内容: 语种 */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = 0;
  /* 字段: 内容: 制品类型(新增加的) */
  $handler->display->display_options['fields']['field_product_type']['id'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['fields']['field_product_type']['field'] = 'field_product_type';
  $handler->display->display_options['fields']['field_product_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_product_type']['field_api_classes'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '正文';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* 字段: 内容: 目录 */
  $handler->display->display_options['fields']['field_directory']['id'] = 'field_directory';
  $handler->display->display_options['fields']['field_directory']['table'] = 'field_data_field_directory';
  $handler->display->display_options['fields']['field_directory']['field'] = 'field_directory';
  $handler->display->display_options['fields']['field_directory']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_directory']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_directory']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_directory']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_directory']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_directory']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_directory']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_directory']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_directory']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_directory']['field_api_classes'] = 0;
  /* 字段: 内容: 前言/序 */
  $handler->display->display_options['fields']['field_preface']['id'] = 'field_preface';
  $handler->display->display_options['fields']['field_preface']['table'] = 'field_data_field_preface';
  $handler->display->display_options['fields']['field_preface']['field'] = 'field_preface';
  $handler->display->display_options['fields']['field_preface']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_preface']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_preface']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_preface']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_preface']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_preface']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_preface']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_preface']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_preface']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_preface']['field_api_classes'] = 0;
  /* 字段: 内容: 作者介绍 */
  $handler->display->display_options['fields']['field_author_info']['id'] = 'field_author_info';
  $handler->display->display_options['fields']['field_author_info']['table'] = 'field_data_field_author_info';
  $handler->display->display_options['fields']['field_author_info']['field'] = 'field_author_info';
  $handler->display->display_options['fields']['field_author_info']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_author_info']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_author_info']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_author_info']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_author_info']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_author_info']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_author_info']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_author_info']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_author_info']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_author_info']['field_api_classes'] = 0;
  /* 字段: 内容: 书评 */
  $handler->display->display_options['fields']['field_sp']['id'] = 'field_sp';
  $handler->display->display_options['fields']['field_sp']['table'] = 'field_data_field_sp';
  $handler->display->display_options['fields']['field_sp']['field'] = 'field_sp';
  $handler->display->display_options['fields']['field_sp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sp']['field_api_classes'] = 0;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'kaijuan1';

  /* Display: 页面 */
  $handler = $view->new_display('page', '页面', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_isbn' => 'field_isbn',
    'field_author' => 'field_author',
    'field_price' => 'field_price',
    'field_format' => 'field_format',
    'field_publish_date' => 'field_publish_date',
    'field_zdfs' => 'field_zdfs',
    'field_yc' => 'field_yc',
    'field_pages' => 'field_pages',
    'field_words' => 'field_words',
    'field_language' => 'field_language',
    'field_product_type' => 'field_product_type',
    'body' => 'body',
    'field_directory' => 'field_directory',
    'field_preface' => 'field_preface',
    'field_author_info' => 'field_author_info',
    'field_sp' => 'field_sp',
    'field_img' => 'field_img',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_isbn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_format' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zdfs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_yc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_words' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_preface' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_img' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'kaijuan';
  $translatables['kaijian'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('ISBN'),
    t('作者'),
    t('定价'),
    t('开本'),
    t('出版日期'),
    t('装订方式'),
    t('印次'),
    t('页数'),
    t('字数'),
    t('语种'),
    t('制品类型(新增加的)'),
    t('正文'),
    t('目录'),
    t('前言/序'),
    t('作者介绍'),
    t('书评'),
    t('产品图片'),
    t('Post date'),
    t('Data export'),
    t('页面'),
  );
  $export['kaijian'] = $view;

  $view = new view;
  $view->name = 'match';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '活动赛事';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '赛事活动';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 字段: 内容: 活动赛事图片 */
  $handler->display->display_options['fields']['field_match_image']['id'] = 'field_match_image';
  $handler->display->display_options['fields']['field_match_image']['table'] = 'field_data_field_match_image';
  $handler->display->display_options['fields']['field_match_image']['field'] = 'field_match_image';
  $handler->display->display_options['fields']['field_match_image']['label'] = '';
  $handler->display->display_options['fields']['field_match_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_match_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_match_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_match_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_match_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_match_image']['element_class'] = 'huodongimg';
  $handler->display->display_options['fields']['field_match_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_match_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_match_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_match_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_match_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_match_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_match_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_match_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_match_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* 字段: 内容: 活动赛事周期 */
  $handler->display->display_options['fields']['field_match_period']['id'] = 'field_match_period';
  $handler->display->display_options['fields']['field_match_period']['table'] = 'field_data_field_match_period';
  $handler->display->display_options['fields']['field_match_period']['field'] = 'field_match_period';
  $handler->display->display_options['fields']['field_match_period']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_match_period']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_match_period']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_match_period']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_match_period']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_match_period']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_match_period']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_match_period']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_match_period']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_match_period']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_match_period']['field_api_classes'] = 0;
  /* 字段: 内容: 活动赛事网址 */
  $handler->display->display_options['fields']['field_match_url']['id'] = 'field_match_url';
  $handler->display->display_options['fields']['field_match_url']['table'] = 'field_data_field_match_url';
  $handler->display->display_options['fields']['field_match_url']['field'] = 'field_match_url';
  $handler->display->display_options['fields']['field_match_url']['label'] = '';
  $handler->display->display_options['fields']['field_match_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['text'] = '<img src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/images/huodong_join20110707_03.gif" alt="活动详情" />';
  $handler->display->display_options['fields']['field_match_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['path'] = '[field_match_url] ';
  $handler->display->display_options['fields']['field_match_url']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_match_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_match_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_match_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_match_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_match_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_match_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_match_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_match_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_match_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_match_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_match_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_match_url']['field_api_classes'] = 0;
  /* 字段: 内容: 活动赛事火热进行中 */
  $handler->display->display_options['fields']['field_match_hot']['id'] = 'field_match_hot';
  $handler->display->display_options['fields']['field_match_hot']['table'] = 'field_data_field_match_hot';
  $handler->display->display_options['fields']['field_match_hot']['field'] = 'field_match_hot';
  $handler->display->display_options['fields']['field_match_hot']['label'] = '';
  $handler->display->display_options['fields']['field_match_hot']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_match_hot']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_match_hot']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_match_hot']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_match_hot']['field_api_classes'] = 0;
  /* Sort criterion: 内容: 活动赛事火热进行中 (field_match_hot) */
  $handler->display->display_options['sorts']['field_match_hot_value']['id'] = 'field_match_hot_value';
  $handler->display->display_options['sorts']['field_match_hot_value']['table'] = 'field_data_field_match_hot';
  $handler->display->display_options['sorts']['field_match_hot_value']['field'] = 'field_match_hot_value';
  $handler->display->display_options['sorts']['field_match_hot_value']['order'] = 'DESC';
  /* Sort criterion: 内容: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'match' => 'match',
  );
  /* Filter criterion: 内容: 活动赛事图片 (field_match_image:fid) */
  $handler->display->display_options['filters']['field_match_image_fid']['id'] = 'field_match_image_fid';
  $handler->display->display_options['filters']['field_match_image_fid']['table'] = 'field_data_field_match_image';
  $handler->display->display_options['filters']['field_match_image_fid']['field'] = 'field_match_image_fid';
  $handler->display->display_options['filters']['field_match_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_match_image_fid']['group'] = '0';

  /* Display: 赛事活动 */
  $handler = $view->new_display('block', '赛事活动', 'block');
  $translatables['match'] = array(
    t('Master'),
    t('赛事活动'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('活动赛事周期'),
    t('<img src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/images/huodong_join20110707_03.gif" alt="活动详情" />'),
    t('[field_match_url] '),
  );
  $export['match'] = $view;

  $view = new view;
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '新闻';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '重要公告';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '更多...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[[created]]';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '正文';
  /* 字段: 内容: 新闻图片 */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  /* Sort criterion: 内容: 推荐到首页 */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Contextual filter: 内容: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: 新闻列表--外研社新闻 */
  $handler = $view->new_display('block', '新闻列表--外研社新闻', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<h2 class="wysxw">外研社新闻<a href="" class="more">>>更多</a></h2>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[[created]]';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 新闻更多 */
  $handler = $view->new_display('page', '新闻更多', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[[created]]';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '正文';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'newsmore_views';

  /* Display: 编辑推荐新闻-1 */
  $handler = $view->new_display('block', '编辑推荐新闻-1', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '编辑推荐新闻 ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 新闻图片 */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_recommended',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 新闻编辑推荐 (field_recommended) */
  $handler->display->display_options['filters']['field_recommended_value']['id'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['filters']['field_recommended_value']['field'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_recommended_value']['group'] = 1;
  /* Filter criterion: 内容: 新闻图片 (field_news_image:fid) */
  $handler->display->display_options['filters']['field_news_image_fid']['id'] = 'field_news_image_fid';
  $handler->display->display_options['filters']['field_news_image_fid']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['filters']['field_news_image_fid']['field'] = 'field_news_image_fid';
  $handler->display->display_options['filters']['field_news_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_image_fid']['group'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 编辑推荐新闻-2 */
  $handler = $view->new_display('block', '编辑推荐新闻-2', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '编辑推荐新闻 ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 新闻图片 */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_recommended',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_image']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 新闻编辑推荐 (field_recommended) */
  $handler->display->display_options['filters']['field_recommended_value']['id'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['filters']['field_recommended_value']['field'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_recommended_value']['group'] = 1;
  /* Filter criterion: 内容: 新闻图片 (field_news_image:fid) */
  $handler->display->display_options['filters']['field_news_image_fid']['id'] = 'field_news_image_fid';
  $handler->display->display_options['filters']['field_news_image_fid']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['filters']['field_news_image_fid']['field'] = 'field_news_image_fid';
  $handler->display->display_options['filters']['field_news_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_image_fid']['group'] = 1;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: 新闻列表--更多--外研社新闻 */
  $handler = $view->new_display('block', '新闻列表--更多--外研社新闻', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<h2 class="wysxw">外研社新闻<a href="" class="more">>>更多</a></h2>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[[created]]';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_caching'] = '8';
  $translatables['news'] = array(
    t('Master'),
    t('重要公告'),
    t('更多...'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[[created]]'),
    t('正文'),
    t('新闻图片'),
    t('全部'),
    t('新闻列表--外研社新闻'),
    t('<h2 class="wysxw">外研社新闻<a href="" class="more">>>更多</a></h2>'),
    t('more'),
    t('新闻更多'),
    t('编辑推荐新闻-1'),
    t('编辑推荐新闻 '),
    t('编辑推荐新闻-2'),
    t('新闻列表--更多--外研社新闻'),
  );
  $export['news'] = $view;

  $view = new view;
  $view->name = 'newsletter_subgroup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '邮件订阅组';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '邮件订阅组';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 字段: 分类术语: 术语ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'admin/view-subscriber/[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'newsletter' => 'newsletter',
  );

  /* Display: 邮件订阅组 */
  $handler = $view->new_display('page', '邮件订阅组', 'page');
  $handler->display->display_options['path'] = 'admin/newsletter-subgroup';
  $translatables['newsletter_subgroup'] = array(
    t('Master'),
    t('邮件订阅组'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('术语ID'),
    t('.'),
    t('admin/view-subscriber/[tid]'),
  );
  $export['newsletter_subgroup'] = $view;

  $view = new view;
  $view->name = 'newsletter_subscriber';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'simplenews_subscriber';
  $view->human_name = '邮件订阅';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '邮件订阅';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: Simplenews subscriber: Subscriber */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'simplenews_subscriber';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 0;
  /* Contextual filter: Simplenews subscription: 术语ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'simplenews_subscription';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;

  /* Display: 邮件列表 */
  $handler = $view->new_display('page', '邮件列表', 'page');
  $handler->display->display_options['path'] = 'admin/view-subscriber';
  $translatables['newsletter_subscriber'] = array(
    t('Master'),
    t('邮件订阅'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('全部'),
    t('邮件列表'),
  );
  $export['newsletter_subscriber'] = $view;

  $view = new view;
  $view->name = 'post';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '重要公告';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '重要公告';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '更多...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[[created]]';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  /* Sort criterion: 内容: 推荐到首页 */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: 内容: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: 内容: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: 内容: 推荐到首页 */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = '0';

  /* Display: 首页重要公告 */
  $handler = $view->new_display('block', '首页重要公告', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* 标题: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p id="fltrp_info">外语教学与研究出版社由北京外国语大学于1979年创办，2010年完成企业改制，更名为“外语教学与研究出版社有限责任公司”（简称“外研社”）...<a href="/aboutus2" target="_blank" class="more">更多>></a></p>			';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '右侧 图';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<img src="sites/fltrp.com/themes/custom/fltrp/images/fltrp20110621_07.png"  class="fltrp_img" alt=""/>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '18';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['post'] = array(
    t('Master'),
    t('重要公告'),
    t('更多...'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[[created]]'),
    t('全部'),
    t('首页重要公告'),
    t('more'),
    t('<p id="fltrp_info">外语教学与研究出版社由北京外国语大学于1979年创办，2010年完成企业改制，更名为“外语教学与研究出版社有限责任公司”（简称“外研社”）...<a href="/aboutus2" target="_blank" class="more">更多>></a></p>			'),
    t('右侧 图'),
    t('<img src="sites/fltrp.com/themes/custom/fltrp/images/fltrp20110621_07.png"  class="fltrp_img" alt=""/>'),
  );
  $export['post'] = $view;

  $view = new view;
  $view->name = 'product_features_education';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '产品属性-教育阶段';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '教育阶段';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?education=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Sort criterion: 分类术语: 权重 */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'language' => 'language',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = '0';

  /* Display: 教育阶段 */
  $handler = $view->new_display('block', '教育阶段', 'block_1');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'jyjd' => 'jyjd',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['product_features_education'] = array(
    t('Master'),
    t('教育阶段'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('productslist?education=[tid]'),
  );
  $export['product_features_education'] = $view;

  $view = new view;
  $view->name = 'product_features_language';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = '产品属性-语种';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '教育阶段';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['class'] = 'cborder';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?education=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Sort criterion: 分类术语: 权重 */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'language' => 'language',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = '0';

  /* Display: 语种 */
  $handler = $view->new_display('block', '语种', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '语种';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'productslist?education=[tid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['product_features_language'] = array(
    t('Master'),
    t('教育阶段'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('productslist?education=[tid]'),
    t('语种'),
  );
  $export['product_features_language'] = $view;

  $view = new view;
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '产品信息';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '产品列表';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '					<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '正文';
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  /* Contextual filter: 内容: 系列图书(新增加的) (field_series) */
  $handler->display->display_options['arguments']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['arguments']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['arguments']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['arguments']['field_series_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_series_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: 产品图片 (field_img:fid) */
  $handler->display->display_options['filters']['field_img_fid']['id'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['table'] = 'field_data_field_img';
  $handler->display->display_options['filters']['field_img_fid']['field'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['operator'] = 'not empty';
  /* Filter criterion: 内容: 系列图书(新增加的) (field_series) */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = '系列图书(新增加的) (field_series)';
  $handler->display->display_options['filters']['field_series_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_series_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'xilie';
  $handler->display->display_options['filters']['field_series_tid']['hierarchy'] = 1;

  /* Display: 产品首页 */
  $handler = $view->new_display('page', '产品首页', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '新品推荐';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_publish_date_value']['expose']['label'] = '出版日期';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: 产品图片 (field_img:fid) */
  $handler->display->display_options['filters']['field_img_fid']['id'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['table'] = 'field_data_field_img';
  $handler->display->display_options['filters']['field_img_fid']['field'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'products_view';

  /* Display: 产品列表 */
  $handler = $view->new_display('page', '产品列表', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '提交';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '升序';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '降序';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'column';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_img']['element_class'] = 'bookbg';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* 字段: 内容: 定价 */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price']['field_api_classes'] = 0;
  /* 字段: 内容: 图书在线阅读URL */
  $handler->display->display_options['fields']['field_read_online']['id'] = 'field_read_online';
  $handler->display->display_options['fields']['field_read_online']['table'] = 'field_data_field_read_online';
  $handler->display->display_options['fields']['field_read_online']['field'] = 'field_read_online';
  $handler->display->display_options['fields']['field_read_online']['label'] = '';
  $handler->display->display_options['fields']['field_read_online']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_read_online']['alter']['text'] = '在线阅读';
  $handler->display->display_options['fields']['field_read_online']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_read_online']['alter']['path'] = '[field_read_online-value] ';
  $handler->display->display_options['fields']['field_read_online']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['link_class'] = 'r';
  $handler->display->display_options['fields']['field_read_online']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_read_online']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_read_online']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_read_online']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_read_online']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_read_online']['element_class'] = 'buy';
  $handler->display->display_options['fields']['field_read_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_online']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_read_online']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_read_online']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_read_online']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_read_online']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_publish_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_publish_date_value']['expose']['label'] = '出版日期 ';
  /* Sort criterion: 内容: 定价 (field_price) */
  $handler->display->display_options['sorts']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['sorts']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_price_value']['expose']['label'] = '定价';
  /* Sort criterion: 内容: 标题 */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = '书名';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_1']['id'] = 'term_node_tid_depth_1';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator_id'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['operator'] = 'term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['identifier'] = 'education';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['vocabulary'] = 'jyjd';
  $handler->display->display_options['filters']['term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_1']['depth'] = '0';
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth_2']['id'] = 'term_node_tid_depth_2';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator_id'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['operator'] = 'term_node_tid_depth_2_op';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['vocabulary'] = 'language';
  $handler->display->display_options['filters']['term_node_tid_depth_2']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_2']['depth'] = '0';
  /* Filter criterion: 内容: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'xilie';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'productslist_view';

  /* Display: 关注排行 */
  $handler = $view->new_display('block', '关注排行', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '关注排行榜';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'assort fcenter';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['counter']['counter_start'] = '2';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[counter] .[title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );

  /* Display: 关注排行-第一个 */
  $handler = $view->new_display('attachment', '关注排行-第一个', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '关注排行-第一个 ';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'f';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['fill_single_line'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '80_60',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
  );

  /* Display: 推荐产品--按教育阶段 */
  $handler = $view->new_display('block', '推荐产品--按教育阶段', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '推荐产品 ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '7';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 内容: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: 内容: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: 产品图片 (field_img:fid) */
  $handler->display->display_options['filters']['field_img_fid']['id'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['table'] = 'field_data_field_img';
  $handler->display->display_options['filters']['field_img_fid']['field'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['operator'] = 'not empty';

  /* Display: 推荐产品--按系列 */
  $handler = $view->new_display('block', '推荐产品--按系列', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '推荐产品 ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '7';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 内容: 系列图书(新增加的) (field_series) */
  $handler->display->display_options['arguments']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['arguments']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['arguments']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['arguments']['field_series_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_series_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_series_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_series_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_series_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_series_tid']['not'] = 0;
  /* Contextual filter: 内容: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: 产品图片 (field_img:fid) */
  $handler->display->display_options['filters']['field_img_fid']['id'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['table'] = 'field_data_field_img';
  $handler->display->display_options['filters']['field_img_fid']['field'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['operator'] = 'not empty';

  /* Display: 编辑推荐产品 */
  $handler = $view->new_display('block', '编辑推荐产品', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '推荐产品 ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_img' => 'field_img',
    'title' => 'title',
    'field_author' => 'field_author',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 产品图片 */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '80_60',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '8';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 作者 */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '著译者:[field_author-value] ';
  $handler->display->display_options['fields']['field_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_author']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_author']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: 产品图片 (field_img:fid) */
  $handler->display->display_options['filters']['field_img_fid']['id'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['table'] = 'field_data_field_img';
  $handler->display->display_options['filters']['field_img_fid']['field'] = 'field_img_fid';
  $handler->display->display_options['filters']['field_img_fid']['operator'] = 'not empty';
  /* Filter criterion: 内容: 编辑推荐 (field_author_recommended) */
  $handler->display->display_options['filters']['field_author_recommended_value']['id'] = 'field_author_recommended_value';
  $handler->display->display_options['filters']['field_author_recommended_value']['table'] = 'field_data_field_author_recommended';
  $handler->display->display_options['filters']['field_author_recommended_value']['field'] = 'field_author_recommended_value';
  $handler->display->display_options['filters']['field_author_recommended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_author_recommended_value']['group'] = '0';
  $translatables['products'] = array(
    t('Master'),
    t('产品列表'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('					<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>'),
    t('正文'),
    t('产品图片'),
    t('标题'),
    t('全部'),
    t('系列图书(新增加的) (field_series)'),
    t('产品首页'),
    t('新品推荐'),
    t('出版日期'),
    t('提交'),
    t('排序'),
    t('升序'),
    t('降序'),
    t('定价'),
    t('在线阅读'),
    t('[field_read_online-value] '),
    t('出版日期 '),
    t('书名'),
    t('Has taxonomy terms (with depth)'),
    t('Has taxonomy term'),
    t('关注排行'),
    t('关注排行榜'),
    t('[counter] .[title] '),
    t('关注排行-第一个'),
    t('关注排行-第一个 '),
    t('推荐产品--按教育阶段'),
    t('推荐产品 '),
    t('推荐产品--按系列'),
    t('编辑推荐产品'),
    t('著译者:[field_author-value] '),
  );
  $export['products'] = $view;

  $view = new view;
  $view->name = 'search_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '自定义搜索页';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type' => 'type',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* 字段: 内容: 类型 */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[[type]]';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[type]  [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: 内容: 出版日期 (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  /* Contextual filter: 内容: Body (body) */
  $handler->display->display_options['arguments']['body_value']['id'] = 'body_value';
  $handler->display->display_options['arguments']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['arguments']['body_value']['field'] = 'body_value';
  $handler->display->display_options['arguments']['body_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['body_value']['summary']['format'] = 'default_summary';
  /* Contextual filter: 内容: 标题 */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['group'] = 2;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Body (body)';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'introduction';
  $handler->display->display_options['filters']['body_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['body_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '标题';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: 自定义搜索 */
  $handler = $view->new_display('page', '自定义搜索', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'searcher';
  $translatables['search_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div id="productnotfount">
							<p class="err_msg">很抱歉，没有找到与相关的信息</p>
							<span>建议您：</span>
							<ul>
    					 		<li>1. 看看输入的文字是否有误</li>
    					 		<li>2. 去掉可能不必要的字词，如“的”、“什么”等</li>
    						</ul>
						</div>'),
    t('[[type]]'),
    t('[type]  [title]'),
    t('全部'),
    t('Body (body)'),
    t('标题'),
    t('自定义搜索'),
  );
  $export['search_view'] = $view;

  $view = new view;
  $view->name = 'series_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'series_list(反向取系列，很另类的实现方式)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'series_list';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_series';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_series' => 'field_series',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 字段: 内容: 系列图书(新增加的) */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['label'] = '';
  $handler->display->display_options['fields']['field_series']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_series']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_series']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_series']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_series']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_series']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_series']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_series']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_series']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: 内容: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = '0';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  /* Filter criterion: 内容: 系列图书(新增加的) (field_series) */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_series_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_series_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'xilie';
  $handler->display->display_options['filters']['field_series_tid']['hierarchy'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: 页面 */
  $handler = $view->new_display('page', '页面', 'page_1');
  $handler->display->display_options['path'] = 'sl';
  $translatables['series_list'] = array(
    t('Master'),
    t('series_list'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t(' '),
    t('Has taxonomy terms (with depth)'),
    t('Block'),
    t('页面'),
  );
  $export['series_list'] = $view;

  $view = new view;
  $view->name = 'statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'statistics';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: 分类术语: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['group_type'] = 'count';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* 字段: 分类术语: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* 字段: COUNT(内容: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '数量';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['format_plural'] = 0;
  /* Filter criterion: 分类术语: 词汇表 */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['vid']['group'] = '0';
  /* Filter criterion: 内容: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'jyjd';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'statistics';

  /* Display: 区块 */
  $handler = $view->new_display('block', '区块', 'block_1');
  $translatables['statistics'] = array(
    t('Master'),
    t('statistics'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('节点'),
    t('数量'),
    t('Has taxonomy term'),
    t('Page'),
    t('区块'),
  );
  $export['statistics'] = $view;

  $view = new view;
  $view->name = 'training';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '培训';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '教师培训';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 培训周期 */
  $handler->display->display_options['fields']['field_training_period']['id'] = 'field_training_period';
  $handler->display->display_options['fields']['field_training_period']['table'] = 'field_data_field_training_period';
  $handler->display->display_options['fields']['field_training_period']['field'] = 'field_training_period';
  $handler->display->display_options['fields']['field_training_period']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_period']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_period']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_period']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_period']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_period']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_training_period']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_training_period']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_training_period']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_period']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_period']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_training_period']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_training_period']['field_api_classes'] = 0;
  /* 字段: 内容: 培训报名及咨询联系方式 */
  $handler->display->display_options['fields']['field_training_contact']['id'] = 'field_training_contact';
  $handler->display->display_options['fields']['field_training_contact']['table'] = 'field_data_field_training_contact';
  $handler->display->display_options['fields']['field_training_contact']['field'] = 'field_training_contact';
  $handler->display->display_options['fields']['field_training_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_contact']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_training_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_contact']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_training_contact']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_training_contact']['field_api_classes'] = 0;
  /* 字段: 内容: 培训项目图片 */
  $handler->display->display_options['fields']['field_training_image']['id'] = 'field_training_image';
  $handler->display->display_options['fields']['field_training_image']['table'] = 'field_data_field_training_image';
  $handler->display->display_options['fields']['field_training_image']['field'] = 'field_training_image';
  $handler->display->display_options['fields']['field_training_image']['label'] = '';
  $handler->display->display_options['fields']['field_training_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_training_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_training_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_training_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_training_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_training_image']['field_api_classes'] = 0;
  /* 字段: 内容: 培训项目网站网址 */
  $handler->display->display_options['fields']['field_training_url']['id'] = 'field_training_url';
  $handler->display->display_options['fields']['field_training_url']['table'] = 'field_data_field_training_url';
  $handler->display->display_options['fields']['field_training_url']['field'] = 'field_training_url';
  $handler->display->display_options['fields']['field_training_url']['label'] = '';
  $handler->display->display_options['fields']['field_training_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_training_url']['alter']['text'] = '<img src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/images/join_btn20110630.jpg" alt="" />';
  $handler->display->display_options['fields']['field_training_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_training_url']['alter']['path'] = '[field_training_url] ';
  $handler->display->display_options['fields']['field_training_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_training_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_training_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_url']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_training_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_training_url']['field_api_classes'] = 0;
  /* 字段: 内容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Filter criterion: 内容: 培训类型 (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_value']['id'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_value']['field'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['value'] = array(
    '师训' => '师训',
  );
  $handler->display->display_options['filters']['field_training_type_value']['group'] = '0';

  /* Display: 个人培训 */
  $handler = $view->new_display('block', '个人培训', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 培训类型 (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_value']['id'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_value']['field'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['value'] = array(
    '个人' => '个人',
  );
  $handler->display->display_options['filters']['field_training_type_value']['group'] = 1;

  /* Display: 教师培训 */
  $handler = $view->new_display('block', '教师培训', 'block_1');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 培训类型 (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_value']['id'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_value']['field'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['value'] = array(
    '师训' => '师训',
  );
  $handler->display->display_options['filters']['field_training_type_value']['group'] = 1;

  /* Display: 教师培训  */
  $handler = $view->new_display('page', '教师培训 ', 'page_1');
  $handler->display->display_options['path'] = 'training/teacher';
  $handler->display->display_options['menu']['title'] = '培训业务';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['title'] = '培训业务';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: 个人培训  */
  $handler = $view->new_display('page', '个人培训 ', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '个人培训';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 培训类型 (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_value']['id'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_value']['field'] = 'field_training_type_value';
  $handler->display->display_options['filters']['field_training_type_value']['value'] = array(
    '个人' => '个人',
  );
  $handler->display->display_options['filters']['field_training_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'training/person';
  $handler->display->display_options['menu']['title'] = '培训业务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: 培训业务母版 */
  $handler = $view->new_display('page', '培训业务母版', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '培训业务';
  $handler->display->display_options['path'] = 'training';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '培训业务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = '培训业务';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $translatables['training'] = array(
    t('Master'),
    t('教师培训'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('培训周期'),
    t('培训报名及咨询联系方式'),
    t('<img src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/images/join_btn20110630.jpg" alt="" />'),
    t('[field_training_url] '),
    t('_blank'),
    t('个人培训'),
    t('教师培训 '),
    t('个人培训 '),
    t('培训业务母版'),
    t('培训业务'),
  );
  $export['training'] = $view;

  return $export;
}
