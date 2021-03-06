<?php
/**
 * @file
 * checkout_shipping_taxes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function checkout_shipping_taxes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_customer_profile-billing-commerce_customer_address'.
  $field_instances['commerce_customer_profile-billing-commerce_customer_address'] = array(
    'bundle' => 'billing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'newsletter_abo_profil_vorname' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_customer_profile',
    'exclude_cv' => 0,
    'field_name' => 'commerce_customer_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'DE',
        'format_handlers' => array(
          'address' => 'address',
          'title' => 'title',
          'organisation' => 'organisation',
          'name-full' => 'name-full',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-eu_vat_rc-commerce_vat_number'.
  $field_instances['commerce_customer_profile-eu_vat_rc-commerce_vat_number'] = array(
    'bundle' => 'eu_vat_rc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wenn Sie als europäisches Unternehmen außerhalb Deutschlands ihre korrekte USt-ID angeben, wird Ihnen keine MwSt. berechnet.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'vat_number',
        'settings' => array(),
        'type' => 'vat_number_formatter',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_customer_profile',
    'exclude_cv' => 0,
    'field_name' => 'commerce_vat_number',
    'label' => 'Umsatzsteuer-Identifikationsnummer',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'vat_number',
      'settings' => array(
        'skip_validation_on_service_failure' => 1,
      ),
      'type' => 'vat_number_widget',
      'weight' => -10,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-shipping-commerce_customer_address'.
  $field_instances['commerce_customer_profile-shipping-commerce_customer_address'] = array(
    'bundle' => 'shipping',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => -10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_customer_profile',
    'exclude_cv' => 0,
    'field_name' => 'commerce_customer_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'AT' => 'AT',
          'BE' => 'BE',
          'BG' => 'BG',
          'CH' => 'CH',
          'CY' => 'CY',
          'CZ' => 'CZ',
          'DE' => 'DE',
          'DK' => 'DK',
          'EE' => 'EE',
          'ES' => 'ES',
          'FI' => 'FI',
          'FR' => 'FR',
          'GB' => 'GB',
          'GR' => 'GR',
          'HR' => 'HR',
          'HU' => 'HU',
          'IE' => 'IE',
          'IT' => 'IT',
          'LT' => 'LT',
          'LU' => 'LU',
          'LV' => 'LV',
          'MT' => 'MT',
          'NL' => 'NL',
          'PL' => 'PL',
          'PT' => 'PT',
          'RO' => 'RO',
          'SE' => 'SE',
          'SI' => 'SI',
          'SK' => 'SK',
        ),
        'default_country' => 'DE',
        'format_handlers' => array(
          'address' => 'address',
          'title' => 'title',
          'organisation' => 'organisation',
          'name-full' => 'name-full',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'commerce_product-product-commerce_de_vat'.
  $field_instances['commerce_product-product-commerce_de_vat'] = array(
    'bundle' => 'product',
    'commerce_bpc' => array(
      'show_field' => 1,
    ),
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Deutschland VAT Rates',
    ),
    'default_value' => array(
      0 => array(
        'value' => 'de_reduced',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_vat_reference',
        'settings' => array(),
        'type' => 'commerce_vat_rate',
        'weight' => 15,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'exclude_cv' => 0,
    'field_name' => 'commerce_de_vat',
    'label' => 'MwSt.-Satz',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'commerce_product-product-commerce_price'.
  $field_instances['commerce_product-product-commerce_price'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 4,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 1,
          'prefix' => '',
          'suffix' => '',
          'text_format' => 'filtered_html',
          'whole_numbers_only' => 0,
        ),
        'type' => 'commerce_price_prefix_suffix',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price_components',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'commerce_price_components' => array(
            'base_price' => 1,
            'discount' => 0,
            'fee' => 0,
            'flat_rate_briefsendung_bis_500g' => 0,
            'flat_rate_briefsendung_bis_1000g' => 0,
            'flat_rate_deutschland_briefsendung_bis_50g' => 0,
            'flat_rate_deutschland_p_ckchen_bis_2000g' => 0,
            'flat_rate_deutschland_paeckchen_bis_5kg' => 0,
            'flat_rate_deutschland_paket_bis_10000g' => 0,
            'flat_rate_eu_briefsendung_bis_50g' => 0,
            'flat_rate_eu_briefsendung_bis_500g' => 0,
            'flat_rate_eu_briefsendung_bis_1000g' => 0,
            'flat_rate_eu_p_ckchen_bis_2000g' => 0,
            'flat_rate_eu_paket_bis_5000g' => 0,
            'flat_rate_not_eu_briefsendung_bis_50g' => 0,
            'flat_rate_not_eu_briefsendung_bis_500g' => 0,
            'flat_rate_not_eu_briefsendung_bis_1000g' => 0,
            'flat_rate_not_eu_p_ckchen_bis_2000g' => 0,
            'flat_rate_not_eu_paket_bis_5000g' => 0,
            'flat_rate_versandkosten_inklusive' => 0,
            'shipping' => 0,
            'vat|ch_hotel|038_2011' => 0,
            'vat|ch_reduced|025_2011' => 0,
            'vat|ch_standard|08_2011' => 0,
            'vat|de_reduced|07_1983' => 1,
            'vat|de_standard|19_2007' => 0,
            'vat|ec_ic_rc|00' => 0,
            'vat|no_intermediate|15_2012' => 0,
            'vat|no_reduced|08_2012' => 0,
            'vat|no_standard|25_2012' => 0,
            'vat|no_zero|00_2012' => 0,
          ),
        ),
        'type' => 'commerce_price_components',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 1,
          'prefix' => '',
          'suffix' => '',
          'text_format' => 'filtered_html',
          'whole_numbers_only' => 0,
        ),
        'type' => 'commerce_price_prefix_suffix',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'commerce_product-product-commerce_stock'.
  $field_instances['commerce_product-product-commerce_stock'] = array(
    'bundle' => 'product',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_stock',
    'label' => 'Stock',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-product-commerce_stock_override'.
  $field_instances['commerce_product-product-commerce_stock_override'] = array(
    'bundle' => 'product',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => NULL,
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_stock_override',
    'label' => 'Disable stock for this product',
    'required' => FALSE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => TRUE,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_physical_weight'.
  $field_instances['commerce_product-product-field_physical_weight'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_weight_formatted',
        'weight' => 3,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'field_name' => 'field_physical_weight',
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'g',
        'unit_select_list' => 1,
      ),
      'type' => 'physical_weight_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_product_image'.
  $field_instances['commerce_product-product-field_product_image'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'product_list_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'product_full_image',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'product_list_image',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'product_list_image',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'exclude_cv' => 0,
    'field_name' => 'field_product_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_product_pdf'.
  $field_instances['commerce_product-product-field_product_pdf'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'text' => 'Download',
        ),
        'type' => 'file_download_link',
        'weight' => 8,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'text' => 'Download',
        ),
        'type' => 'file_download_link',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'exclude_cv' => 0,
    'field_name' => 'field_product_pdf',
    'label' => 'PDF',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'pdf',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 'document',
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_product_subtitle'.
  $field_instances['commerce_product-product-field_product_subtitle'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'commerce_product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_aehnliche_produkte' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'commerce_product',
    'field_name' => 'field_product_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'message-commerce_order_donation_thank_you-message_commerce_order'.
  $field_instances['message-commerce_order_donation_thank_you-message_commerce_order'] = array(
    'bundle' => 'commerce_order_donation_thank_you',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'message_notify_email_body' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'message_notify_email_subject' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'message_commerce_order',
    'label' => 'Order',
    'required' => TRUE,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Disable stock for this product');
  t('Image');
  t('MwSt.-Satz');
  t('Order');
  t('PDF');
  t('Price');
  t('Stock');
  t('Subtitle');
  t('Umsatzsteuer-Identifikationsnummer');
  t('Weight');
  t('Wenn Sie als europäisches Unternehmen außerhalb Deutschlands ihre korrekte USt-ID angeben, wird Ihnen keine MwSt. berechnet.');

  return $field_instances;
}
