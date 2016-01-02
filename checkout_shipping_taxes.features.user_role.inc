<?php
/**
 * @file
 * checkout_shipping_taxes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function checkout_shipping_taxes_user_default_roles() {
  $roles = array();

  // Exported role: buchhaltung.
  $roles['buchhaltung'] = array(
    'name' => 'buchhaltung',
    'weight' => 12,
  );

  // Exported role: kunde.
  $roles['kunde'] = array(
    'name' => 'kunde',
    'weight' => 11,
  );

  // Exported role: shop.
  $roles['shop'] = array(
    'name' => 'shop',
    'weight' => 2,
  );

  // Exported role: versand.
  $roles['versand'] = array(
    'name' => 'versand',
    'weight' => 13,
  );

  return $roles;
}
