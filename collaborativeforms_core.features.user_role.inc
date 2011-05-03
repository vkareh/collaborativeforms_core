<?php

/**
 * Implementation of hook_user_default_roles().
 */
function collaborativeforms_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: developer
  $roles['developer'] = array(
    'name' => 'developer',
  );

  return $roles;
}
