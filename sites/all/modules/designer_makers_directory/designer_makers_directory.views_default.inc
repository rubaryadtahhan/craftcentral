<?php

/**
 * @file
 * designer_makers_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function designer_makers_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'designer_maker_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Designer Maker Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Designer Maker Directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-md-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Featured Designer Maker</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'featured_designer_maker:block';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'id',
    1 => 'fieldset',
    2 => 'discipline_4',
    3 => 'commissions_5',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'row';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'dm_profile_photo_1',
    1 => 'display_name',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: CiviCRM Custom: DM Profile: DM Profile Photo */
  $handler->display->display_options['fields']['dm_profile_photo_1']['id'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['field'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['label'] = '';
  $handler->display->display_options['fields']['dm_profile_photo_1']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['display_name']['alter']['path'] = '/designer-maker-directory/profile/[id]';
  $handler->display->display_options['fields']['display_name']['element_class'] = 'lead ';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['element_wrapper_class'] = 'panel-body';
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Custom: DM Profile: Discipline */
  $handler->display->display_options['fields']['discipline_4']['id'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['discipline_4']['field'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['label'] = '';
  $handler->display->display_options['fields']['discipline_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['discipline_4']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Profile: Commissions */
  $handler->display->display_options['fields']['commissions_5']['id'] = 'commissions_5';
  $handler->display->display_options['fields']['commissions_5']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['commissions_5']['field'] = 'commissions_5';
  $handler->display->display_options['fields']['commissions_5']['label'] = '';
  $handler->display->display_options['fields']['commissions_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commissions_5']['element_label_colon'] = FALSE;
  /* Filter criterion: CiviCRM Contacts: Contact Type */
  $handler->display->display_options['filters']['contact_type']['id'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_type']['field'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['value'] = array(
    'Individual' => 'Individual',
  );
  $handler->display->display_options['filters']['contact_type']['group'] = 1;
  /* Filter criterion: CiviCRM Groups: Group ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'civicrm_group';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '2';
  $handler->display->display_options['filters']['id']['group'] = 1;
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['operator'] = 'word';
  $handler->display->display_options['filters']['display_name']['group'] = 1;
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['display_name']['group_info']['label'] = 'Display Name';
  $handler->display->display_options['filters']['display_name']['group_info']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['display_name']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: CiviCRM Custom: DM Profile: Discipline */
  $handler->display->display_options['filters']['discipline_4']['id'] = 'discipline_4';
  $handler->display->display_options['filters']['discipline_4']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['filters']['discipline_4']['field'] = 'discipline_4';
  $handler->display->display_options['filters']['discipline_4']['group'] = 1;
  $handler->display->display_options['filters']['discipline_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['discipline_4']['expose']['operator_id'] = 'discipline_4_op';
  $handler->display->display_options['filters']['discipline_4']['expose']['label'] = 'Discipline';
  $handler->display->display_options['filters']['discipline_4']['expose']['operator'] = 'discipline_4_op';
  $handler->display->display_options['filters']['discipline_4']['expose']['identifier'] = 'discipline';
  $handler->display->display_options['filters']['discipline_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: CiviCRM Custom: DM Profile: Commissions */
  $handler->display->display_options['filters']['commissions_5']['id'] = 'commissions_5';
  $handler->display->display_options['filters']['commissions_5']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['filters']['commissions_5']['field'] = 'commissions_5';
  $handler->display->display_options['filters']['commissions_5']['value'] = 'All';
  $handler->display->display_options['filters']['commissions_5']['group'] = 1;
  $handler->display->display_options['filters']['commissions_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commissions_5']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['commissions_5']['expose']['label'] = 'Commission';
  $handler->display->display_options['filters']['commissions_5']['expose']['operator'] = 'commissions_5_op';
  $handler->display->display_options['filters']['commissions_5']['expose']['identifier'] = 'commissions';
  $handler->display->display_options['filters']['commissions_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'designer-maker-directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Designer Maker Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['designer_maker_directory'] = $view;

  $view = new view();
  $view->name = 'featured_designer_maker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Featured Designer Maker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Designer Maker';
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'dm_profile_photo_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'col-xs-6 col-md-4';
  /* Field: CiviCRM Custom: DM Profile: DM Profile Photo */
  $handler->display->display_options['fields']['dm_profile_photo_1']['id'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['field'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['label'] = '';
  $handler->display->display_options['fields']['dm_profile_photo_1']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'display_name',
    1 => 'discipline_4',
    2 => 'dm_biography_15',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'col-xs-6 col-md-8';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Custom: DM Profile: Discipline */
  $handler->display->display_options['fields']['discipline_4']['id'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['discipline_4']['field'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['label'] = '';
  $handler->display->display_options['fields']['discipline_4']['element_type'] = 'h5';
  $handler->display->display_options['fields']['discipline_4']['element_class'] = 'text-uppercase';
  $handler->display->display_options['fields']['discipline_4']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Profile: DM Biography */
  $handler->display->display_options['fields']['dm_biography_15']['id'] = 'dm_biography_15';
  $handler->display->display_options['fields']['dm_biography_15']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_biography_15']['field'] = 'dm_biography_15';
  $handler->display->display_options['fields']['dm_biography_15']['label'] = '';
  $handler->display->display_options['fields']['dm_biography_15']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['dm_biography_15']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dm_biography_15']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dm_biography_15']['text_format'] = 'full_html';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Profile »';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/designer-maker-directory/profile/[id]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'text-uppercase';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: CiviCRM Contacts: Contact Type */
  $handler->display->display_options['filters']['contact_type']['id'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_type']['field'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['value'] = array(
    'Individual' => 'Individual',
  );
  /* Filter criterion: CiviCRM Groups: Group ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'civicrm_group';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '2';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Featured Designer Maker';
  $export['featured_designer_maker'] = $view;

  return $export;
}
