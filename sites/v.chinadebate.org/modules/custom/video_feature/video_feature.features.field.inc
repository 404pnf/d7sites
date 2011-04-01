<?php

/**
 * Implementation of hook_field_default_fields().
 */
function video_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'node-video-field_video'
  $fields['node-video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          '0' => 'fid',
        ),
      ),
      'module' => 'video',
      'settings' => array(
        'autoconversion' => 1,
        'autothumbnail' => 'auto_fallback',
        'default_video_thumbnail' => array(
          'fid' => 0,
          'remove_button' => 'Remove',
          'upload' => '',
          'upload_button' => 'Upload',
        ),
        'preview_video_thumb_style' => 'thumbnail',
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'video',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'video',
          'settings' => array(
            'video_link' => '',
            'video_style' => '',
          ),
          'type' => 'video',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'video',
      'required' => 0,
      'settings' => array(
        'default_dimensions' => '640x350',
        'default_player_dimensions' => '640x350',
        'file_directory' => 'videos/original',
        'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'video',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'video_upload',
        'weight' => '-2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('video');

  return $fields;
}
