<?php
/**
 * @file
 * checkout_shipping_taxes.features.commerce_checkout_panes.inc
 */

/**
 * Implements hook_commerce_checkout_panes_default().
 */
function checkout_shipping_taxes_commerce_checkout_panes_default() {
  $panes = array();

  $panes['account'] = array(
    'page' => 'checkout',
    'weight' => -5,
    'pane_id' => 'account',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['cart_contents'] = array(
    'page' => 'checkout',
    'weight' => -10,
    'pane_id' => 'cart_contents',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['checkout_completion_message'] = array(
    'page' => 'complete',
    'fieldset' => FALSE,
    'pane_id' => 'checkout_completion_message',
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['checkout_donate'] = array(
    'page' => 'checkout',
    'fieldset' => TRUE,
    'enabled' => FALSE,
    'pane_id' => 'checkout_donate',
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'review' => TRUE,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => FALSE,
    'pane_id' => 'checkout_review',
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['commerce_checkout_pane_payment'] = array(
    'page' => 'review',
    'weight' => 10,
    'pane_id' => 'commerce_checkout_pane_payment',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['commerce_fieldgroup_pane__group_commerce_order_note'] = array(
    'enabled' => FALSE,
    'pane_id' => 'commerce_fieldgroup_pane__group_commerce_order_note',
    'page' => 'checkout',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'review' => TRUE,
  );

  $panes['commerce_payment'] = array(
    'page' => 'review',
    'weight' => 10,
    'pane_id' => 'commerce_payment',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['commerce_payment_redirect'] = array(
    'page' => 'payment',
    'pane_id' => 'commerce_payment_redirect',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['commerce_shipping'] = array(
    'page' => 'shipping',
    'weight' => 2,
    'review' => FALSE,
    'pane_id' => 'commerce_shipping',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
  );

  $panes['commerce_simplenews_checkout'] = array(
    'page' => 'checkout',
    'weight' => -5,
    'pane_id' => 'commerce_simplenews_checkout',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['customer_profile_billing'] = array(
    'page' => 'checkout',
    'weight' => 5,
    'pane_id' => 'customer_profile_billing',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['customer_profile_shipping'] = array(
    'page' => 'checkout',
    'weight' => 0,
    'pane_id' => 'customer_profile_shipping',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['extra_pane__node__1264'] = array(
    'pane_id' => 'extra_pane__node__1264',
    'page' => 'checkout',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['extra_pane__node__1420'] = array(
    'pane_id' => 'extra_pane__node__1420',
    'page' => 'checkout',
    'fieldset' => TRUE,
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['paypal_ec_review'] = array(
    'page' => 'paypal_ec',
    'fieldset' => FALSE,
    'pane_id' => 'paypal_ec_review',
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  $panes['stock_validation_checkout_pane'] = array(
    'page' => 'checkout',
    'fieldset' => FALSE,
    'pane_id' => 'stock_validation_checkout_pane',
    'collapsible' => FALSE,
    'collapsed' => FALSE,
    'weight' => 0,
    'enabled' => TRUE,
    'review' => TRUE,
  );

  return $panes;
}
