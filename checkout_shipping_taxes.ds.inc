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

/**
 * Implements hook_ds_layout_settings_info().
 */
function checkout_shipping_taxes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|add_to_cart_confirmation_view';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'add_to_cart_confirmation_view';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_product_image',
        1 => 'sku',
        2 => 'title',
        3 => 'field_product_subtitle',
        4 => 'commerce_price',
      ),
    ),
    'fields' => array(
      'field_product_image' => 'ds_content',
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'field_product_subtitle' => 'ds_content',
      'commerce_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|add_to_cart_confirmation_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|default';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title',
        2 => 'field_product_subtitle',
        3 => 'field_physical_weight',
        4 => 'field_product_tax',
        5 => 'commerce_price',
        6 => 'link_zzgl_versandkosten',
        7 => 'status',
        8 => 'field_product_pdf',
        9 => 'commerce_stock',
        10 => 'field_product_image',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'field_product_subtitle' => 'ds_content',
      'field_physical_weight' => 'ds_content',
      'field_product_tax' => 'ds_content',
      'commerce_price' => 'ds_content',
      'link_zzgl_versandkosten' => 'ds_content',
      'status' => 'ds_content',
      'field_product_pdf' => 'ds_content',
      'commerce_stock' => 'ds_content',
      'field_product_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|form';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'field_product_subtitle',
        2 => 'redirect',
      ),
      'left' => array(
        3 => 'sku',
        4 => 'commerce_price',
        5 => 'field_physical_weight',
        6 => 'commerce_stock',
      ),
      'right' => array(
        7 => 'field_product_image',
        8 => 'field_product_pdf',
      ),
      'footer' => array(
        9 => 'status',
      ),
      'hidden' => array(
        10 => 'field_product_tax',
        11 => 'field_wholesale_price',
        12 => 'commerce_stock_override',
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_product_subtitle' => 'header',
      'redirect' => 'header',
      'sku' => 'left',
      'commerce_price' => 'left',
      'field_physical_weight' => 'left',
      'commerce_stock' => 'left',
      'field_product_image' => 'right',
      'field_product_pdf' => 'right',
      'status' => 'footer',
      'field_product_tax' => 'hidden',
      'field_wholesale_price' => 'hidden',
      'commerce_stock_override' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|line_item';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'line_item';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title',
        2 => 'commerce_price',
        3 => 'status',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
      'status' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|line_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|node_teaser';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'node_teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title',
        2 => 'field_product_subtitle',
        3 => 'commerce_price',
        4 => 'field_product_tax',
        5 => 'field_product_image',
        6 => 'status',
        7 => 'field_product_pdf',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title' => 'ds_content',
      'field_product_subtitle' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_product_tax' => 'ds_content',
      'field_product_image' => 'ds_content',
      'status' => 'ds_content',
      'field_product_pdf' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['commerce_product|product|node_teaser'] = $ds_layout;

  return $export;
}
