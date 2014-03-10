<?php
/**
 * @file
 * stanford_program_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_program_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_program_cards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Program: Cards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'vertical_tabs';
  $handler->display->display_options['style_options']['title'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['label'] = 'Image';
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'large-profile',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_s_program_summary']['id'] = 'field_s_program_summary';
  $handler->display->display_options['fields']['field_s_program_summary']['table'] = 'field_data_field_s_program_summary';
  $handler->display->display_options['fields']['field_s_program_summary']['field'] = 'field_s_program_summary';
  $handler->display->display_options['fields']['field_s_program_summary']['label'] = '';
  $handler->display->display_options['fields']['field_s_program_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_program_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_program_summary']['settings'] = array(
    'trim_length' => '10000',
  );
  /* Field: Content: link */
  $handler->display->display_options['fields']['field_s_program_link']['id'] = 'field_s_program_link';
  $handler->display->display_options['fields']['field_s_program_link']['table'] = 'field_data_field_s_program_link';
  $handler->display->display_options['fields']['field_s_program_link']['field'] = 'field_s_program_link';
  $handler->display->display_options['fields']['field_s_program_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_program_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_program_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_program_link']['element_class'] = 'clear-both';
  $handler->display->display_options['fields']['field_s_program_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_program_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_program_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_program_link']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_s_program_link']['separator'] = ' ';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Views rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Views rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-right">
  <div class="postcard-image">
           <div class="program-image"><a href="node/[nid]">[field_s_image_image]</a></div>
  </div>

  <div class="postcard-content">
           <div><h3>[title]</h3></div>
           <div>[field_s_program_summary]</div>
           <div>[field_s_program_link]</div>
          <div class="edit-link">[edit_node]</div>
  </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_program' => 'stanford_program',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_program_cards'] = $view;

  return $export;
}
