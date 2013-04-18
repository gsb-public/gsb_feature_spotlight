<?php
/**
 * @file
 * gsb_feature_spotlight.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_spotlight_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|fieldable_panels_pane|spotlight|default';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'spotlight';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_body',
      1 => 'field_file_single_public',
      2 => 'field_program_single',
      3 => 'field_spotlight_person_fid',
      4 => 'field_spotlight_person_type',
      5 => 'field_title_position_single',
      6 => 'field_use_profile_img',
      7 => 'field_year',
      8 => 'group_name_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'classes' => 'designed-box-wrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_wrapper|fieldable_panels_pane|spotlight|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_wrapper|fieldable_panels_pane|spotlight|default';
  $field_group->group_name = 'group_name_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'spotlight';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_middle_name',
      3 => 'field_salutation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_name_wrapper|fieldable_panels_pane|spotlight|default'] = $field_group;

  return $export;
}
