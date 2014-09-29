<?php
/**
 * @file
 * educloudalliance_portal_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function educloudalliance_portal_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_bazaar:http://bazaar.pilvivayla.fi
  $menu_links['main-menu_bazaar:http://bazaar.pilvivayla.fi'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://bazaar.pilvivayla.fi',
    'router_path' => '',
    'link_title' => 'Bazaar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bazaar:http://bazaar.pilvivayla.fi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_consortium:http://www.pilvivayla.fi
  $menu_links['main-menu_consortium:http://www.pilvivayla.fi'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.pilvivayla.fi',
    'router_path' => '',
    'link_title' => 'Consortium',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_consortium:http://www.pilvivayla.fi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_developers:http://www.github.com/koulutuksenpilvivayla
  $menu_links['main-menu_developers:http://www.github.com/koulutuksenpilvivayla'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.github.com/koulutuksenpilvivayla',
    'router_path' => '',
    'link_title' => 'Developers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_developers:http://www.github.com/koulutuksenpilvivayla',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_opetusreseptit:node/1
  $menu_links['main-menu_opetusreseptit:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Opetusreseptit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_opetusreseptit:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_qa---kysy:http://kysy.pilvivayla.fi
  $menu_links['main-menu_qa---kysy:http://kysy.pilvivayla.fi'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://kysy.pilvivayla.fi',
    'router_path' => '',
    'link_title' => 'QA - kysy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_qa---kysy:http://kysy.pilvivayla.fi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_yhteystiedot:yhteystiedot
  $menu_links['main-menu_yhteystiedot:yhteystiedot'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'yhteystiedot',
    'router_path' => 'yhteystiedot',
    'link_title' => 'Yhteystiedot',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_yhteystiedot:yhteystiedot',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bazaar');
  t('Consortium');
  t('Developers');
  t('Home');
  t('Opetusreseptit');
  t('QA - kysy');
  t('Yhteystiedot');


  return $menu_links;
}
