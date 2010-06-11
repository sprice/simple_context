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
 * Implementation of hook_node_info().
 */
function simple_context_node_info() {
  module_load_include('inc', 'simple_context', 'simple_context.features.node');
  $args = func_get_args();
  return call_user_func_array('_simple_context_node_info', $args);
}
