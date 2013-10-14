<?php
/**
 * @file
 * feature_lacuna.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_lacuna_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-left-menu:biblio
  $menu_links['menu-left-menu:biblio'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'biblio',
    'router_path' => 'biblio',
    'link_title' => 'Bibliography',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-left-menu:forum
  $menu_links['menu-left-menu:forum'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-left-menu:http://www.lacunastories.com/wiki
  $menu_links['menu-left-menu:http://www.lacunastories.com/wiki'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'http://www.lacunastories.com/wiki',
    'router_path' => '',
    'link_title' => 'Wiki',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-left-menu:node/2
  $menu_links['menu-left-menu:node/2'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Responses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-left-menu:node/9
  $menu_links['menu-left-menu:node/9'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-left-menu:node/add
  $menu_links['menu-left-menu:node/add'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Your Story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-top-right:node/1
  $menu_links['menu-top-right:node/1'] = array(
    'menu_name' => 'menu-top-right',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-top-right:node/7
  $menu_links['menu-top-right:node/7'] = array(
    'menu_name' => 'menu-top-right',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-top-right:node/8
  $menu_links['menu-top-right:node/8'] = array(
    'menu_name' => 'menu-top-right',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Sewing Kit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-top-right:user
  $menu_links['menu-top-right:user'] = array(
    'menu_name' => 'menu-top-right',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-top-right:user/logout
  $menu_links['menu-top-right:user/logout'] = array(
    'menu_name' => 'menu-top-right',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliography');
  t('Documents');
  t('Forum');
  t('Help');
  t('Logout');
  t('My Account');
  t('Responses');
  t('Sewing Kit');
  t('Topics');
  t('Wiki');
  t('Your Story');


  return $menu_links;
}
