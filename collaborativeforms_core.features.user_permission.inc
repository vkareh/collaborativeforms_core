<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function collaborativeforms_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
    ),
  );

  // Exported permission: access print
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer mass contact
  $permissions['administer mass contact'] = array(
    'name' => 'administer mass contact',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: choose whether to archive mass contact messages
  $permissions['choose whether to archive mass contact messages'] = array(
    'name' => 'choose whether to archive mass contact messages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: create mass_contact content
  $permissions['create mass_contact content'] = array(
    'name' => 'create mass_contact content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: create news content
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete any mass_contact content
  $permissions['delete any mass_contact content'] = array(
    'name' => 'delete any mass_contact content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete any news content
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete own mass_contact content
  $permissions['delete own mass_contact content'] = array(
    'name' => 'delete own mass_contact content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete own news content
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit any mass_contact content
  $permissions['edit any mass_contact content'] = array(
    'name' => 'edit any mass_contact content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit any news content
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit own mass_contact content
  $permissions['edit own mass_contact content'] = array(
    'name' => 'edit own mass_contact content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit own news content
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: send mass contact attachments
  $permissions['send mass contact attachments'] = array(
    'name' => 'send mass contact attachments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: send mass contact e-mails
  $permissions['send mass contact e-mails'] = array(
    'name' => 'send mass contact e-mails',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
    ),
  );

  return $permissions;
}
