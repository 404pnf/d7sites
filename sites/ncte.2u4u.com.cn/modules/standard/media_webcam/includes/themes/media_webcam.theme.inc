<?php

/**
 *  @file
 *  Theme functions for the Media: Webcam module.
 */

/**
 * Preprocess for theme('media_webcam_widget').
 */
function template_preprocess_media_webcam_widget(&$variables) {
  $variables['field'] = field_info_instance($variables['element']['#entity_type'], $variables['element']['#field_name'], $variables['element']['#bundle']);
  $variables['no_flash'] = filter_xss_admin(media_webcam_variable_get('no_flash'));
  $id = check_plain($variables['id']);

  $variables['wrapper_id'] = "media-webcam-wrapper-$id";
  $flash_id = $variables['flash_id'] = "mediaWebcamFlash$id";

  $variables['button'] = array();
  if ($variables['field']['widget']['settings']['allow_video']) {
    $variables['button']['record'] = theme('media_webcam_button', array('type' => 'record', 'output' => t('Record')));
    $variables['button']['stop'] = theme('media_webcam_button', array('type' => 'stop', 'output' => t('Stop')));
    $variables['button']['play'] = theme('media_webcam_button', array('type' => 'play', 'output' => t('Play')));
  }
  if ($variables['field']['widget']['settings']['allow_snapshot']) {
    $variables['button']['snap'] = theme('media_webcam_button', array('type' => 'snap', 'output' => t('Snap Photo')));
  }

  $variables['buttons'] = implode("\n", $variables['button']);

  $variables['form_elements'] = $variables['element']['#children'];

  $settings = array(
    'mediaWebcam' => array(
      'flash' => array(
        "$flash_id" => array(
          'id' => $flash_id,
          'wrapperId' => $variables['wrapper_id'],
          'width' => check_plain(media_webcam_variable_get('width')),
          'height' => check_plain(media_webcam_variable_get('height')),
          'connectUrl' => check_plain(media_webcam_variable_get('connect_url')),
          'baseFilename' => check_plain(media_webcam_variable_get('base_filename')),
          'maxDuration' => check_plain(media_webcam_variable_get('max_duration')),
        ),
      ),
    ),
  );
  media_webcam_add_js($settings);
}

/**
 * Preprocess for theme('media_webcam_button').
 */
function template_preprocess_media_webcam_button(&$variables) {
  $variables['classes'] = array(
    'media-webcam-button',
    'media-webcam-'. check_plain($variables['type']),
  );
  $variables['class'] = implode(' ', $variables['classes']);
  $variables['output'] = filter_xss_admin($variables['output']);
}
