<?php
/**
 * @file
 * vih_core.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_core_defaultconfig_features() {
  return array(
    'vih_core' => array(
      'user_default_roles' => 'user_default_roles',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_roles().
 */
function vih_core_defaultconfig_user_default_roles() {
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
