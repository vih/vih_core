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
      'editor' => 'editor',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'mass mailing with views_send'.
  $permissions['mass mailing with views_send'] = array(
    'name' => 'mass mailing with views_send',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'views_send',
  );

  return $permissions;
}
