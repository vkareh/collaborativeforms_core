<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function collaborativeforms_core_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
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
        'menu-primary-links' => array(
          'module' => 'menu',
          'delta' => 'primary-links',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['global'] = $context;
  return $export;
}
