<?php

/**
 * @file
 * edit_designer_maker_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function edit_designer_maker_profile_user_default_roles() {
  $roles = array();

  // Exported role: designer makers.
  $roles['designer makers'] = array(
    'name' => 'designer makers',
    'weight' => 3,
  );

  return $roles;
}
