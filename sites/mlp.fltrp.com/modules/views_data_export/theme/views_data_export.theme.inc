<?php

/**
 * @file
 * Theme related functions for processing our output style plugins.
 *
 * Views bug: http://drupal.org/node/593336
 */


/**
 * Theme a status message
 */
function theme_views_data_export_message($var) {
  $output = '';
  $output .= '<div class="messages status ' . $var['type'] . '">';
  $output .= $var['message'];
  $output .= '</div>';
  return $output;
}

/**
 * Theme a feed link.
 *
 * This theme function uses the theme pattern system to allow it to be
 * overidden in a more specific manner. The options for overiding this include
 * providing per display id; per type; per display id and per type.
 *
 * e.g.
 * For the view "export_test" with the display "page_1" and the type "csv" you
 * would have the following options.
 *   views_data_export_feed_icon__export_test__page_1__csv
 *   views_data_export_feed_icon__export_test__page_1
 *   views_data_export_feed_icon__export_test__csv
 *   views_data_export_feed_icon__page_1__csv
 *   views_data_export_feed_icon__page_1
 *   views_data_export_feed_icon__csv
 *   views_data_export_feed_icon
 *
 * @ingroup themeable
 */
function theme_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => true);
  if ($query) {
    $url_options['query'] = $query;
  }
  $image = theme('image', array('path' => $image_path, 'alt' => $text, 'title' => $text));
  return l($image, $url, $url_options);
}

/**
 * Theme callback for the export complete page.
 *
 * @param $file
 *  Link to output file
 */
function theme_views_data_export_complete_page($variables) {
  extract($variables, EXTR_SKIP);
  drupal_set_title(t('Data export successful'));
  drupal_add_html_head(array('#tag' => 'meta', '#attributes' => array('http-equiv' =>"refresh", 'content' => '3;url='. $file)), 'views_data_export_download');
  $output = '';
  $output .= '<p>';
  $output .= t('Your export has been created. View/download the file <a href="@link">here</a> (will automatically download in 3 seconds.)', array('@link' => $file));
  $output .= '</p>';

  if (!empty($return_url)) {
    $output .= '<p>';
    $output .= l(t('Return to previous page'), $return_url);
    $output .= '</p>';
  }
  return $output;
}


function template_preprocess_views_data_export(&$vars) {
  $vars['header'] = $vars['rows']['header'];
  $vars['body'] = $vars['rows']['body'];
  $vars['footer'] = $vars['rows']['footer'];

  $view     = $vars['view'];
  $fields   = &$view->field;
}

function template_preprocess_views_data_export_csv_header(&$vars) {
  _views_data_export_header_shared_preprocess($vars);

  // Make sure we catch saved options that are misspelled. LEGACY
  if (isset($vars['options']['seperator'])) {
    $vars['options']['separator'] = $vars['options']['seperator'];
  }
  // Support old misspelled templates. LEGACY
  $vars['seperator'] =
    $vars['separator'] = $vars['options']['separator'];

  // Special handling when quoted values are involved.
  if ($vars['options']['quote']) {
    $wrap = '"';
    $replace_value = '""';
  }
  else {
    $wrap = '';
    $replace_value = '';
  }

  // Format header values.
  foreach ($vars['header'] as $key => $value) {
    $output = decode_entities(strip_tags($value));
    if (!empty($vars['options']['trim'])) {
      $output = trim($output);
    }
    $vars['header'][$key] = $wrap . str_replace('"', $replace_value, $output) . $wrap;
  }
}

function template_preprocess_views_data_export_csv_body(&$vars) {
  _views_data_export_body_shared_preprocess($vars);

  // Make sure we catch saved options that are misspelled. LEGACY
  if (isset($vars['options']['seperator'])) {
    $vars['options']['separator'] = $vars['options']['seperator'];
  }
  // Support old misspelled templates. LEGACY
  $vars['seperator'] =
    $vars['separator'] = $vars['options']['separator'];

  // Special handling when quoted values are involved.
  if ($vars['options']['quote']) {
    $wrap = '"';
    $replace_value = '""';
  }
  else {
    $wrap = '';
    $replace_value = '';
  }

  // Format row values.
  foreach ($vars['themed_rows'] as $i => $values) {
    foreach ($values as $j => $value) {
      $output = decode_entities(strip_tags($value));
      if (!empty($vars['options']['trim'])) {
        $output = trim($output);
      }
      $vars['themed_rows'][$i][$j] = $wrap . str_replace('"', $replace_value, $output) . $wrap;
    }
  }
}

