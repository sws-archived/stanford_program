<?php
/**
 * @file
 * stanford_program.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_program_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_program|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_program';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_s_postcard',
        1 => 'field_s_program_summary',
        2 => 'field_s_image_info',
        3 => 'field_s_program_link',
        4 => 'body',
        5 => 'group_s_postcard_image',
        6 => 'group_s_postcard_content',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'field_s_program_summary' => 'ds_content',
      'field_s_image_info' => 'ds_content',
      'field_s_program_link' => 'ds_content',
      'body' => 'ds_content',
      'group_s_postcard_image' => 'ds_content',
      'group_s_postcard_content' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_program|full'] = $ds_layout;

  return $export;
}
