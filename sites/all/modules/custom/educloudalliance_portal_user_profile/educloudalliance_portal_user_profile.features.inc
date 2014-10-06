<?php
/**
 * @file
 * educloudalliance_portal_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function educloudalliance_portal_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function educloudalliance_portal_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function educloudalliance_portal_user_profile_image_default_styles() {
  $styles = array();

  // Exported image style: menu_button_thumb.
  $styles['menu_button_thumb'] = array(
    'name' => 'menu_button_thumb',
    'label' => 'menu_button_thumb',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
