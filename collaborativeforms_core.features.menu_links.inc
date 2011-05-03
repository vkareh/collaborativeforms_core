<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:contact
  $menu_links['primary-links:contact'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');


  return $menu_links;
}
