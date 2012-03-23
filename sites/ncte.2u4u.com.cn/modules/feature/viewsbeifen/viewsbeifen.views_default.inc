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
  $view->name = 'chakan_kaodian_baoming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '让管理员查看每个考点报名情况';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '让管理员查看每个考点报名情况';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['label'] = '姓';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['label'] = '名';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['label'] = '';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['filters']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['filters']['field_kaochang_nid']['field'] = 'field_kaochang_nid';

  /* Display: 让管理员查看每个考点报名情况 */
  $handler = $view->new_display('block', '让管理员查看每个考点报名情况', 'block');
  $handler->display->display_options['block_description'] = '让管理员查看每个考点报名情况';

  /* Display: 当前考点未分配考场的考生 */
  $handler = $view->new_display('block', '当前考点未分配考场的考生', 'block_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['filters']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['filters']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['operator'] = 'empty';
  $handler->display->display_options['block_description'] = '让管理员查看每个考点报名情况';
  $translatables['chakan_kaodian_baoming'] = array(
    t('Master'),
    t('让管理员查看每个考点报名情况'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('author'),
    t('姓'),
    t('名'),
    t('全部'),
    t('当前考点未分配考场的考生'),
  );
  $export['chakan_kaodian_baoming'] = $view;

  $view = new view;
  $view->name = 'chakan_kaodian_yonghu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = '查看考点用户';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '查看考试管理中心用户';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* 字段: 用户: 单位负责人和（或）新概念英语等级考试负责人姓名和电话及学校地址 */
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['id'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['table'] = 'field_data_field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['label'] = '';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field_api_classes'] = 0;
  /* 字段: 用户: 所在省份和城市 */
  $handler->display->display_options['fields']['field_shengfen_chengshi']['id'] = 'field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['table'] = 'field_data_field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['field'] = 'field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['label'] = '地区';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['field_api_classes'] = 0;
  /* 字段: 用户: 最后登录 */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['login']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['login']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['login']['alter']['external'] = 0;
  $handler->display->display_options['fields']['login']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['login']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['login']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['login']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['login']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['login']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['login']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['login']['alter']['html'] = 0;
  $handler->display->display_options['fields']['login']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['login']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['login']['hide_empty'] = 0;
  $handler->display->display_options['fields']['login']['empty_zero'] = 0;
  $handler->display->display_options['fields']['login']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['login']['date_format'] = 'time ago';
  /* Sort criterion: 用户: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 用户: 有效的 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 用户: 角色 */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: 查看考点用户 */
  $handler = $view->new_display('page', '查看考点用户', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '查看考点用户';
  $handler->display->display_options['path'] = 'chakankaodian';

  /* Display: 查看考试管理中心用户 */
  $handler = $view->new_display('page', '查看考试管理中心用户', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 用户: 有效的 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 用户: 角色 */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'chakankaoshizhongxin';
  $translatables['chakan_kaodian_yonghu'] = array(
    t('Master'),
    t('查看考试管理中心用户'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('地区'),
    t('最后登录'),
    t('查看考点用户'),
  );
  $export['chakan_kaodian_yonghu'] = $view;

  $view = new view;
  $view->name = 'city';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'city';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'city';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: 分类术语: 用户 using 所在省份和城市 */
  $handler->display->display_options['relationships']['reverse_field_shengfen_chengshi_user']['id'] = 'reverse_field_shengfen_chengshi_user';
  $handler->display->display_options['relationships']['reverse_field_shengfen_chengshi_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_shengfen_chengshi_user']['field'] = 'reverse_field_shengfen_chengshi_user';
  $handler->display->display_options['relationships']['reverse_field_shengfen_chengshi_user']['required'] = 0;
  /* Relationship: 用户: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_shengfen_chengshi_user';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  $handler->display->display_options['fields']['name']['alter']['path'] = 'city/[tid]';
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
  /* 字段: COUNT(内容: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['format_plural'] = 0;
  /* Filter criterion: 分类词汇表: 机器名称 */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'shengshi_xinxi' => 'shengshi_xinxi',
  );
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'citys1';
  $translatables['city'] = array(
    t('Master'),
    t('city'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_shengfen_chengshi'),
    t('nodes'),
    t('.'),
    t(','),
    t('city/[tid]'),
    t('Page'),
  );
  $export['city'] = $view;

  $view = new view;
  $view->name = 'city_kaosheng';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'city kaosheng';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'city kaosheng';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<?php  $view = views_get_current_view();  print $view->total_rows;  
?>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
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
  /* Contextual filter: 用户: 所在省份和城市 (field_shengfen_chengshi) */
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['id'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['table'] = 'field_data_field_shengfen_chengshi';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['field'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['not'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_baokao_jibie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['operator_id'] = 'field_baokao_jibie_value_op';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['label'] = '报考级别 (field_baokao_jibie)';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['operator'] = 'field_baokao_jibie_value_op';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['identifier'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'city2/%';
  $translatables['city_kaosheng'] = array(
    t('Master'),
    t('city kaosheng'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<?php  $view = views_get_current_view();  print $view->total_rows;  
?>'),
    t('author'),
    t('全部'),
    t('报考级别 (field_baokao_jibie)'),
    t('Page'),
  );
  $export['city_kaosheng'] = $view;

  $view = new view;
  $view->name = 'citykaodian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = '按城市查看考点';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '查看考试管理中心用户';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'kaodian/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
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
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* 字段: 用户: 单位负责人和（或）新概念英语等级考试负责人姓名和电话及学校地址 */
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['id'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['table'] = 'field_data_field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['label'] = '';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field_api_classes'] = 0;
  /* Sort criterion: 用户: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: 所在省份和城市 (field_shengfen_chengshi) */
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['id'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['table'] = 'field_data_field_shengfen_chengshi';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['field'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_options']['vocabularies'] = array(
    'tags' => 0,
    'shengshi_xinxi' => 0,
  );
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['not'] = 0;

  /* Display: 查看考点用户 */
  $handler = $view->new_display('page', '查看考点用户', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '查看考点用户';
  $handler->display->display_options['path'] = 'city/%';
  $translatables['citykaodian'] = array(
    t('Master'),
    t('查看考试管理中心用户'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('kaodian/[uid]'),
    t('_blank'),
    t('全部'),
    t('查看考点用户'),
  );
  $export['citykaodian'] = $view;

  $view = new view;
  $view->name = 'daochu_shuju';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '导出考生数据';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '导出考生数据';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
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
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 准考证号 */
  $handler->display->display_options['fields']['field_zkzh']['id'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['field'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['field_api_classes'] = 0;
  /* 字段: 内容: 考场 */
  $handler->display->display_options['fields']['field_kaochang']['id'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['field'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['field_api_classes'] = 0;
  /* 字段: 内容: 座位号 */
  $handler->display->display_options['fields']['field_zuowei']['id'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['table'] = 'field_data_field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['field'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_zuowei']['field_api_classes'] = 0;
  /* Sort criterion: 内容: 准考证号 (field_zkzh) */
  $handler->display->display_options['sorts']['field_zkzh_value']['id'] = 'field_zkzh_value';
  $handler->display->display_options['sorts']['field_zkzh_value']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['sorts']['field_zkzh_value']['field'] = 'field_zkzh_value';
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'daochu';
  $translatables['daochu_shuju'] = array(
    t('Master'),
    t('导出考生数据'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('姓的拼音'),
    t('名的拼音'),
    t('报考级别'),
    t('准考证号'),
    t('考场'),
    t('座位号'),
    t('Page'),
  );
  $export['daochu_shuju'] = $view;

  $view = new view;
  $view->name = 'daochu_zhaopian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '导出考生照片按准考证号命名';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '导出考生照片按准考证号命名';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 准考证号 */
  $handler->display->display_options['fields']['field_zkzh']['id'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['field'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['field_api_classes'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'daochuzhaopian';
  $translatables['daochu_zhaopian'] = array(
    t('Master'),
    t('导出考生照片按准考证号命名'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('2寸彩色免冠证件照'),
    t('准考证号'),
    t('Page'),
  );
  $export['daochu_zhaopian'] = $view;

  $view = new view;
  $view->name = 'kaochang';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '考场';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '考场';
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
    'kaochang' => 'kaochang',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'kaochang';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '考场';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['kaochang'] = array(
    t('Master'),
    t('考场'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Page'),
  );
  $export['kaochang'] = $view;

  $view = new view;
  $view->name = 'kaochang_kaosheng';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'kaochang kaosheng';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '当前考场考生';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 座位号 */
  $handler->display->display_options['fields']['field_zuowei']['id'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['table'] = 'field_data_field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['field'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_zuowei']['field_api_classes'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  /* 字段: 内容: 准考证号 */
  $handler->display->display_options['fields']['field_zkzh']['id'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['field'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['arguments']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['arguments']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['arguments']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_kaochang_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_kaochang_nid']['not'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    2 => '2',
  );

  /* Display: 一级考生 */
  $handler = $view->new_display('block', '一级考生', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '当前考场一级考生';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['arguments']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['arguments']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['arguments']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_kaochang_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kaochang_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_kaochang_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_kaochang_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['path'] = 'node/%/kaochangkaosheng';

  /* Display: 二级考生 */
  $handler = $view->new_display('block', '二级考生', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '当前考场二级考生';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    2 => '2',
  );

  /* Display: 三级考生 */
  $handler = $view->new_display('block', '三级考生', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '当前考场三级考生';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    3 => '3',
  );

  /* Display: 四级考生 */
  $handler = $view->new_display('block', '四级考生', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '当前考场四级考生';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    4 => '4',
  );

  /* Display: 未分配考场考生页面 */
  $handler = $view->new_display('page', '未分配考场考生页面', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '未分配考场考生';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['filters']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['filters']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'wfpkcks';

  /* Display: 未分配考场考生页面 */
  $handler = $view->new_display('page', '未分配考场考生页面', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '未分配考场考生';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: 内容: 准考证号 (field_zkzh) */
  $handler->display->display_options['filters']['field_zkzh_value']['id'] = 'field_zkzh_value';
  $handler->display->display_options['filters']['field_zkzh_value']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['filters']['field_zkzh_value']['field'] = 'field_zkzh_value';
  $handler->display->display_options['filters']['field_zkzh_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'wfpzkzhks';
  $translatables['kaochang_kaosheng'] = array(
    t('Master'),
    t('当前考场考生'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('姓名'),
    t('座位号'),
    t('2寸彩色免冠证件照'),
    t('名的拼音'),
    t('姓的拼音'),
    t('报考级别'),
    t('准考证号'),
    t('全部'),
    t('一级考生'),
    t('当前考场一级考生'),
    t('Page'),
    t('二级考生'),
    t('当前考场二级考生'),
    t('三级考生'),
    t('当前考场三级考生'),
    t('四级考生'),
    t('当前考场四级考生'),
    t('未分配考场考生页面'),
    t('未分配考场考生'),
  );
  $export['kaochang_kaosheng'] = $view;

  $view = new view;
  $view->name = 'kaodianbaoming';
  $view->description = '显示考点的报名信息';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'kaodianbaoming';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '一级报名信息';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    5 => '5',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['label'] = '姓拼音';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['label'] = '名拼音';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['label'] = '';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';

  /* Display: 一级报名信息区块 */
  $handler = $view->new_display('block', '一级报名信息区块', 'block_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    1 => '1',
  );

  /* Display: 二级报名信息区块 */
  $handler = $view->new_display('block', '二级报名信息区块', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '二级报名信息';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    2 => '2',
  );

  /* Display: 三级报名信息区块 */
  $handler = $view->new_display('block', '三级报名信息区块', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '三级报名信息';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    3 => '3',
  );

  /* Display: 四级报名信息区块 */
  $handler = $view->new_display('block', '四级报名信息区块', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '四级报名信息';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['value'] = array(
    4 => '4',
  );
  $translatables['kaodianbaoming'] = array(
    t('Master'),
    t('一级报名信息'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>'),
    t('author'),
    t('姓拼音'),
    t('名拼音'),
    t('全部'),
    t('一级报名信息区块'),
    t('二级报名信息区块'),
    t('二级报名信息'),
    t('三级报名信息区块'),
    t('三级报名信息'),
    t('四级报名信息区块'),
    t('四级报名信息'),
  );
  $export['kaodianbaoming'] = $view;

  $view = new view;
  $view->name = 'kaodianbm';
  $view->description = '显示考点的报名信息';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'kaodianbm';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '考点报名信息';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['label'] = '姓拼音';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['label'] = '名拼音';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['label'] = '';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title'] = '考点报名信息(%1)';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['break_phrase'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['filters']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['operator_id'] = 'field_baokao_jibie_value_op';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['label'] = '报考级别 (field_baokao_jibie)';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['operator'] = 'field_baokao_jibie_value_op';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['identifier'] = 'field_baokao_jibie_value';
  $handler->display->display_options['filters']['field_baokao_jibie_value']['expose']['reduce'] = 0;

  /* Display: 考点报名情况 */
  $handler = $view->new_display('page', '考点报名情况', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['path'] = 'kaodian/%';
  $handler->display->display_options['menu']['title'] = '考点报名信息';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['kaodianbm'] = array(
    t('Master'),
    t('考点报名信息'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>'),
    t('author'),
    t('姓拼音'),
    t('名拼音'),
    t('全部'),
    t('考点报名信息(%1)'),
    t('报考级别 (field_baokao_jibie)'),
    t('考点报名情况'),
  );
  $export['kaodianbm'] = $view;

  $view = new view;
  $view->name = 'kaodianyonghu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'kaodianyonghu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'kaodianyonghu';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
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
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* 字段: 用户: 单位负责人和（或）新概念英语等级考试负责人姓名和电话及学校地址 */
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['id'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['table'] = 'field_data_field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field_api_classes'] = 0;
  /* 字段: 用户: 所在省份和城市 */
  $handler->display->display_options['fields']['field_shengfen_chengshi']['id'] = 'field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['table'] = 'field_data_field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['field'] = 'field_shengfen_chengshi';
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shengfen_chengshi']['field_api_classes'] = 0;
  /* Sort criterion: 用户: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: 用户: 有效的 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 用户: 角色 */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: 考点用户 */
  $handler = $view->new_display('block', '考点用户', 'block');
  $translatables['kaodianyonghu'] = array(
    t('Master'),
    t('kaodianyonghu'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('单位负责人和（或）新概念英语等级考试负责人姓名和电话及学校地址'),
    t('所在省份和城市'),
    t('全部'),
    t('考点用户'),
  );
  $export['kaodianyonghu'] = $view;

  $view = new view;
  $view->name = 'kaosheng';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'kaosheng';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '未分配考场考生';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
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
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['label'] = '';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 考场 */
  $handler->display->display_options['fields']['field_kaochang']['id'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['field'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['filters']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['filters']['field_kaochang_nid']['field'] = 'field_kaochang_nid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/kaosheng';

  /* Display: 未分配考场 */
  $handler = $view->new_display('block', '未分配考场', 'block_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['filters']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['filters']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['field_kaochang_nid']['operator'] = 'empty';
  $translatables['kaosheng'] = array(
    t('Master'),
    t('未分配考场考生'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('考场'),
    t('Block'),
    t('Page'),
    t('未分配考场'),
  );
  $export['kaosheng'] = $view;

  $view = new view;
  $view->name = 'laodian_baomingxinxi';
  $view->description = '显示考点的报名信息';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '考点报名信息';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '考点报名信息';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* 标题: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/baoming/1\'>一级报名</a></li>
<li><a href=\'/baoming/2\'>二级报名</a></li>
<li><a href=\'/baoming/3\'>三级报名</a></li>
<li><a href=\'/baoming/4\'>四级报名</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* 页脚: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 姓的拼音 */
  $handler->display->display_options['fields']['field_xingming_pinyin']['id'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['table'] = 'field_data_field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['field'] = 'field_xingming_pinyin';
  $handler->display->display_options['fields']['field_xingming_pinyin']['label'] = '姓拼音';
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_pinyin']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 名的拼音 */
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['id'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['table'] = 'field_data_field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field'] = 'field_xingming_ming_pinyin';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['label'] = '名拼音';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_xingming_ming_pinyin']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['label'] = '';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title'] = '考点报名信息(%1)';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['break_phrase'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  /* Filter criterion: 用户: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: 考点管理员查看自己考点报名情况 */
  $handler = $view->new_display('page', '考点管理员查看自己考点报名情况', 'page');
  $handler->display->display_options['path'] = 'baoming';
  $handler->display->display_options['menu']['title'] = '考点报名信息';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: 考点管理员查看自己考点报名情况 */
  $handler = $view->new_display('page', '考点管理员查看自己考点报名情况', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['title'] = '考点报名信息(%1级)';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_baokao_jibie_value']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'baoming/%';
  $handler->display->display_options['menu']['title'] = '考点报名信息';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['laodian_baomingxinxi'] = array(
    t('Master'),
    t('考点报名信息'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<ul>
<li><a href=\'/baoming/1\'>一级报名</a></li>
<li><a href=\'/baoming/2\'>二级报名</a></li>
<li><a href=\'/baoming/3\'>三级报名</a></li>
<li><a href=\'/baoming/4\'>四级报名</a></li>
</ul>'),
    t('<?php  $view = views_get_current_view();  print \'报名人数:\'.$view->total_rows;  
?>'),
    t('author'),
    t('姓拼音'),
    t('名拼音'),
    t('全部'),
    t('考点报名信息(%1)'),
    t('考点管理员查看自己考点报名情况'),
    t('考点报名信息(%1级)'),
  );
  $export['laodian_baomingxinxi'] = $view;

  $view = new view;
  $view->name = 'less10';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'less10';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'less10';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'title';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: 内容: 考场 (field_kaochang) */
  $handler->display->display_options['relationships']['field_kaochang_nid']['id'] = 'field_kaochang_nid';
  $handler->display->display_options['relationships']['field_kaochang_nid']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['relationships']['field_kaochang_nid']['field'] = 'field_kaochang_nid';
  $handler->display->display_options['relationships']['field_kaochang_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_kaochang_nid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaochang' => 'kaochang',
  );
  /* Filter criterion: COUNT(内容: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_kaochang_nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'less10';
  $translatables['less10'] = array(
    t('Master'),
    t('less10'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_kaochang'),
    t('Page'),
  );
  $export['less10'] = $view;

  $view = new view;
  $view->name = 'mykaochang';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'mykaochang';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '我的考场';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'kaochang' => 'kaochang',
  );

  /* Display: 我的考场区块 */
  $handler = $view->new_display('block', '我的考场区块', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/kaochang';
  $translatables['mykaochang'] = array(
    t('Master'),
    t('我的考场'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('author'),
    t('全部'),
    t('我的考场区块'),
    t('Page'),
  );
  $export['mykaochang'] = $view;

  $view = new view;
  $view->name = 'mykaodian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'mykaodian';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '我的考点';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'kaodian' => 'kaodian',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/kaodian';
  $translatables['mykaodian'] = array(
    t('Master'),
    t('我的考点'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('author'),
    t('全部'),
    t('Block'),
    t('Page'),
  );
  $export['mykaodian'] = $view;

  $view = new view;
  $view->name = 'score';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'score';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NCTE考生成绩查询';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 标题: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '查询成绩时,请务必输入正确的姓名和准考证号';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '您输入的姓名,准考证号有误,请重新输入.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: 考生成绩 */
  $handler->display->display_options['fields']['field_score']['id'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['table'] = 'field_data_field_score';
  $handler->display->display_options['fields']['field_score']['field'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['label'] = '成绩';
  $handler->display->display_options['fields']['field_score']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_score']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_score']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_score']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_score']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_score']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_score']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_score']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_score']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_score']['field_api_classes'] = 0;
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
    'score' => 'score',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '姓名';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 1;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: 内容: 准考证号 (field_certificate_id) */
  $handler->display->display_options['filters']['field_certificate_id_value_1']['id'] = 'field_certificate_id_value_1';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['table'] = 'field_data_field_certificate_id';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['field'] = 'field_certificate_id_value';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['operator_id'] = 'field_certificate_id_value_1_op';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['label'] = '准考证号';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['operator'] = 'field_certificate_id_value_1_op';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['identifier'] = 'field_certificate_id_value';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
    'score' => 'score',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '姓名';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['required'] = 1;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: 内容: 准考证号 (field_certificate_id) */
  $handler->display->display_options['filters']['field_certificate_id_value_1']['id'] = 'field_certificate_id_value_1';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['table'] = 'field_data_field_certificate_id';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['field'] = 'field_certificate_id_value';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['operator_id'] = 'field_certificate_id_value_1_op';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['label'] = '准考证号';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['operator'] = 'field_certificate_id_value_1_op';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['identifier'] = 'number';
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_certificate_id_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'score';
  $translatables['score'] = array(
    t('Master'),
    t('NCTE考生成绩查询'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('查询成绩时,请务必输入正确的姓名和准考证号'),
    t('您输入的姓名,准考证号有误,请重新输入.'),
    t('姓名'),
    t('成绩'),
    t('准考证号'),
    t('Page'),
  );
  $export['score'] = $view;

  $view = new view;
  $view->name = 'test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test';
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
  /* 字段: 内容: 考生成绩 */
  $handler->display->display_options['fields']['field_score']['id'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['table'] = 'field_data_field_score';
  $handler->display->display_options['fields']['field_score']['field'] = 'field_score';
  $handler->display->display_options['fields']['field_score']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_score']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_score']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_score']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_score']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_score']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_score']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_score']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_score']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_score']['field_api_classes'] = 0;
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test';
  $translatables['test'] = array(
    t('Master'),
    t('test'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('考生成绩'),
    t('Page'),
  );
  $export['test'] = $view;

  $view = new view;
  $view->name = 'zhongxin_kaodian';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = '考试管理中心查看考点';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '查看考试管理中心用户';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'kaodian/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
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
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* 字段: 用户: 单位负责人和（或）新概念英语等级考试负责人姓名和电话及学校地址 */
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['id'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['table'] = 'field_data_field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field'] = 'field_user_nce_fuzeren';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['label'] = '';
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_nce_fuzeren']['field_api_classes'] = 0;
  /* Sort criterion: 用户: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: 所在省份和城市 (field_shengfen_chengshi) */
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['id'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['table'] = 'field_data_field_shengfen_chengshi';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['field'] = 'field_shengfen_chengshi_tid';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_options']['code'] = 'global $user;
$current_user = user_load($user->uid);
return $current_user->field_shengfen_chengshi[\'und\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_shengfen_chengshi_tid']['not'] = 0;
  /* Filter criterion: 用户: 角色 */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: 查看考点用户 */
  $handler = $view->new_display('page', '查看考点用户', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '查看考点用户';
  $handler->display->display_options['path'] = 'kaodian';
  $translatables['zhongxin_kaodian'] = array(
    t('Master'),
    t('查看考试管理中心用户'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('kaodian/[uid]'),
    t('_blank'),
    t('全部'),
    t('查看考点用户'),
  );
  $export['zhongxin_kaodian'] = $view;

  $view = new view;
  $view->name = 'zkz';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'zkz';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'zkz';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: 内容: 作者 */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '考生姓名';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* 字段: 内容: 2寸彩色免冠证件照 */
  $handler->display->display_options['fields']['field_kaosheng_photo']['id'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['table'] = 'field_data_field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['field'] = 'field_kaosheng_photo';
  $handler->display->display_options['fields']['field_kaosheng_photo']['label'] = '';
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kaosheng_photo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaosheng_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kaosheng_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_kaosheng_photo']['field_api_classes'] = 0;
  /* 字段: 内容: 准考证号 */
  $handler->display->display_options['fields']['field_zkzh']['id'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['table'] = 'field_data_field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['field'] = 'field_zkzh';
  $handler->display->display_options['fields']['field_zkzh']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zkzh']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zkzh']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zkzh']['field_api_classes'] = 0;
  /* 字段: 内容: 座位号 */
  $handler->display->display_options['fields']['field_zuowei']['id'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['table'] = 'field_data_field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['field'] = 'field_zuowei';
  $handler->display->display_options['fields']['field_zuowei']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zuowei']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zuowei']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_zuowei']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_zuowei']['field_api_classes'] = 0;
  /* 字段: 内容: 报考级别 */
  $handler->display->display_options['fields']['field_baokao_jibie']['id'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['field'] = 'field_baokao_jibie';
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_type'] = '0';
  $handler->display->display_options['fields']['field_baokao_jibie']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_baokao_jibie']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_baokao_jibie']['field_api_classes'] = 0;
  /* 字段: 内容: 考场 */
  $handler->display->display_options['fields']['field_kaochang']['id'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['table'] = 'field_data_field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['field'] = 'field_kaochang';
  $handler->display->display_options['fields']['field_kaochang']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['element_type'] = '0';
  $handler->display->display_options['fields']['field_kaochang']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaochang']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaochang']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_kaochang']['field_api_classes'] = 0;
  /* 字段: 用户: 考点编码 */
  $handler->display->display_options['fields']['field_kaodian_bianma']['id'] = 'field_kaodian_bianma';
  $handler->display->display_options['fields']['field_kaodian_bianma']['table'] = 'field_data_field_kaodian_bianma';
  $handler->display->display_options['fields']['field_kaodian_bianma']['field'] = 'field_kaodian_bianma';
  $handler->display->display_options['fields']['field_kaodian_bianma']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['element_type'] = '0';
  $handler->display->display_options['fields']['field_kaodian_bianma']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kaodian_bianma']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kaodian_bianma']['field_api_classes'] = 0;
  /* Sort criterion: 内容: 报考级别 (field_baokao_jibie) */
  $handler->display->display_options['sorts']['field_baokao_jibie_value']['id'] = 'field_baokao_jibie_value';
  $handler->display->display_options['sorts']['field_baokao_jibie_value']['table'] = 'field_data_field_baokao_jibie';
  $handler->display->display_options['sorts']['field_baokao_jibie_value']['field'] = 'field_baokao_jibie_value';
  /* Sort criterion: 内容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: 用户: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'return arg(1);';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kaosheng_baoming' => 'kaosheng_baoming',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'zkz');
  $handler->display->display_options['path'] = 'zkz/%';
  $translatables['zkz'] = array(
    t('Master'),
    t('zkz'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('author'),
    t('考生姓名'),
    t('准考证号'),
    t('座位号'),
    t('报考级别'),
    t('考场'),
    t('考点编码'),
    t('全部'),
    t('Page'),
  );
  $export['zkz'] = $view;

  return $export;
}
