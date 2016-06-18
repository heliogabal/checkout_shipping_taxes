<?php
/**
 * @file
 * checkout_shipping_taxes.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function checkout_shipping_taxes_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Thank you for donating';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'checkout_spenden_message';
  $fe_block_boxes->body = '<p>Vielen Dank für Ihre Spende!</p>';

  $export['checkout_spenden_message'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontoinfo Checkout';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'kontoinfo';
  $fe_block_boxes->body = '<p><strong>Kontoinhaber</strong>:<br />INKOTA-netzwerk e.V.<br /><strong>IBAN</strong>:<br />DE06 3506 0190 1555 0000 10<br /><strong>BIC</strong>:<br />GENODED1DKD<br /><strong>Bankinstitut</strong>:<br />KD-Bank</p>';

  $export['kontoinfo'] = $fe_block_boxes;

  return $export;
}
