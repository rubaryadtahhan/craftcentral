<?php

/**
 * @file
 * designer_makers_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function designer_makers_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function designer_makers_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function designer_makers_profile_image_default_styles() {
  $styles = array();

  // Exported image style: dm_cover_photo.
  $styles['dm_cover_photo'] = array(
    'label' => 'DM Cover Photo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dm_products.
  $styles['dm_products'] = array(
    'label' => 'DM Products',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dm_profile_photo.
  $styles['dm_profile_photo'] = array(
    'label' => 'DM Profile Photo 350',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
