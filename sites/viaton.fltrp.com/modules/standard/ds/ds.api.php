<?php

/**
 * @file
 * Hooks provided by Display Suite module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hook_test_ctools_plugin_api($module, $api) {
  if (($module == 'ds' && $api == 'ds') || ($module == 'ds_extras' && $api == 'ds_extras')) {
    return array('version' => 1);
  }
}

/**
 * Expose Display suite field settings.
 *
 * This hook is called by CTools. For this hook to work, you need
 * hook_ctools_plugin_api(). The values of this hook can be overridden
 * and reverted through the UI.
 */
function hook_ds_field_settings_info() {
  $ds_fieldsettings = array();

  $ds_fieldsetting = new stdClass;
  $dsfieldsetting->disabled = FALSE; /* Edit this to true to make a default dsfieldsetting disabled initially */
  $dsfieldsetting->api_version = 1;
  $dsfieldsetting->id = 'node|article|default';
  $dsfieldsetting->entity_type = 'node';
  $dsfieldsetting->bundle = 'article';
  $dsfieldsetting->view_mode = 'default';
  $dsfieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $dsfieldsettings['node|article|default'] = $dsfieldsetting;

  return $dsfieldsettings;
}

/**
 * Expose default layout settings info.
 *
 * This hook is called by CTools. For this hook to work, you need
 * hook_ctools_plugin_api(). The values of this hook can be overridden
 * and reverted through the UI.
 */
