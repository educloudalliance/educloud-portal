<?php
/**
 * @file
 * educloudalliance_portal_user_profile.features.inc
 */

/**
 * Implements hook_views_api().
 */
function educloudalliance_portal_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function educloudalliance_portal_user_profile_default_profile2_type() {
  $items = array();
  $items['contact_info'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "contact_info",
    "label" : "Contact info",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
