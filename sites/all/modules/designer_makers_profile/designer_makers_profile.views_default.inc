<?php

/**
 * @file
 * designer_makers_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function designer_makers_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'designer_maker_products_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Designer Maker Products List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'dm_products_centered';
  $handler->display->display_options['style_options']['skin'] = 'boxed-carousel';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'id' => 0,
    'image_12' => 0,
    'name_13' => 0,
    'description_14' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Products: Image */
  $handler->display->display_options['fields']['image_12']['id'] = 'image_12';
  $handler->display->display_options['fields']['image_12']['table'] = 'civicrm_value_designer_make_2';
  $handler->display->display_options['fields']['image_12']['field'] = 'image_12';
  $handler->display->display_options['fields']['image_12']['label'] = '';
  $handler->display->display_options['fields']['image_12']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'name_13',
    1 => 'description_14',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'panel-body';
  /* Field: CiviCRM Custom: DM Products: Name */
  $handler->display->display_options['fields']['name_13']['id'] = 'name_13';
  $handler->display->display_options['fields']['name_13']['table'] = 'civicrm_value_designer_make_2';
  $handler->display->display_options['fields']['name_13']['field'] = 'name_13';
  $handler->display->display_options['fields']['name_13']['label'] = '';
  $handler->display->display_options['fields']['name_13']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name_13']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Products: Description */
  $handler->display->display_options['fields']['description_14']['id'] = 'description_14';
  $handler->display->display_options['fields']['description_14']['table'] = 'civicrm_value_designer_make_2';
  $handler->display->display_options['fields']['description_14']['field'] = 'description_14';
  $handler->display->display_options['fields']['description_14']['label'] = '';
  $handler->display->display_options['fields']['description_14']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description_14']['text_format'] = 'full_html';
  /* Contextual filter: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['block_description'] = 'Designer Maker Products';
  $export['designer_maker_products_list'] = $view;

  $view = new view();
  $view->name = 'designer_maker_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Designer Maker Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'discipline_4' => 'discipline_4',
    'city' => 'city',
    'state_province' => 'state_province',
    'commissions_5' => 'commissions_5',
    'views_conditional' => 'views_conditional',
    'url_1' => 'url_1',
    'url_2' => 'url_2',
    'url_3' => 'url_3',
    'url_4' => 'url_4',
    'url_5' => 'url_5',
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Portfolio</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'designer_maker_products_list:block';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Custom: DM Profile: DM Cover Photo */
  $handler->display->display_options['fields']['dm_cover_photo_3']['id'] = 'dm_cover_photo_3';
  $handler->display->display_options['fields']['dm_cover_photo_3']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_cover_photo_3']['field'] = 'dm_cover_photo_3';
  $handler->display->display_options['fields']['dm_cover_photo_3']['label'] = '';
  $handler->display->display_options['fields']['dm_cover_photo_3']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Profile: DM Logo */
  $handler->display->display_options['fields']['dm_logo_2']['id'] = 'dm_logo_2';
  $handler->display->display_options['fields']['dm_logo_2']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_logo_2']['field'] = 'dm_logo_2';
  $handler->display->display_options['fields']['dm_logo_2']['label'] = '';
  $handler->display->display_options['fields']['dm_logo_2']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing',
    1 => 'discipline_4',
    2 => 'city',
    3 => 'state_province',
    4 => 'commissions_5',
    5 => 'views_conditional',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'lead';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'About';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Profile: Discipline */
  $handler->display->display_options['fields']['discipline_4']['id'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['discipline_4']['field'] = 'discipline_4';
  $handler->display->display_options['fields']['discipline_4']['label'] = '';
  $handler->display->display_options['fields']['discipline_4']['element_class'] = 'profile-about';
  $handler->display->display_options['fields']['discipline_4']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[city],';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 1;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['element_class'] = 'profile-about';
  $handler->display->display_options['fields']['state_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province']['is_primary'] = 1;
  /* Field: CiviCRM Custom: DM Profile: Commissions */
  $handler->display->display_options['fields']['commissions_5']['id'] = 'commissions_5';
  $handler->display->display_options['fields']['commissions_5']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['commissions_5']['field'] = 'commissions_5';
  $handler->display->display_options['fields']['commissions_5']['label'] = '';
  $handler->display->display_options['fields']['commissions_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commissions_5']['element_label_colon'] = FALSE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'commissions_5';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'Accepts Commissions';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'No Commissions';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'dm_profile_photo_1',
    1 => 'dm_biography_15',
    2 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'row';
  /* Field: CiviCRM Custom: DM Profile: DM Profile Photo */
  $handler->display->display_options['fields']['dm_profile_photo_1']['id'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['field'] = 'dm_profile_photo_1';
  $handler->display->display_options['fields']['dm_profile_photo_1']['label'] = '';
  $handler->display->display_options['fields']['dm_profile_photo_1']['element_class'] = 'col-xs-3 col-md-3 img-circle';
  $handler->display->display_options['fields']['dm_profile_photo_1']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: DM Profile: DM Biography */
  $handler->display->display_options['fields']['dm_biography_15']['id'] = 'dm_biography_15';
  $handler->display->display_options['fields']['dm_biography_15']['table'] = 'civicrm_value_designer_make_1';
  $handler->display->display_options['fields']['dm_biography_15']['field'] = 'dm_biography_15';
  $handler->display->display_options['fields']['dm_biography_15']['label'] = 'Biography';
  $handler->display->display_options['fields']['dm_biography_15']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['dm_biography_15']['element_label_class'] = 'text-uppercase ';
  $handler->display->display_options['fields']['dm_biography_15']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dm_biography_15']['element_wrapper_class'] = 'col-xs-9 col-md-5';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'nothing_1',
    1 => 'url',
    2 => 'email',
    3 => 'url_1',
    4 => 'url_2',
    5 => 'url_3',
    6 => 'url_4',
    7 => 'url_5',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'col-xs-12 col-md-4';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Connect';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'h5';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'text-uppercase';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">Visit website</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['website_type'] = '2';
  /* Field: CiviCRM Email: Email Address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['text'] = '<a href="mailto:[email]">Contact this designer maker</a>';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['location_type'] = '0';
  $handler->display->display_options['fields']['email']['location_op'] = '0';
  $handler->display->display_options['fields']['email']['is_primary'] = 1;
  $handler->display->display_options['fields']['email']['link_to_user'] = '0';
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url_1']['id'] = 'url_1';
  $handler->display->display_options['fields']['url_1']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url_1']['field'] = 'url';
  $handler->display->display_options['fields']['url_1']['label'] = '';
  $handler->display->display_options['fields']['url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_1']['website_type'] = '3';
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url_2']['id'] = 'url_2';
  $handler->display->display_options['fields']['url_2']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url_2']['field'] = 'url';
  $handler->display->display_options['fields']['url_2']['label'] = '';
  $handler->display->display_options['fields']['url_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_2']['website_type'] = '11';
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url_3']['id'] = 'url_3';
  $handler->display->display_options['fields']['url_3']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url_3']['field'] = 'url';
  $handler->display->display_options['fields']['url_3']['label'] = '';
  $handler->display->display_options['fields']['url_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_3']['website_type'] = '8';
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url_4']['id'] = 'url_4';
  $handler->display->display_options['fields']['url_4']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url_4']['field'] = 'url';
  $handler->display->display_options['fields']['url_4']['label'] = '';
  $handler->display->display_options['fields']['url_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_4']['website_type'] = '6';
  /* Field: CiviCRM Website: Website URL */
  $handler->display->display_options['fields']['url_5']['id'] = 'url_5';
  $handler->display->display_options['fields']['url_5']['table'] = 'civicrm_website';
  $handler->display->display_options['fields']['url_5']['field'] = 'url';
  $handler->display->display_options['fields']['url_5']['label'] = '';
  $handler->display->display_options['fields']['url_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_5']['website_type'] = '4';
  /* Contextual filter: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'designer-maker-directory/profile/%';
  $export['designer_maker_profile'] = $view;

  return $export;
}
