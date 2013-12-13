<?php
/**
 * @file
 * vih_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
    ),
    'module' => 'navbar',
  );

  return $permissions;
}
