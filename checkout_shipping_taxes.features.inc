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
    'weight' => -19,
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
    'review' => 0,
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
    'weight' => -20,
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
    'weight' => -14,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['extra_pane__node__1420'] = array(
    'pane_id' => 'extra_pane__node__1420',
    'page' => 'disabled',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -17,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['paypal_ec_review'] = array(
    'page' => 'disabled',
    'fieldset' => 0,
    'pane_id' => 'paypal_ec_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['stock_validation_checkout_pane'] = array(
    'page' => 'checkout',
    'fieldset' => 0,
    'pane_id' => 'stock_validation_checkout_pane',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -13,
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
        'amount' => 330,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_briefsendung_bis_1000g',
              'price' => array(
                'amount' => 308,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 22,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'briefsendung_bis_500g' => array(
      'name' => 'briefsendung_bis_500g',
      'base' => 'briefsendung_bis_500g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
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
        'amount' => 250,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_briefsendung_bis_500g',
              'price' => array(
                'amount' => 234,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 16,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'deutschland_briefsendung_bis_50g' => array(
      'name' => 'deutschland_briefsendung_bis_50g',
      'base' => 'deutschland_briefsendung_bis_50g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_briefsendung_bis_50g',
      'weight' => 2,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_briefsendung_bis_50g_details_form',
        'details_form_validate' => 'deutschland_briefsendung_bis_50g_details_form_validate',
        'details_form_submit' => 'deutschland_briefsendung_bis_50g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Briefsendung bis 50g',
      'base_rate' => array(
        'amount' => 200,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_deutschland_briefsendung_bis_50g',
              'price' => array(
                'amount' => 187,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 13,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 5,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_deutschland_p_ckchen_bis_2000g',
              'price' => array(
                'amount' => 514,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 36,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'deutschland_paeckchen_bis_5kg' => array(
      'name' => 'deutschland_paeckchen_bis_5kg',
      'base' => 'deutschland_paeckchen_bis_5kg',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_deutschland_paeckchen_bis_5kg',
      'weight' => 3,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_paeckchen_bis_5kg_details_form',
        'details_form_validate' => 'deutschland_paeckchen_bis_5kg_details_form_validate',
        'details_form_submit' => 'deutschland_paeckchen_bis_5kg_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Paket bis 5kg',
      'base_rate' => array(
        'amount' => 750,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_deutschland_paeckchen_bis_5kg',
              'price' => array(
                'amount' => 701,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 49,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 4,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'deutschland_paket_bis_10000g_details_form',
        'details_form_validate' => 'deutschland_paket_bis_10000g_details_form_validate',
        'details_form_submit' => 'deutschland_paket_bis_10000g_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Deutschland Paket bis 10kg',
      'base_rate' => array(
        'amount' => 850,
        'currency_code' => 'EUR',
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_deutschland_paket_bis_10000g',
              'price' => array(
                'amount' => 794,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 56,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 6,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_eu_briefsendung_bis_1000g',
              'price' => array(
                'amount' => 794,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 56,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 7,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_eu_briefsendung_bis_500g',
              'price' => array(
                'amount' => 421,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 29,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 8,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_eu_briefsendung_bis_50g',
              'price' => array(
                'amount' => 234,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 16,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 10,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_eu_p_ckchen_bis_2000g',
              'price' => array(
                'amount' => 935,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 65,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'eu_paket_bis_5000g' => array(
      'name' => 'eu_paket_bis_5000g',
      'base' => 'eu_paket_bis_5000g',
      'display_title' => 'Versandkostenpauschale (ohne MwSt.)',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_eu_paket_bis_5000g',
      'weight' => 9,
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
        'data' => array(
          'components' => array(
            0 => array(
              'name' => 'flat_rate_eu_paket_bis_5000g',
              'price' => array(
                'amount' => 1589,
                'currency_code' => 'EUR',
                'data' => array(),
              ),
              'included' => TRUE,
            ),
            1 => array(
              'name' => 'tax|mwst_reduced_de',
              'price' => array(
                'amount' => 111,
                'currency_code' => 'EUR',
                'data' => array(
                  'tax_rate' => array(
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
                ),
              ),
              'included' => TRUE,
            ),
          ),
        ),
      ),
      'data' => array(
        'include_tax' => 'mwst_reduced_de',
      ),
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
      'weight' => 11,
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
