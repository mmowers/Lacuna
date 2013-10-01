<?php
/**
 * @file
 * feature_lacuna.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_lacuna_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-menu.
  $menus['menu-left-menu'] = array(
    'menu_name' => 'menu-left-menu',
    'title' => 'Left menu',
    'description' => '',
  );
  // Exported menu: menu-top-right.
  $menus['menu-top-right'] = array(
    'menu_name' => 'menu-top-right',
    'title' => 'Top right menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left menu');
  t('Top right menu');


  return $menus;
}
