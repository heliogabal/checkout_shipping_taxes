<?php
/**
 * @file
 * checkout_shipping_taxes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function checkout_shipping_taxes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|product|default';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'link_zzgl_versandkosten' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_product_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['commerce_product|product|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|product|node_teaser';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'node_teaser';
  $ds_fieldsetting->settings = array(
    'commerce_price' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['commerce_product|product|node_teaser'] = $ds_fieldsetting;

  return $export;
}
