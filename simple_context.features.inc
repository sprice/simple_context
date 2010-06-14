<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function simple_context_context_default_contexts() {
  module_load_include('inc', 'simple_context', 'simple_context.defaults');
  $args = func_get_args();
  return call_user_func_array('_simple_context_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function simple_context_ctools_plugin_api() {
  module_load_include('inc', 'simple_context', 'simple_context.defaults');
  $args = func_get_args();
  return call_user_func_array('_simple_context_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function simple_context_views_default_views() {
  module_load_include('inc', 'simple_context', 'simple_context.features.views');
  $args = func_get_args();
  return call_user_func_array('_simple_context_views_default_views', $args);
}
