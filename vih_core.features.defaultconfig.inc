<?php
/**
 * @file
 * vih_commerce.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_commerce_defaultconfig_features() {
  return array(
    'vih_commerce' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_core_defaultconfig_user_default_permissions() {
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

  return $permissions;
}
