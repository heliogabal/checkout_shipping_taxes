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
    'weight' => -19,
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
    'enabled' => 1,
    'pane_id' => 'checkout_donate',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'review' => 1,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => 0,
    'pane_id' => 'checkout_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_checkout_pane_payment'] = array(
    'page' => 'disabled',
    'weight' => -18,
    'pane_id' => 'commerce_checkout_pane_payment',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
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
    'review' => 1,
  );

  $panes['commerce_payment'] = array(
    'page' => 'checkout',
    'weight' => -15,
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
    'weight' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_shipping'] = array(
    'page' => 'disabled',
    'weight' => -19,
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

  $panes['customer_profile_eu_vat_rc'] = array(
    'page' => 'shipping',
    'weight' => -18,
    'pane_id' => 'customer_profile_eu_vat_rc',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 0,
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
    'page' => 'review',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['extra_pane__node__1420'] = array(
    'pane_id' => 'extra_pane__node__1420',
    'page' => 'disabled',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 0,
    'review' => 1,
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
    'weight' => -14,
    'enabled' => 1,
    'review' => 1,
  );

  return $panes;
}

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function checkout_shipping_taxes_commerce_flat_rate_default_services() {
  $items = array(
    'briefsendung_bis_1000g' => array(
      'name' => 'briefsendung_bis_1000g',
      'base' => 'briefsendung_bis_1000g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
    'deutschland_p_ckchen_bis_2000g' => array(
      'name' => 'deutschland_p_ckchen_bis_2000g',
      'base' => 'deutschland_p_ckchen_bis_2000g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
        'amount' => 500,
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
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_paket_bis_10000g',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_paket_bis_10000g_details_form',
        'details_form_validate' => 'deutschland_paket_bis_10000g_details_form_validate',
        'details_form_submit' => 'deutschland_paket_bis_10000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Paket bis 10kg',
      'base_rate' => array(
        'amount' => 1000,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'deutschland_paket_bis_31_5kg' => array(
      'name' => 'deutschland_paket_bis_31_5kg',
      'base' => 'deutschland_paket_bis_31_5kg',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_paket_bis_31_5kg',
      'weight' => 2,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_paket_bis_31_5kg_details_form',
        'details_form_validate' => 'deutschland_paket_bis_31_5kg_details_form_validate',
        'details_form_submit' => 'deutschland_paket_bis_31_5kg_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Paket bis 31,5kg',
      'base_rate' => array(
        'amount' => 2000,
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
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
        'amount' => 1000,
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
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
        'amount' => 500,
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
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
        'amount' => 300,
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
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_p_ckchen_bis_2000g',
      'weight' => 7,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'eu_p_ckchen_bis_2000g_details_form',
        'details_form_validate' => 'eu_p_ckchen_bis_2000g_details_form_validate',
        'details_form_submit' => 'eu_p_ckchen_bis_2000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'EU Päckchen bis 2000g',
      'base_rate' => array(
        'amount' => 1500,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'not_eu_briefsendung_bis_1000g' => array(
      'name' => 'not_eu_briefsendung_bis_1000g',
      'base' => 'not_eu_briefsendung_bis_1000g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_not_eu_briefsendung_bis_1000g',
      'weight' => 8,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'not_eu_briefsendung_bis_1000g_details_form',
        'details_form_validate' => 'not_eu_briefsendung_bis_1000g_details_form_validate',
        'details_form_submit' => 'not_eu_briefsendung_bis_1000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Not EU Briefsendung bis 1000g',
      'base_rate' => array(
        'amount' => 935,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'not_eu_briefsendung_bis_500g' => array(
      'name' => 'not_eu_briefsendung_bis_500g',
      'base' => 'not_eu_briefsendung_bis_500g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_not_eu_briefsendung_bis_500g',
      'weight' => 9,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'not_eu_briefsendung_bis_500g_details_form',
        'details_form_validate' => 'not_eu_briefsendung_bis_500g_details_form_validate',
        'details_form_submit' => 'not_eu_briefsendung_bis_500g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Not EU Briefsendung bis 500g',
      'base_rate' => array(
        'amount' => 467,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'not_eu_briefsendung_bis_50g' => array(
      'name' => 'not_eu_briefsendung_bis_50g',
      'base' => 'not_eu_briefsendung_bis_50g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_not_eu_briefsendung_bis_50g',
      'weight' => 10,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'not_eu_briefsendung_bis_50g_details_form',
        'details_form_validate' => 'not_eu_briefsendung_bis_50g_details_form_validate',
        'details_form_submit' => 'not_eu_briefsendung_bis_50g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Not EU Briefsendung bis 50g',
      'base_rate' => array(
        'amount' => 280,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'not_eu_p_ckchen_bis_2000g' => array(
      'name' => 'not_eu_p_ckchen_bis_2000g',
      'base' => 'not_eu_p_ckchen_bis_2000g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_not_eu_p_ckchen_bis_2000g',
      'weight' => 11,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'not_eu_p_ckchen_bis_2000g_details_form',
        'details_form_validate' => 'not_eu_p_ckchen_bis_2000g_details_form_validate',
        'details_form_submit' => 'not_eu_p_ckchen_bis_2000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Not EU Päckchen bis 2000g',
      'base_rate' => array(
        'amount' => 1402,
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
      'weight' => 12,
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
 * Implements hook_default_message_type().
 */
function checkout_shipping_taxes_default_message_type() {
  $items = array();
  $items['commerce_order_donation_thank_you'] = entity_import('message_type', '{
    "name" : "commerce_order_donation_thank_you",
    "description" : "Commerce Order: donation thank you",
    "argument_keys" : [ "%[site:current-cart-order]" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "de" : [
        {
          "value" : "\\u003Cp\\u003EVielen Dank f\\u00fcr Ihre Spende an den INKOTA Netzwerk e.V.!\\u003C\\/p\\u003E\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EVielen Dank f\\u00fcr Ihre Spende an den INKOTA Netzwerk e.V.!\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Hallo [current-user:field_user_anrede] [current-user:field_user_nachname],\\u0026lt;br \\/\\u0026gt;Vielen Dank f\\u00fcr Ihre Spende an INKOTA.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Der INKOTA-netzwerk e.V. ist beim Finanzamt als gemeinn\\u00fctzige Organisation anerkannt und von der K\\u00f6rperschaftssteuer befreit, somit k\\u00f6nnen Sie Spenden an uns von der Steuer absetzen.\\u003C\\/p\\u003E\\u003Cp\\u003EWir senden Ihnen bereits ab einer Spendensumme in H\\u00f6he von 50 Euro automatisch eine separate Spendenbescheinigung f\\u00fcr das Finanzamt zu. Wir best\\u00e4tigen, dass Ihre Zuwendung steuerbeg\\u00fcnstigter Zwecke im Sinne \\u003Ca href=\\u0022http:\\/\\/www.gesetze-im-internet.de\\/ao_1977\\/__51.html\\u0022 rel=\\u0022nofollow\\u0022 title=\\u0022Spendenquittung\\u0022\\u003E\\u0026sect;\\u0026sect; 51ff AO\\u003C\\/a\\u003E verwendet wird.\\u003C\\/p\\u003E\\u003Cp\\u003EEinzelspender bekommen von uns nach Eingang ihrer Spende eine Spendenquittung zugesandt.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\u003Cp\\u003EWir stehen Ihnen f\\u00fcr weitere Fragen zu Ihrer Bestellung gerne zur Verf\\u00fcgung.\\u003C\\/p\\u003E\\u003Cp\\u003EIhr INKOTA Team\\u003C\\/p\\u003E\\u003Cp\\u003EINKOTA-netzwerk e.V.\\u003Cbr \\/\\u003EChrysanthemenstra\\u00dfe 1-3\\u003Cbr \\/\\u003E10407 Berlin\\u003C\\/p\\u003E\\u003Cp\\u003ETel.: +49 (0)30 420 8202-0\\u003Cbr \\/\\u003EFax: +49 (0)30 420 8202-10\\u003Cbr \\/\\u003EE-Mail: shop@inkota.de\\u003C\\/p\\u003E",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Hallo [current-user:field_user_anrede] [current-user:field_user_nachname],\\u0026lt;br \\/\\u0026gt;Vielen Dank f\\u00fcr Ihre Spende an INKOTA.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Der INKOTA-netzwerk e.V. ist beim Finanzamt als gemeinn\\u00fctzige Organisation anerkannt und von der K\\u00f6rperschaftssteuer befreit, somit k\\u00f6nnen Sie Spenden an uns von der Steuer absetzen.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWir senden Ihnen bereits ab einer Spendensumme in H\\u00f6he von 50 Euro automatisch eine separate Spendenbescheinigung f\\u00fcr das Finanzamt zu. Wir best\\u00e4tigen, dass Ihre Zuwendung steuerbeg\\u00fcnstigter Zwecke im Sinne \\u003Ca href=\\u0022http:\\/\\/www.gesetze-im-internet.de\\/ao_1977\\/__51.html\\u0022 rel=\\u0022nofollow\\u0022 title=\\u0022Spendenquittung\\u0022\\u003E\\u00a7\\u00a7 51ff AO\\u003C\\/a\\u003E verwendet wird.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEinzelspender bekommen von uns nach Eingang ihrer Spende eine Spendenquittung zugesandt.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWir stehen Ihnen f\\u00fcr weitere Fragen zu Ihrer Bestellung gerne zur Verf\\u00fcgung.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIhr INKOTA Team\\u003C\\/p\\u003E\\n\\u003Cp\\u003EINKOTA-netzwerk e.V.\\u003Cbr\\u003EChrysanthemenstra\\u00dfe 1-3\\u003Cbr\\u003E10407 Berlin\\u003C\\/p\\u003E\\n\\u003Cp\\u003ETel.: +49 (0)30 420 8202-0\\u003Cbr\\u003EFax: +49 (0)30 420 8202-10\\u003Cbr\\u003EE-Mail: \\u003Ca href=\\u0022mailto:shop@inkota.de\\u0022\\u003Eshop@inkota.de\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ],
      "en" : [
        {
          "value" : "\\u003Cp\\u003EVielen Dank f\\u00fcr Ihre Spende\\u0026nbsp;an den INKOTA Netzwerk e.V.\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EVielen Dank f\\u00fcr Ihre Spende\\u00a0an den INKOTA Netzwerk e.V.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Hallo [current-user:field_user_anrede] [current-user:field_user_nachname],\\u0026lt;br \\/\\u0026gt;Vielen Dank f\\u00fcr Ihre Spende an INKOTA.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Der INKOTA-netzwerk e.V. ist beim Finanzamt als gemeinn\\u00fctzige Organisation anerkannt und von der K\\u00f6rperschaftssteuer befreit, somit k\\u00f6nnen Sie Spenden an uns von der Steuer absetzen.\\u003C\\/p\\u003E\\u003Cp\\u003EWir senden Ihnen bereits ab einer Spendensumme in H\\u00f6he von 50 Euro automatisch eine separate Spendenbescheinigung f\\u00fcr das Finanzamt zu. Wir best\\u00e4tigen, dass Ihre Zuwendung steuerbeg\\u00fcnstigter Zwecke im Sinne \\u003Ca href=\\u0022http:\\/\\/www.gesetze-im-internet.de\\/ao_1977\\/__51.html\\u0022 rel=\\u0022nofollow\\u0022 title=\\u0022Spendenquittung\\u0022\\u003E\\u0026sect;\\u0026sect; 51ff AO\\u003C\\/a\\u003E verwendet wird.\\u003C\\/p\\u003E\\u003Cp\\u003EEinzelspender bekommen von uns nach Eingang ihrer Spende eine Spendenquittung zugesandt.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\u003Cp\\u003EWir stehen Ihnen f\\u00fcr weitere Fragen zu Ihrer Bestellung gerne zur Verf\\u00fcgung.\\u003C\\/p\\u003E\\u003Cp\\u003EIhr INKOTA Team\\u003C\\/p\\u003E\\u003Cp\\u003EINKOTA-netzwerk e.V.\\u003Cbr \\/\\u003EChrysanthemenstra\\u00dfe 1-3\\u003Cbr \\/\\u003E10407 Berlin\\u003C\\/p\\u003E\\u003Cp\\u003ETel.: +49 (0)30 420 8202-0\\u003Cbr \\/\\u003EFax: +49 (0)30 420 8202-10\\u003Cbr \\/\\u003EE-Mail: shop@inkota.de\\u003C\\/p\\u003E",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Hallo [current-user:field_user_anrede] [current-user:field_user_nachname],\\u0026lt;br \\/\\u0026gt;Vielen Dank f\\u00fcr Ihre Spende an INKOTA.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026lt;p\\u0026gt;Der INKOTA-netzwerk e.V. ist beim Finanzamt als gemeinn\\u00fctzige Organisation anerkannt und von der K\\u00f6rperschaftssteuer befreit, somit k\\u00f6nnen Sie Spenden an uns von der Steuer absetzen.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWir senden Ihnen bereits ab einer Spendensumme in H\\u00f6he von 50 Euro automatisch eine separate Spendenbescheinigung f\\u00fcr das Finanzamt zu. Wir best\\u00e4tigen, dass Ihre Zuwendung steuerbeg\\u00fcnstigter Zwecke im Sinne \\u003Ca href=\\u0022http:\\/\\/www.gesetze-im-internet.de\\/ao_1977\\/__51.html\\u0022 rel=\\u0022nofollow\\u0022 title=\\u0022Spendenquittung\\u0022\\u003E\\u00a7\\u00a7 51ff AO\\u003C\\/a\\u003E verwendet wird.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEinzelspender bekommen von uns nach Eingang ihrer Spende eine Spendenquittung zugesandt.\\u0026lt;\\/p\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWir stehen Ihnen f\\u00fcr weitere Fragen zu Ihrer Bestellung gerne zur Verf\\u00fcgung.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIhr INKOTA Team\\u003C\\/p\\u003E\\n\\u003Cp\\u003EINKOTA-netzwerk e.V.\\u003Cbr\\u003EChrysanthemenstra\\u00dfe 1-3\\u003Cbr\\u003E10407 Berlin\\u003C\\/p\\u003E\\n\\u003Cp\\u003ETel.: +49 (0)30 420 8202-0\\u003Cbr\\u003EFax: +49 (0)30 420 8202-10\\u003Cbr\\u003EE-Mail: \\u003Ca href=\\u0022mailto:shop@inkota.de\\u0022\\u003Eshop@inkota.de\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ],
      "und" : [
        {
          "value" : "Order @{message:message-commerce-order:order-number} at [site:name]",
          "format" : null
        },
        {
          "value" : "Thanks for your order @{message:message-commerce-order:order-number} at [site:name].\\r\\n\\r\\nIf this is your first order with us, you will receive a separate e-mail with login instructions. You can view your order history with us at any time by logging into our website at:\\r\\n\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the status of your current order at:\\r\\n\\r\\n[message:message-commerce-order:view-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\n\\u003Cp\\u003EThanks for your order @{message:message-commerce-order:order-number} at [site:name].\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIf this is your first order with us, you will receive a separate e-mail with login instructions. You can view your order history with us at any time by logging into our website at:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EYou can find the status of your current order at:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:view-url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPlease contact us if you have any questions about your order.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['commerce_order_order_confirmation_versand'] = entity_import('message_type', '{
    "name" : "commerce_order_order_confirmation_versand",
    "description" : "Commerce Order: order confirmation versand",
    "argument_keys" : [ "%[site:current-cart-order]" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "de",
    "arguments" : null,
    "message_text" : {
      "de" : [
        {
          "value" : "\\u003Cp\\u003ENeue Bestellung Nr. @{message:message-commerce-order:order-number}\\u0026nbsp;im [site:name]\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003ENeue Bestellung Nr. @{message:message-commerce-order:order-number}\\u00a0im [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EHallo,\\u003Cbr \\/\\u003ENeue Bestellung mit der Bestellnr. @{message:message-commerce-order:order-number}:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E[message:message_commerce_order]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEinzelheiten der Bestellung\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EBestellnummer: [message:message-commerce-order:order-number]\\u003Cbr \\/\\u003EBestellt am: [message:message-commerce-order:created:short]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EBestellte(r) Artikel\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EVersandadresse:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:postal_code]\\u0026nbsp;[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:locality]\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERechnungsadresse:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:postal_code]\\u0026nbsp;[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cpre\\u003E\\r\\n----------------------------\\u003C\\/pre\\u003E\\r\\n\\r\\n\\u003Cp\\u003EBitte so schnell wie m\\u00f6glich bearbeiten!\\u003Cbr \\/\\u003E\\u0026lt;a href=\\u0026quot;\\/admin\\/commerce\\/orders\\u0026quot;\\u0026gt;Zur Bestell\\u00fcbersicht im Webshop\\u0026lt;\\/a\\u0026gt;\\u003C\\/p\\u003E",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E\\n\\u003Cp\\u003EHallo,\\u003Cbr\\u003ENeue Bestellung mit der Bestellnr. @{message:message-commerce-order:order-number}:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message_commerce_order]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEinzelheiten der Bestellung\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBestellnummer: [message:message-commerce-order:order-number]\\u003Cbr\\u003EBestellt am: [message:message-commerce-order:created:short]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBestellte(r) Artikel\\u003C\\/p\\u003E\\n\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\n\\u003Cp\\u003EVersandadresse:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:thoroughfare]\\u003Cbr\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:postal_code]\\u00a0[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:locality]\\u00a0\\u003C\\/p\\u003E\\n\\u003Cp\\u003ERechnungsadresse:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:postal_code]\\u00a0[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\u00a0\\u003C\\/p\\u003E\\n\\n----------------------------\\u003Cp\\u003EBitte so schnell wie m\\u00f6glich bearbeiten!\\u003Cbr\\u003E\\u0026lt;a href=\\u0022\\/admin\\/commerce\\/orders\\u0022\\u0026gt;Zur Bestell\\u00fcbersicht im Webshop\\u0026lt;\\/a\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ],
      "en" : [
        {
          "value" : "\\u003Cp\\u003ENeue Bestellung Nr. @{message:message-commerce-order:order-number} im [site:name]\\u003C\\/p\\u003E\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003ENeue Bestellung Nr. @{message:message-commerce-order:order-number} im [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EHallo,\\u003Cbr \\/\\u003ENeue Bestellung mit der Bestellnr. @{message:message-commerce-order:order-number}:\\u003C\\/p\\u003E\\u003Cp\\u003E[message:message_commerce_order]\\u003C\\/p\\u003E\\u003Cp\\u003EEinzelheiten der Bestellung\\u003C\\/p\\u003E\\u003Cp\\u003EBestellnummer: [message:message-commerce-order:order-number]\\u003Cbr \\/\\u003EBestellt am: [message:message-commerce-order:created:short]\\u003C\\/p\\u003E\\u003Cp\\u003EBestellte(r) Artikel\\u003C\\/p\\u003E\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\u003Cp\\u003EVersandadresse:\\u003C\\/p\\u003E\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:postal_code]\\u0026nbsp;[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:locality]\\u0026nbsp;\\u003C\\/p\\u003E\\u003Cp\\u003ERechnungsadresse:\\u003C\\/p\\u003E\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:postal_code]\\u0026nbsp;[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\u0026nbsp;\\u003C\\/p\\u003E\\n\\u003Cpre\\u003E\\n----------------------------\\u003C\\/pre\\u003E\\n\\n\\u003Cp\\u003EBitte so schnell wie m\\u00f6glich bearbeiten!\\u003Cbr \\/\\u003E\\u0026lt;a href=\\u0026quot;\\/admin\\/commerce\\/orders\\u0026quot;\\u0026gt;Zur Bestell\\u00fcbersicht im Webshop\\u0026lt;\\/a\\u0026gt;\\u003C\\/p\\u003E",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E\\n\\u003Cp\\u003EHallo,\\u003Cbr\\u003ENeue Bestellung mit der Bestellnr. @{message:message-commerce-order:order-number}:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message_commerce_order]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EEinzelheiten der Bestellung\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBestellnummer: [message:message-commerce-order:order-number]\\u003Cbr\\u003EBestellt am: [message:message-commerce-order:created:short]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EBestellte(r) Artikel\\u003C\\/p\\u003E\\n\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\n\\u003Cp\\u003EVersandadresse:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:thoroughfare]\\u003Cbr\\u003E[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:postal_code]\\u00a0[message:message-commerce-order:commerce-customer-shipping:commerce-customer-address:locality]\\u00a0\\u003C\\/p\\u003E\\n\\u003Cp\\u003ERechnungsadresse:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr\\u003E[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:postal_code]\\u00a0[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\u00a0\\u003C\\/p\\u003E\\n\\n----------------------------\\u003Cp\\u003EBitte so schnell wie m\\u00f6glich bearbeiten!\\u003Cbr\\u003E\\u0026lt;a href=\\u0022\\/admin\\/commerce\\/orders\\u0022\\u0026gt;Zur Bestell\\u00fcbersicht im Webshop\\u0026lt;\\/a\\u0026gt;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ],
      "und" : [
        {
          "value" : "Order @{message:message-commerce-order:order-number} at [site:name]",
          "format" : null
        },
        {
          "value" : "Thanks for your order @{message:message-commerce-order:order-number} at [site:name].\\r\\n\\r\\nIf this is your first order with us, you will receive a separate e-mail with login instructions. You can view your order history with us at any time by logging into our website at:\\r\\n\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the status of your current order at:\\r\\n\\r\\n[message:message-commerce-order:view-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.",
          "format" : "commerce_order_message",
          "safe_value" : "\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\u003Cbr \\/\\u003E\\n\\n\\u003Cp\\u003EThanks for your order @{message:message-commerce-order:order-number} at [site:name].\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIf this is your first order with us, you will receive a separate e-mail with login instructions. You can view your order history with us at any time by logging into our website at:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EYou can find the status of your current order at:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:message-commerce-order:view-url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPlease contact us if you have any questions about your order.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\n\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['commerce_order_summary'] = entity_import('message_type', '{
    "name" : "commerce_order_summary",
    "description" : "Commerce order summary",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "de",
    "arguments" : null,
    "message_text" : { "de" : [
        {
          "value" : "\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E!order-summary\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_default_pet().
 */
function checkout_shipping_taxes_default_pet() {
  $items = array();
  $items['donation_email'] = entity_import('pet', '{
    "name" : "donation_email",
    "title" : "Spenden Email an die Verantwortlichen",
    "subject" : "Eine neue Spende ist eingegangen",
    "mail_body" : "Hallo Doro, \\r\\nes ist gespendet worden, und Moni hat gerade den Zahlungseingang festgestellt:\\r\\n\\r\\n[commerce-order:owner:field-user-anrede] [commerce-order:owner:field-user-vorname] [commerce-order:owner:field-user-nachname]\\r\\n[commerce-order:mail]\\r\\nRechnungsnr.: [commerce-order:order-number]\\r\\n[commerce-order:commerce_extra_tokens_order_donation]\\r\\n\\r\\n\\u003Cb\\u003EAdresse\\u003C\\/b\\u003E: \\r\\n[commerce-order:owner:field_user_anrede]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:owner:field_user_vorname] [commerce-order:owner:field_user_nachname]\\r\\n[commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\r\\n[commerce-order:commerce-customer-billing:commerce-customer-address:postal_code] [commerce-order:commerce-customer-billing:commerce-customer-address:locality]",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['newsletter_abo_an_die_verantwortlichen'] = entity_import('pet', '{
    "name" : "newsletter_abo_an_die_verantwortlichen",
    "title" : "Newsletter Abo an die Verantwortlichen",
    "subject" : "Neues [newsletter:name] Abo",
    "mail_body" : "Hallo, \\r\\n\\r\\nes gibt eine\\/n neue\\/n [newsletter:name] AbonnentIn!\\r\\n\\r\\n\\r\\nHier kann die aktualisierte Liste der Newsletterabonnements heruntergeladen werden: https:\\/\\/webshop.inkota.de\\/admin\\/people\\/simplenews \\r\\n\\r\\nGru\\u00df\\r\\nDer Webshop",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  $items['order_admin_email'] = entity_import('pet', '{
    "name" : "order_admin_email",
    "title" : "Order Admin Email",
    "subject" : "Neue Bestellung [commerce-order:order-number] im Webshop",
    "mail_body" : "\\u003Cp\\u003EHallo Doro,\\u003Cbr \\/\\u003E\\r\\nEine neue Bestellung ist gerade eingegangen:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EEinzelheiten der Bestellung\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EBestellnummer: [commerce-order:order-number]\\u003Cbr \\/\\u003E\\r\\nBestellt am: [commerce-order:created:short]\\u003C\\/p\\u003E\\r\\n----------------------------\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EBestellte(r) Artikel\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[commerce-order:commerce_extra_tokens_order_line_items]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:commerce_order_total]\\u003C\\/p\\u003E\\r\\n----------------------------\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003EVersandadresse\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[commerce-order:commerce-customer-shipping:commerce-customer-address:name_line]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:commerce-customer-shipping:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:commerce-customer-shipping:commerce-customer-address:postal_code]\\u00a0[commerce-order:commerce-customer-shipping:commerce-customer-address:locality]\\u003C\\/p\\u003E\\r\\n----------------------------\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003ERechnungsadresse\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[commerce-order:commerce-customer-billing:commerce-customer-address:name_line]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E\\r\\n[commerce-order:commerce-customer-billing:commerce-customer-address:postal_code]\\u00a0[commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\u003C\\/p\\u003E\\r\\n----------------------------\\r\\n\\u003Cp\\u003EBitte so schnell wie m\\u00f6glich bearbeiten!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022https:\\/\\/webshop.inkota.de\\/admin\\/commerce\\/orders\\u0022\\u003EZur Bestell\\u00fcbersicht im Webshop\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EDanke!\\u003Cbr \\/\\u003EDein Webshop\\u003C\\/p\\u003E",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  return $items;
}
