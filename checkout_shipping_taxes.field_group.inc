<?php
/**
 * @file
 * checkout_shipping_taxes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function checkout_shipping_taxes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_commerce_order_note|commerce_order|commerce_order|form';
  $field_group->group_name = 'group_commerce_order_note';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bemerkungen',
    'weight' => '4',
    'children' => array(
      0 => 'field_commerce_order_bemerkungen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bemerkungen',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-commerce-order-note field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bemerkungen');

  return $field_groups;
}
