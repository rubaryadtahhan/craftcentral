<?php

/**
 * @file
 * edit_designer_maker_profile.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function edit_designer_maker_profile_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_edit-dm-profile:node/1.
  $menu_links['user-menu_edit-dm-profile:node/1'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Edit DM Profile',
    'options' => array(
      'identifier' => 'user-menu_edit-dm-profile:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit DM Profile');

  return $menu_links;
}
