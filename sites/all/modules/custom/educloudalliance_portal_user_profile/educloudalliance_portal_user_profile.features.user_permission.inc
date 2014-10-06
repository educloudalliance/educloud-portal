<?php
/**
 * @file
 * educloudalliance_portal_user_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function educloudalliance_portal_user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own contact_info profile'.
  $permissions['edit own contact_info profile'] = array(
    'name' => 'edit own contact_info profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own contact_info profile'.
  $permissions['view own contact_info profile'] = array(
    'name' => 'view own contact_info profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