/**
 * Preprocess csv output template.
 */
function template_preprocess_views_data_export_csv(&$vars) {
  // TODO Replace items with themed_rows.
  _views_data_export_shared_preprocess($vars);

  // Make sure we catch saved options that are misspelled. LEGACY
  if (isset($vars['options']['separator'])) {
    $vars['options']['separator'] = $vars['options']['seperator'];
  }
  // Support old misspelled templates. LEGACY
  $vars['seperator'] =
    $vars['separator'] = $vars['options']['separator'];

  // Special handling when quoted values are involved.
  if ($vars['options']['quote']) {
    $wrap = '"';
    $replace_value = '""';
  }
  else {
    $wrap = '';
    $replace_value = '';
  }

  // Format header values.
  foreach ($vars['header'] as $key => $value) {
    $output = decode_entities(strip_tags($value));
    if ($vars['options']['trim']) {
      $output = trim($output);
    }
    $vars['header'][$key] = $wrap . str_replace('"', $replace_value, $output) . $wrap;
  }

  // Format row values.
  foreach ($vars['themed_rows'] as $i => $values) {
    foreach ($values as $j => $value) {
      $output = decode_entities(strip_tags($value));
      if ($vars['options']['trim']) {
        $output = trim($output);
      }
      $vars['themed_rows'][$i][$j] = $wrap . str_replace('"', $replace_value, $output) . $wrap;
    }
  }
}

/**
 * Preprocess txt output template.
 */
function template_preprocess_views_data_export_txt_body(&$vars) {
  _views_data_export_header_shared_preprocess($vars);
  _views_data_export_body_shared_preprocess($vars);
}

function template_preprocess_views_data_export_doc_body(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_body($vars);
}

function template_preprocess_views_data_export_xls_body(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_body($vars);
}

function template_preprocess_views_data_export_msoffice_body(&$vars) {
  _views_data_export_header_shared_preprocess($vars);
  _views_data_export_body_shared_preprocess($vars);

  $output = '';

  // Construct the tbody of a table, see theme_table().

  $ts = tablesort_init($vars['header']);

  $flip = array(
    'even' => 'odd',
    'odd' => 'even',
  );
  $class = 'even';
  foreach ($vars['themed_rows'] as $number => $row) {
    $attributes = array();

    // Check if we're dealing with a simple or complex row
    if (isset($row['data'])) {
      foreach ($row as $key => $value) {
        if ($key == 'data') {
          $cells = $value;
        }
        else {
          $attributes[$key] = $value;
        }
      }
    }
    else {
      $cells = $row;
    }
    if (count($cells)) {
      // Add odd/even class
      $class = $flip[$class];
      if (isset($attributes['class'])) {
        $attributes['class'] .= ' ' . $class;
      }
      else {
        $attributes['class'] = $class;
      }

      // Build row
      $output .= ' <tr' . drupal_attributes($attributes) . '>';
      $i = 0;
      foreach ($cells as $cell) {
        $cell = tablesort_cell($cell, $vars['header'], $ts, $i++);
        $output .= _theme_table_cell($cell);
      }
      $output .= " </tr>\n";
    }
  }


  $vars['tbody'] = preg_replace('/<\/?(a|span) ?.*?>/', '', $output); // strip 'a' and 'span' tags

}

function template_preprocess_views_data_export_doc_header(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_header($vars);
}

function template_preprocess_views_data_export_xls_header(&$vars) {
  // Pass through the generic MS Office preprocess.
  template_preprocess_views_data_export_msoffice_header($vars);
}

function template_preprocess_views_data_export_msoffice_header(&$vars) {
  _views_data_export_header_shared_preprocess($vars);

  // Need to do a little work to construct the table header, see theme_table().
  $vars['header_row'] = '';
  $vars['header_row'] .= '<thead><tr>';

  $ts = tablesort_init($vars['header']);

  foreach ($vars['header'] as $cell) {
    $cell = tablesort_header($cell, $vars['header'], $ts);
    $vars['header_row'] .= _theme_table_cell($cell, TRUE);
  }

  $vars['header_row'] .= '</tr></thead>';

  $vars['header_row'] = preg_replace('/<\/?(a|span) ?.*?>/', '', $vars['header_row']); // strip 'a' and 'span' tags
}

/**
 * Preprocess xml output template.
 */
