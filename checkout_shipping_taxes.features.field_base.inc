<?php
/**
 * @file
 * checkout_shipping_taxes.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function checkout_shipping_taxes_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'commerce_ch_vat'.
  $field_bases['commerce_ch_vat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_ch_vat',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_vat_reference',
    'settings' => array(
      'vat_country' => array(
        'CH' => 'CH',
      ),
    ),
    'translatable' => 0,
    'type' => 'commerce_vat_rate_reference',
  );

  // Exported field_base: 'commerce_customer_address'.
  $field_bases['commerce_customer_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_customer_profile',
    ),
    'field_name' => 'commerce_customer_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'commerce_de_vat'.
  $field_bases['commerce_de_vat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_de_vat',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_vat_reference',
    'settings' => array(
      'vat_country' => array(
        'AT' => 0,
        'BE' => 0,
        'BG' => 0,
        'CH' => 0,
        'CY' => 0,
        'CZ' => 0,
        'DE' => 'DE',
        'DK' => 0,
        'EE' => 0,
        'ES' => 0,
        'FI' => 0,
        'FR' => 0,
        'GB' => 0,
        'GR' => 0,
        'HR' => 0,
        'HU' => 0,
        'IE' => 0,
        'IT' => 0,
        'LT' => 0,
        'LU' => 0,
        'LV' => 0,
        'MT' => 0,
        'NL' => 0,
        'NO' => 0,
        'PL' => 0,
        'PT' => 0,
        'RO' => 0,
        'SE' => 0,
        'SI' => 0,
        'SK' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'commerce_vat_rate_reference',
  );

  // Exported field_base: 'commerce_no_vat'.
  $field_bases['commerce_no_vat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_no_vat',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_vat_reference',
    'settings' => array(
      'vat_country' => array(
        'NO' => 'NO',
      ),
    ),
    'translatable' => 0,
    'type' => 'commerce_vat_rate_reference',
  );

  // Exported field_base: 'commerce_price'.
  $field_bases['commerce_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_stock'.
  $field_bases['commerce_stock'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_stock',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'commerce_stock_override'.
  $field_bases['commerce_stock_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_stock_override',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_physical_weight'.
  $field_bases['field_physical_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_physical_weight',
    'global_block_settings' => 1,
    'indexes' => array(
      'weight' => array(
        0 => 'weight',
      ),
    ),
    'locked' => 0,
    'module' => 'physical',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'physical_weight',
  );

  // Exported field_base: 'field_product_image'.
  $field_bases['field_product_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_product_pdf'.
  $field_bases['field_product_pdf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_pdf',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_product_subtitle'.
  $field_bases['field_product_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_subtitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_ust_id'.
  $field_bases['field_ust_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ust_id',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'vat_number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'vat_number',
  );

  // Exported field_base: 'message_commerce_order'.
  $field_bases['message_commerce_order'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'message_commerce_order',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'order_id',
          'type' => 'property',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'commerce_order',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
