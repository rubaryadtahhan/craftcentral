<?php

/**
 * @file
 * designer_makers_directory.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function designer_makers_directory_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_designer-maker-directory:designer-maker-directory.
  $menu_links['main-menu_designer-maker-directory:designer-maker-directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'designer-maker-directory',
    'router_path' => 'designer-maker-directory',
    'link_title' => 'Designer Maker Directory',
    'options' => array(
      'identifier' => 'main-menu_designer-maker-directory:designer-maker-directory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Designer Maker Directory');

  return $menu_links;
}
