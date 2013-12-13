<?php
/**
 * @file
 * vih_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vih_core_user_default_roles() {
  $roles = array();

  // Exported role: kontor.
  $roles['kontor'] = array(
    'name' => 'kontor',
    'weight' => 5,
  );

  // Exported role: lærer.
  $roles['lærer'] = array(
    'name' => 'lærer',
    'weight' => 4,
  );

  return $roles;
}
