<?php
/**
 * @file
 * educloudalliance_portal_developers.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function educloudalliance_portal_developers_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'developers_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'developers' => 'developers',
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-github_repos-block' => array(
          'module' => 'views',
          'delta' => 'github_repos-block',
          'region' => 'content',
          'weight' => '9',
        ),
        'views-github_issues_bazaar-block' => array(
          'module' => 'views',
          'delta' => 'github_issues_bazaar-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-github_issues_qa-block' => array(
          'module' => 'views',
          'delta' => 'github_issues_qa-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['developers_page'] = $context;

  return $export;
}
