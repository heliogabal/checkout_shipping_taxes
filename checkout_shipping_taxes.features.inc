<?php
/**
 * @file
 * checkout_shipping_taxes.features.inc
 */

/**
 * Implements hook_commerce_features_default_checkout_panes().
 */
function checkout_shipping_taxes_commerce_features_default_checkout_panes() {
  $panes = array();

  $panes['account'] = array(
    'page' => 'checkout',
    'weight' => -18,
    'pane_id' => 'account',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['cart_contents'] = array(
    'page' => 'checkout',
    'weight' => -20,
    'pane_id' => 'cart_contents',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_completion_message'] = array(
    'page' => 'complete',
    'fieldset' => 0,
    'pane_id' => 'checkout_completion_message',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_donate'] = array(
    'page' => 'checkout',
    'fieldset' => 1,
    'pane_id' => 'checkout_donate',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => 0,
    'pane_id' => 'checkout_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_checkout_pane_payment'] = array(
    'page' => 'shipping',
    'weight' => -18,
    'pane_id' => 'commerce_checkout_pane_payment',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_fieldgroup_pane__group_commerce_order_note'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__group_commerce_order_note',
    'page' => 'checkout',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -16,
    'review' => 0,
  );

  $panes['commerce_payment'] = array(
    'page' => 'checkout',
    'weight' => -14,
    'pane_id' => 'commerce_payment',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_payment_redirect'] = array(
    'page' => 'payment',
    'pane_id' => 'commerce_payment_redirect',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_shipping'] = array(
    'page' => 'disabled',
    'weight' => -18,
    'review' => 0,
    'pane_id' => 'commerce_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
  );

  $panes['commerce_simplenews_checkout'] = array(
    'page' => 'checkout',
    'weight' => -17,
    'pane_id' => 'commerce_simplenews_checkout',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['customer_profile_billing'] = array(
    'page' => 'shipping',
    'weight' => -19,
    'pane_id' => 'customer_profile_billing',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['customer_profile_shipping'] = array(
    'page' => 'shipping',
    'weight' => -20,
    'pane_id' => 'customer_profile_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['extra_pane__node__1264'] = array(
    'pane_id' => 'extra_pane__node__1264',
    'page' => 'checkout',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -12,
    'enabled' => 1,
    'review' => 0,
  );

  $panes['extra_pane__node__1420'] = array(
    'pane_id' => 'extra_pane__node__1420',
    'page' => 'disabled',
    'fieldset' => 0,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 0,
    'review' => 0,
  );

  $panes['paypal_ec_review'] = array(
    'page' => 'disabled',
    'fieldset' => 0,
    'pane_id' => 'paypal_ec_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -17,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['stock_validation_checkout_pane'] = array(
    'page' => 'checkout',
    'fieldset' => 0,
    'pane_id' => 'stock_validation_checkout_pane',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -15,
    'enabled' => 1,
    'review' => 1,
  );

  return $panes;
}

/**
 * Implements hook_commerce_shipping_service_info().
 */
function checkout_shipping_taxes_commerce_shipping_service_info() {
  $items = array(
    'briefsendung_bis_1000g' => array(
      'name' => 'briefsendung_bis_1000g',
      'base' => 'briefsendung_bis_1000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_briefsendung_bis_1000g',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'briefsendung_bis_1000g_details_form',
        'details_form_validate' => 'briefsendung_bis_1000g_details_form_validate',
        'details_form_submit' => 'briefsendung_bis_1000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Briefsendung bis 1000g',
      'base_rate' => array(
        'amount' => 300,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'briefsendung_bis_500g' => array(
      'name' => 'briefsendung_bis_500g',
      'base' => 'briefsendung_bis_500g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_briefsendung_bis_500g',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'briefsendung_bis_500g_details_form',
        'details_form_validate' => 'briefsendung_bis_500g_details_form_validate',
        'details_form_submit' => 'briefsendung_bis_500g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Briefsendung bis 500g',
      'base_rate' => array(
        'amount' => 200,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'deutschland_p_ckchen_bis_2000g' => array(
      'name' => 'deutschland_p_ckchen_bis_2000g',
      'base' => 'deutschland_p_ckchen_bis_2000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_p_ckchen_bis_2000g',
      'weight' => 3,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_p_ckchen_bis_2000g_details_form',
        'details_form_validate' => 'deutschland_p_ckchen_bis_2000g_details_form_validate',
        'details_form_submit' => 'deutschland_p_ckchen_bis_2000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Päckchen bis 2000g',
      'base_rate' => array(
        'amount' => 550,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'deutschland_paket_bis_10000g' => array(
      'name' => 'deutschland_paket_bis_10000g',
      'base' => 'deutschland_paket_bis_10000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_paket_bis_10000g',
      'weight' => 2,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_paket_bis_10000g_details_form',
        'details_form_validate' => 'deutschland_paket_bis_10000g_details_form_validate',
        'details_form_submit' => 'deutschland_paket_bis_10000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Paket bis 10000g',
      'base_rate' => array(
        'amount' => 800,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_briefsendung_bis_1000g' => array(
      'name' => 'eu_briefsendung_bis_1000g',
      'base' => 'eu_briefsendung_bis_1000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_briefsendung_bis_1000g',
      'weight' => 4,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_briefsendung_bis_1000g_details_form',
        'details_form_validate' => 'eu_briefsendung_bis_1000g_details_form_validate',
        'details_form_submit' => 'eu_briefsendung_bis_1000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Briefsendung bis 1000g',
      'base_rate' => array(
        'amount' => 850,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_briefsendung_bis_500g' => array(
      'name' => 'eu_briefsendung_bis_500g',
      'base' => 'eu_briefsendung_bis_500g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_briefsendung_bis_500g',
      'weight' => 5,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_briefsendung_bis_500g_details_form',
        'details_form_validate' => 'eu_briefsendung_bis_500g_details_form_validate',
        'details_form_submit' => 'eu_briefsendung_bis_500g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Briefsendung bis 500g',
      'base_rate' => array(
        'amount' => 450,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_briefsendung_bis_50g' => array(
      'name' => 'eu_briefsendung_bis_50g',
      'base' => 'eu_briefsendung_bis_50g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_briefsendung_bis_50g',
      'weight' => 6,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_briefsendung_bis_50g_details_form',
        'details_form_validate' => 'eu_briefsendung_bis_50g_details_form_validate',
        'details_form_submit' => 'eu_briefsendung_bis_50g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Briefsendung bis 50g',
      'base_rate' => array(
        'amount' => 250,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_p_ckchen_bis_2000g' => array(
      'name' => 'eu_p_ckchen_bis_2000g',
      'base' => 'eu_p_ckchen_bis_2000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_p_ckchen_bis_2000g',
      'weight' => 8,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_p_ckchen_bis_2000g_details_form',
        'details_form_validate' => 'eu_p_ckchen_bis_2000g_details_form_validate',
        'details_form_submit' => 'eu_p_ckchen_bis_2000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Päckchen bis 2000g',
      'base_rate' => array(
        'amount' => 1000,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_paket_bis_5000g' => array(
      'name' => 'eu_paket_bis_5000g',
      'base' => 'eu_paket_bis_5000g',
      'display_title' => 'Versandkostenpauschale',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_paket_bis_5000g',
      'weight' => 7,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_paket_bis_5000g_details_form',
        'details_form_validate' => 'eu_paket_bis_5000g_details_form_validate',
        'details_form_submit' => 'eu_paket_bis_5000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Paket bis 5000g',
      'base_rate' => array(
        'amount' => 1700,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'versandkosten_inklusive' => array(
      'name' => 'versandkosten_inklusive',
      'base' => 'versandkosten_inklusive',
      'display_title' => 'Versandkosten inklusive',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_versandkosten_inklusive',
      'weight' => 9,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'versandkosten_inklusive_details_form',
        'details_form_validate' => 'versandkosten_inklusive_details_form_validate',
        'details_form_submit' => 'versandkosten_inklusive_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Versandkosten inklusive',
      'base_rate' => array(
        'amount' => 0,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function checkout_shipping_taxes_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function checkout_shipping_taxes_commerce_tax_default_rates() {
  $items = array(
    'mwst_reduced_de' => array(
      'name' => 'mwst_reduced_de',
      'display_title' => 'MwSt. 7%',
      'description' => '',
      'rate' => 0.07,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_mwst_reduced_de',
      'default_rules_component' => 1,
      'price_component' => 'tax|mwst_reduced_de',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'MwSt. 7%',
      'admin_list' => TRUE,
    ),
    'remove_ust_7_for_non_eu_clients' => array(
      'name' => 'remove_ust_7_for_non_eu_clients',
      'display_title' => 'Remove USt 7% for Non-EU clients',
      'description' => '',
      'rate' => 0,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_remove_ust_7_for_non_eu_clients',
      'default_rules_component' => 1,
      'price_component' => 'tax|remove_ust_7_for_non_eu_clients',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'Remove USt 7% for Non-EU clients',
      'admin_list' => TRUE,
    ),
    'remove_ust_shop_7_for_non_eu_clients' => array(
      'name' => 'remove_ust_shop_7_for_non_eu_clients',
      'display_title' => 'Remove USt 7% for Non-EU shop clients',
      'description' => '',
      'rate' => 0,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_remove_ust_shop_7_for_non_eu_clients',
      'default_rules_component' => 1,
      'price_component' => 'tax|remove_ust_shop_7_for_non_eu_clients',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'Remove USt SHOP 7% for Non-EU clients',
      'admin_list' => TRUE,
    ),
    'ust_7_shops' => array(
      'name' => 'ust_7_shops',
      'display_title' => 'USt 7%',
      'description' => 'USt 7% for shops on wholesale prices',
      'rate' => 0.07,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_ust_7_shops',
      'default_rules_component' => 1,
      'price_component' => 'tax|ust_7_shops',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'USt 7% shops',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function checkout_shipping_taxes_commerce_tax_default_types() {
  $items = array(
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function checkout_shipping_taxes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function checkout_shipping_taxes_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bezahlt?".
  $flags['bezahlt_'] = array(
    'entity_type' => 'commerce_order',
    'title' => 'Bezahlt?',
    'global' => 1,
    'types' => array(
      0 => 'commerce_order',
    ),
    'flag_short' => 'Als bezahlt markieren',
    'flag_long' => '',
    'flag_message' => 'bezahlt',
    'unflag_short' => 'Als unbezahlt markieren',
    'unflag_long' => 'unbezahlt',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'administrator' => 'administrator',
      'backoffice' => 'backoffice',
      'customer' => 0,
      'pdf' => 0,
      'canceled' => 0,
      'checkout_pane' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'checkout_shipping_taxes',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}