function template_preprocess_views_data_export_xml_header(&$vars) {
  // Compute the root XML node, using the base table, and appending an 's' if needed.
  $root_node = $vars['view']->base_table;
  if (rtrim($root_node, 's') == $root_node) {
    $root_node .= 's';
  }
  $vars['root_node'] = _views_data_export_xml_tag_clean($root_node);
}

/**
 * Preprocess xml output template.
 */
function template_preprocess_views_data_export_xml_footer(&$vars) {
  // Compute the root XML node, using the base table, and appending an 's' if needed.
  $root_node = $vars['view']->base_table;
  if (rtrim($root_node, 's') == $root_node) {
    $root_node .= 's';
  }
  $vars['root_node'] = _views_data_export_xml_tag_clean($root_node);
}

/**
 * Preprocess xml output template.
 */
function template_preprocess_views_data_export_xml_body(&$vars) {
  _views_data_export_header_shared_preprocess($vars);
  _views_data_export_body_shared_preprocess($vars);

  // Compute the tag name based on the views base table, minus any trailing 's'.
  $vars['item_node'] = _views_data_export_xml_tag_clean(rtrim($vars['view']->base_table, 's'));

  foreach ($vars['themed_rows'] as $num => $row) {
    foreach ($row as $field => $content) {
      // Prevent double encoding of the ampersand. Look for the entities produced by check_plain().
      $content = preg_replace('/&(?!(amp|quot|#039|lt|gt);)/', '&amp;', $content);
      // Convert < and > to HTML entities.
      $content = str_replace(
        array('<', '>'),
        array('&lt;', '&gt;'),
        $content);
      $vars['themed_rows'][$num][$field] = $content;
    }
  }

  foreach ($vars['header'] as $field => $header) {
    // If there is no field label, use 'no name'.
    $vars['xml_tag'][$field] = !empty($header) ? $header : 'no name';
    if ($vars['options']['transform']) {
      switch ($vars['options']['transform_type']) {
        case 'dash':
          $vars['xml_tag'][$field] = str_replace(' ', '-', $header);
          break;
        case 'underline':
          $vars['xml_tag'][$field] = str_replace(' ', '_', $header);
          break;
        case 'camel':
          $vars['xml_tag'][$field] = str_replace(' ', '', ucwords(strtolower($header)));
          // Convert the very first character of the string to lowercase.
          $vars['xml_tag'][$field][0] = strtolower($vars['xml_tag'][$field][0]);
          break;
        case 'pascal':
          $vars['xml_tag'][$field] = str_replace(' ', '', ucwords(strtolower($header)));
          break;
      }
    }
    // We should always try to output valid XML.
    $vars['xml_tag'][$field] = _views_data_export_xml_tag_clean($vars['xml_tag'][$field]);
  }
}

/**
 * Returns a valid XML tag formed from the given input.
 *
 * @param $tag The string that should be made into a valid XML tag.
 * @return The valid XML tag or an empty string if the string contained no valid
 * XML tag characters.
 */
function _views_data_export_xml_tag_clean($tag) {

  // This regex matches characters that are not valid in XML tags, and the
  // unicode ones that are. We don't bother with unicode, because it would so
  // the preg_replace down a lot.
  static $invalid_tag_chars_regex = '#[^\:A-Za-z_\-.0-9]+#';

  // These characters are not valid at the start of an XML tag:
  static $invalid_start_chars = '-.0123456789';

  // Convert invalid chars to '-':
  $tag = preg_replace($invalid_tag_chars_regex, '-', $tag);

  // Need to trim invalid characters from the start of the string:
  $tag = ltrim($tag, $invalid_start_chars);

  return $tag;
}

/**
 * Shared helper function for export preprocess functions.
 */
function _views_data_export_header_shared_preprocess(&$vars) {
  $view     = $vars['view'];
  $fields   = &$view->field;

  $vars['header'] = array();
  foreach ($fields as $key => $field) {
    if (empty($field->options['exclude'])) {
      $vars['header'][$key] = check_plain($field->label());
    }
  }

}

/**
 * Shared helper function for export preprocess functions.
 */
function _views_data_export_body_shared_preprocess(&$vars) {
  $view     = $vars['view'];
  $fields   = &$view->field;

  $rows = $vars['rows'];

  $vars['themed_rows'] = array();
  $keys = array_keys($fields);
  foreach ($rows as $num => $row) {
    $vars['themed_rows'][$num] = array();

    foreach ($keys as $id) {
      if (empty($fields[$id]->options['exclude'])) {
        $vars['themed_rows'][$num][$id] = $view->style_plugin->rendered_fields[$num][$id];
      }
    }
  }
}