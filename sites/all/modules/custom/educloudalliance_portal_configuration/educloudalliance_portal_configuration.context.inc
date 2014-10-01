<?php
/**
 * @file
 * educloudalliance_portal_configuration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function educloudalliance_portal_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage-blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-frontpage_cloud_logo-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_cloud_logo-block',
          'region' => 'content',
          'weight' => '-11',
        ),
        'views-frontpage_news-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_news-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-frontpage_who_and_why-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_who_and_why-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['frontpage-blocks'] = $context;

  return $export;
}
