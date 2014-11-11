<?php
/**
 * @file
 * educloudalliance_portal_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function educloudalliance_portal_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function educloudalliance_portal_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function educloudalliance_portal_configuration_node_info() {
  $items = array(
    'educloud_featured_articles' => array(
      'name' => t('Featured article'),
      'base' => 'node_content',
      'description' => t('Articles which will be showed on frontpage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
