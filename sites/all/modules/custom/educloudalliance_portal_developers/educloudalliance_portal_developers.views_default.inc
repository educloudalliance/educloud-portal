<?php
/**
 * @file
 * educloudalliance_portal_developers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function educloudalliance_portal_developers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'github_issues_bazaar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'json';
  $view->human_name = 'Github issues - bazaar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bazaar issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://api.github.com/repos/koulutuksenpilvivayla/pilvivayla-basaari/issues';
  $handler->display->display_options['query']['options']['row_apath'] = '.';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: html_url: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['key'] = 'html_url';
  /* Field: title: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['key'] = 'title';
  /* Field: name: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['key'] = 'name';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Bazaar issues';
  $export['github_issues_bazaar'] = $view;

  $view = new view();
  $view->name = 'github_issues_qa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'json';
  $view->human_name = 'Github issues - QA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'QA issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://api.github.com/repos/koulutuksenpilvivayla/pilvivayla-kysy/issues';
  $handler->display->display_options['query']['options']['row_apath'] = '.';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: html_url: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['key'] = 'html_url';
  /* Field: title: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['key'] = 'title';
  /* Field: name: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['key'] = 'name';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'QA issues';
  $export['github_issues_qa'] = $view;

  $view = new view();
  $view->name = 'github_repos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'json';
  $view->human_name = 'Github repos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GitHub repositories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://api.github.com/users/koulutuksenpilvivayla/repos';
  $handler->display->display_options['query']['options']['row_apath'] = '.';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: html_url: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['key'] = 'html_url';
  /* Field: name: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['path'] = '[value]';
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['key'] = 'name';
  /* Field: description: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['key'] = 'description';
  /* Field: language: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Written in';
  $handler->display->display_options['fields']['value_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['value_2']['key'] = 'language';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'GitHub repositories';
  $export['github_repos'] = $view;

  return $export;
}
