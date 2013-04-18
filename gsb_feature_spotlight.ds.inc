<?php
/**
 * @file
 * gsb_feature_spotlight.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_spotlight_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|spotlight|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'spotlight';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'p',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_middle_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_program_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_salutation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_title_position_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|spotlight|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_spotlight_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|spotlight|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'spotlight';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'gsb_feature_spotlight_label',
        1 => 'group_name_wrapper',
        2 => 'field_file_single_public',
        3 => 'field_spotlight_person_fid',
        4 => 'field_use_profile_img',
        5 => 'field_title_position_single',
        6 => 'field_program_single',
        7 => 'field_year',
        8 => 'field_body',
        9 => 'field_salutation',
        10 => 'field_first_name',
        11 => 'field_middle_name',
        12 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'gsb_feature_spotlight_label' => 'ds_content',
      'group_name_wrapper' => 'ds_content',
      'field_file_single_public' => 'ds_content',
      'field_spotlight_person_fid' => 'ds_content',
      'field_use_profile_img' => 'ds_content',
      'field_title_position_single' => 'ds_content',
      'field_program_single' => 'ds_content',
      'field_year' => 'ds_content',
      'field_body' => 'ds_content',
      'field_salutation' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_last_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['fieldable_panels_pane|spotlight|default'] = $ds_layout;

  return $export;
}
