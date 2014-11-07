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
  $context->name = 'educloudalliance_portal_footer_block';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0bb46528f82eeaa8742cc84feb6f0901' => array(
          'module' => 'views',
          'delta' => '0bb46528f82eeaa8742cc84feb6f0901',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['educloudalliance_portal_footer_block'] = $context;

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
        'views-frontpage_news-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_news-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-79e65907fe41ce778925f5308db3e5b4' => array(
          'module' => 'views',
          'delta' => '79e65907fe41ce778925f5308db3e5b4',
          'region' => 'content',
          'weight' => '3',
        ),
        'twitter_block-1' => array(
          'module' => 'twitter_block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['frontpage-blocks'] = $context;

  return $export;
}
