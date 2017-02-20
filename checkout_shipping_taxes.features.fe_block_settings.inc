<?php
/**
 * @file
 * checkout_shipping_taxes.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function checkout_shipping_taxes_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-checkout_spenden_message'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'machine_name' => 'checkout_spenden_message',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'checkout/*/complete/deaktiviert',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -34,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-kontoinfo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'machine_name' => 'kontoinfo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'checkout/*/complete
user
user/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
      'inkshop' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -35,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Zahlungsinformation',
    'visibility' => 1,
  );

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*
cart*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
      'inkshop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'inkshop',
        'weight' => -37,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_checkout_progress-indication'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'indication',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'commerce_checkout_progress',
    'node_types' => array(),
    'pages' => 'checkout/*
cart',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -33,
      ),
      'inkshop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -40,
      ),
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-shopping_cart-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shopping_cart-block',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-warenkorb_block-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'warenkorb_block-block',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'inkshop',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
