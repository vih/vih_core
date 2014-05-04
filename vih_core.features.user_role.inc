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

  // Exported role: office.
  $roles['office'] = array(
    'name' => 'office',
    'weight' => 5,
  );

  // Exported role: teacher.
  $roles['teacher'] = array(
    'name' => 'teacher',
    'weight' => 4,
  );

  return $roles;
}