function hook_ds_layout_settings_info() {
  $dslayouts = array();

  $dslayout = new stdClass;
  $dslayout->disabled = FALSE; /* Edit this to true to make a default dslayout disabled initially */
  $dslayout->api_version = 1;
  $dslayout->id = 'node|article|default';
  $dslayout->entity_type = 'node';
  $dslayout->bundle = 'article';
  $dslayout->view_mode = 'default';
  $dslayout->layout = 'ds_2col';
  $dslayout->settings = array(
    'hide_empty_regions' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'node_link',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'node_link' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $dslayouts['node|article|default'] = $dslayout;

  return $dslayouts;
}

/**
 * Expose default view modes.
 *
 * This hook is called by CTools. For this hook to work, you need
 * hook_ctools_plugin_api(). The values of this hook can be overridden
 * and reverted through the UI.
 */
function hook_ds_view_modes_info() {
  $ds_view_modes = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->disabled = FALSE; /* Edit this to true to make a default ds_view_mode disabled initially */
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'test_exportables';
  $ds_view_mode->label = 'Test exportables';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $ds_view_modes['test_exportables'] = $ds_view_mode;

  return $ds_view_modes;
}

/**
 * Define fields. These fields are not overridable through the interface.
 * If you want those, look at hook_ds_custom_fields_info().
 *
 * @param $entity_type
 *   The name of the entity which we are requesting fields for, e.g. 'node'.
 *
 * @return $fields
 *   A collection of fields which keys are the entity type name and values
 *   a collection fields.
 *
 * @see ds_get_fields()
 */
function hook_ds_fields_info($entity_type) {
  $fields = array();

  $fields['title'] = array(

    // title: title of the field
    'title' => t('Title'),

    // type: type of field
    // - DS_FIELD_TYPE_THEME      : calls a theming function.
    // - DS_FIELD_TYPE_FUNCTION   : calls a custom function.
    // - DS_FIELD_TYPE_CODE       : calls ds_render_code_field().
    // - DS_FIELD_TYPE_BLOCK      : calls ds_render_block_field().
    // - DS_FIELD_TYPE_PREPROCESS : calls nothing, just takes a key from the
    //                              variable field that is passed on.
    // - DS_FIELD_TYPE_IGNORE     : calls nothing, use this if you simple want
    //                              to drag and drop. The field itself will have
    //                              a theme function.
    'field_type' => DS_FIELD_TYPE_FUNCTION,

    // ui_limit : only used for the manage display screen so
    // you can limit fields to show based on bundles or view modes
    // the values are always in the form of $bundle|$view_mode
    // You may use * to select all.
    // Make sure you use the machine name.
    'ui_limit' => array('article|full', '*|search_index'),

    // file: an optional file in which the function resides.
    // Only for DS_FIELD_TYPE_FUNCTION.
    'file' => 'optional_filename',

    // function: only for DS_FIELD_TYPE_FUNCTION.
    'function' => 'theme_ds_title_field',

    // properties: can have different keys.
    'properties' => array(

      // formatters: optional if a a function is used.
      'formatters' => array(
        'node_title_nolink_h1' => t('H1 title'),
        'node_title_link_h1' => t('H1 title, linked to node'),
      ),

      // settings & default: optional if you have a settings form for your field.
      'settings' => array(
        'wrapper' => array('type' => 'textfield', 'description' => t('Eg: h1, h2, p')),
        'link' => array('type' => 'select', 'options' => array('yes', 'no')),
      ),
      'default' => array('wrapper' => 'h2', 'link' => 0),

      // code: optional, only for code field.
      'code' => 'my code here',

      // use_token: optional, only for code field.
      'use_token' => TRUE, // or FALSE,

      // block: the module and delta of the block, only for block fields.
      'block' => 'user-menu',

      // block_render: block render type, only for block fields.
      // - DS_BLOCK_CONTENT       : render through block template file.
      // - DS_BLOCK_TITLE_CONTENT : render only title and content.
      // - DS_BLOCK_CONTENT       : render only content.
      'block_render' => DS_BLOCK_CONTENT,
    )
  );

  return array('node' => $fields);

}

/**
 * Define custom fields which can be overridden through the UI and which
 * are exportable. The keys are almost the same as in hook_ds_fields_info()
 * except that field_type is limited and you need an entities key.
 *
 * This hook is called by CTools. For this hook to work, you need
 * hook_ctools_plugin_api(). The values of this hook can be overridden
 * and reverted through the UI.
 */
function hook_ds_custom_fields_info() {
  $ds_fields = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_field';
  $ds_field->label = 'Custom field';

  // Field type: either block or code
  // DS_FIELD_TYPE_CODE: 5
  // DS_FIELD_TYPE_BLOCK: 6
  $ds_field->field_type = 5;

  // Collection of entities on which this custom field can work on.
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = (object) array(
    'code' => array(
      'value' => '<? print "this is a custom field"; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $ds_fields['custom_field'] = $ds_field;

  return $ds_fields;
}

/**
 * Expose Views layouts definitions.
 *
 * This hook is called by CTools. For this hook to work, you need
 * hook_ctools_plugin_api(). The values of this hook can be overridden
 * and reverted through the UI.
 */
function hook_ds_vd_info() {
  $ds_vds = array();

  $ds_vd = new stdClass;
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'frontpage-page';
  $ds_vd->label = 'Frontpage: Views displays';
  $ds_vds['frontpage-page'] = $ds_vd;

  return $ds_vds;
}

/**
 * Alter fields defined by Display Suite
 *
 * @param $fields
 *   An array with fields which can be altered just before they get cached.
 * @param $entity_type
 *   The name of the entity type.
 */
function hook_ds_fields_info_alter(&$fields, $entity_type) {
  if (isset($fields['title'])) {
    $fields['title']['title'] = t('My title');
  }
}

/**
 * Define theme functions for fields.
 *
 * This only is necessary when you're using the field settings
 * plugin which comes with the DS extras module. This function
 * will call the theming functions directly, not through
 * theme('function', $variables); A function gets 2 parameters,
 * the $variables and $config which are the configuration options
 * for the current field: theme_ds_field_custom($variables, $config);
 *
 * @return $field_theme_functions
 *   A collection of field theming functions.
 */
function hook_ds_field_theme_functions_info() {
  return array('theme_field' => t('Theme field'));
}

/**
 * Return configuration summary for the field format.
 *
 * As soon as you have hook_ds_fields and one of the fields
 * has a settings key, Display Suite will call this hook for the summary.
 *
 * @param $field
 *   The configuration of the field.
 *
 * @return $summary
 *   The summary to show on the Field UI.
 */
function hook_ds_field_format_summary($field) {
  return 'Field summary';
}

/**
 * Return a settings form for a Display Suite field.
 *
 * As soon as you have hook_ds_fields and one of the fields
 * has a settings key, Display Suite will call this hook for field form.
 *
 * @param $field
 *   The configuration of the field.
 *
 * @return $form
 *   A form definition.
 */
function hook_ds_field_settings_form($field) {

  // Saved formatter settings are on $field['formatter_settings'];
  $settings = isset($field['formatter_settings']) ? $field['formatter_settings'] : $field['properties']['default'];

  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#default_value' => $settings['label'],
  );
}

/**
 * Modify the layout settings just before they get saved.
 *
 * @param $record
 *   The record just before it gets saved into the database.
 * @param $form_state
 *   The form_state values.
 */
function hook_ds_layout_settings_alter($record, $form_state) {
  $record->settings['hide_page_title'] = TRUE;
}

/**
 * Modify the field settings before they get saved.
 *
 * @param $field_settings
 *   A collection of field settings which keys are fields.
 * @param $form
 *   The current form which is submitted.
 * @param $form_state
 *   The form state with all its values.
 */
function hook_ds_field_settings_alter(&$field_settings, $form, $form_state) {
  $field_settings['title']['region'] = 'left';
}

/**
 * Define layouts from code.
 *
 * @return $layouts
 *   A collection of layouts.
 */
function hook_ds_layout_info() {
  $path = drupal_get_path('module', 'foo');

  $layouts = array(
    'foo_1col' => array(
      'label' => t('Foo one column'),
      'path' => $path . '/layouts/foo_1col',
      'regions' => array(
        'foo_content' => t('Content'),
      ),
      'css' => TRUE,
    ),
  );

  return $layouts;
}

/**
 * Alter layouts found by Display Suite.
 *
 * @param $layouts
 *   A array of layouts which keys are the layout and which values are
 *   properties of that layout (label, path, regions and css).
 */
function hook_ds_layout_info_alter(&$layouts) {
  unset($layouts['ds_2col']);
}

/**
 * Alter the region options in the field UI screen.
 *
 * This function is only called when a layout has been chosen.
 *
 * @param $context
 *   A collection of keys for the context. The keys are 'entity_type',
 *   'bundle' and 'view_mode'.
 * @param $region_info
 *   A collection of info for regions. The keys are 'region_options'
 *   and 'table_regions'.
 */
function hook_ds_layout_region_alter($context, &$region_info) {
  $region_info['region_options'][$block_key] = $block['title'];
  $region_info['table_regions'][$block_key] = array(
    'title' => check_plain($block['title']),
    'message' => t('No fields are displayed in this region'),
  );
}

/**
 * Alter the field label options. Note that you will either
 * update the preprocess functions or the field.tpl.php file when
 * adding new options.
 *
 * @param $field_label_options
 *   A collection of field label options.
 */
function hook_ds_label_options_alter(&$field_label_options) {
  $field_label_options['label_after'] = t('Label after field');
}

/**
 * Themes can also define extra layouts.
 *
 * Create a ds_layouts folder and then a folder name that will
 * be used as key for the layout. The folder should at least have 2 files:
 *
 * - key.inc
 * - key.tpl.php
 *
 * The css file is optional.
 * - key.css
 *
 * e.g.
 * bartik/ds_layouts/bartik_ds/bartik_ds.inc
 *                            /bartik-ds.tpl.php
 *                            /bartik_ds.css
 *
 * bartik_ds.inc must look like this:
 *

  // Fuction name is ds_LAYOUT_KEY
  function ds_bartik_ds() {
    return array(
      'label' => t('Bartik DS'),
      'regions' => array(
        // The key of this region name is also the variable used in
        // the template to print the content of that region.
        'bartik' => t('Bartik DS'),
      ),
      // Add this if there is a default css file.
      'css' => TRUE,
    );
  }

 */

/**
 * Theme an entity coming from the views entity plugin.
 *
 * @param $entity
 *   The complete entity.
 * @param $view_mode
 *   The name of the view mode.
 */
function ds_views_row_ENTITY_NAME($entity, $view_mode) {
  $nid = $vars['row']->{$vars['field_alias']};
  $node = node_load($nid);
  return drupal_render(node_view($node, $view_mode));
}

/**
 * Theme an entity through an advanced function coming from the views entity plugin.
 *
 * @param $vars
 *   An array of variables from the views preprocess functions.
 * @param $view_mode
 *   The name of the view mode.
 */
function ds_views_row_adv_VIEWS_NAME(&$vars, $view_mode) {
  // You can do whatever you want to here.
  $vars['object'] = 'This is what I want for christmas.';
}

/**
 * @} End of "addtogroup hooks".
 */
