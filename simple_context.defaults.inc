<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _simple_context_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        '1' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-0' => array(
          'module' => 'system',
          'delta' => 0,
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['site'] = array(

  );

  $export['site'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'story';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'views' => array(
      'values' => array(
        'stories' => 'stories',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'comment-0' => array(
          'module' => 'comment',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'stories',
  );
  $context->condition_mode = 0;

  $translatables['story'] = array(

  );

  $export['story'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _simple_context_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
