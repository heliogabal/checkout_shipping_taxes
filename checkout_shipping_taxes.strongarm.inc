<?php
/**
 * @file
 * checkout_shipping_taxes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function checkout_shipping_taxes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cep_tos_extra_pane__node__1264';
  $strongarm->value = 0;
  $export['cep_tos_extra_pane__node__1264'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cep_tos_position_extra_pane__node__1264';
  $strongarm->value = 'below';
  $export['cep_tos_position_extra_pane__node__1264'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cep_tos_required_extra_pane__node__1264';
  $strongarm->value = 1;
  $export['cep_tos_required_extra_pane__node__1264'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_default_field_billing';
  $strongarm->value = 'commerce_customer_address*thoroughfare';
  $export['commerce_ae_default_field_billing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_default_field_eu_vat_rc';
  $strongarm->value = '';
  $export['commerce_ae_default_field_eu_vat_rc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_default_field_shipping';
  $strongarm->value = 'commerce_customer_address*thoroughfare';
  $export['commerce_ae_default_field_shipping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_profile_show_billing';
  $strongarm->value = 1;
  $export['commerce_ae_profile_show_billing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_profile_show_eu_vat_rc';
  $strongarm->value = 0;
  $export['commerce_ae_profile_show_eu_vat_rc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ae_profile_show_shipping';
  $strongarm->value = 0;
  $export['commerce_ae_profile_show_shipping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_block';
  $strongarm->value = '127';
  $export['commerce_ajax_cart_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_content_name';
  $strongarm->value = '.l-main';
  $export['commerce_ajax_cart_content_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_fly2cart';
  $strongarm->value = 1;
  $export['commerce_ajax_cart_fly2cart'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_fly2cart_parent';
  $strongarm->value = '.views-fluid-grid-item';
  $export['commerce_ajax_cart_fly2cart_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_position';
  $strongarm->value = array(
    'my' => 'left top',
    'at' => 'left top',
    'collision' => 'flip',
  );
  $export['commerce_ajax_cart_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_text';
  $strongarm->value = 'Ihr Warenkorb ist leer';
  $export['commerce_ajax_cart_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_use_dialog';
  $strongarm->value = 0;
  $export['commerce_ajax_cart_use_dialog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_ajax_cart_view';
  $strongarm->value = 'shopping_cart.block';
  $export['commerce_ajax_cart_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_auto_invoice';
  $strongarm->value = 1;
  $export['commerce_billy_auto_invoice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_invoice_nr_method';
  $strongarm->value = 'yearly';
  $export['commerce_billy_invoice_nr_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_invoice_nr_pattern';
  $strongarm->value = '[date:custom:Y]-{id}';
  $export['commerce_billy_invoice_nr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_attach_pdf_invoice';
  $strongarm->value = 1;
  $export['commerce_billy_mail_attach_pdf_invoice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_bcc';
  $strongarm->value = '';
  $export['commerce_billy_mail_bcc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_body';
  $strongarm->value = '<p>Hallo [commerce-order:commerce_extra_tokens_order_owner],</p>

<p>wir haben Ihre Bestellung bearbeitet. Sie ist nun zum Versand bereit.<br />

Im Anhang finden Sie die Rechnung zu Ihrer Bestellung. Bitte überweisen Sie die Rechnungssumme von <b>[commerce-order:commerce_extra_tokens_order_total_sum]</b> unter Angabe der Rechnungsnummer <b>[commerce-order:order-number]</b> innerhalb von 14 Tagen auf unser Konto:</p>

<p>Kontoinhaber: INKOTA-netzwerk e.V.<br />
IBAN: DE06350601901555000010<br />
BIC: GENODED1DKD<br />
Bankinstitut: KD-Bank</p>

<p>Vielen Dank!</p>

<p>Viele Grüße<br />
Ihr INKOTA-Team</p>
- - -

<p>INKOTA-netzwerk e.V.<br />
Chrysanthemenstraße 1-3<br />
10407 Berlin</p>

<p>E-Mail: versand@inkota.de<br />
Tel.: +49 (0)30 420 8202-25<br />
Fax: +49 (0)30 420 8202-10<br />
www.inkota.de</p>';
  $export['commerce_billy_mail_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_cc';
  $strongarm->value = '';
  $export['commerce_billy_mail_cc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_from';
  $strongarm->value = 'versand@inkota.de';
  $export['commerce_billy_mail_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_plaintext';
  $strongarm->value = 0;
  $export['commerce_billy_mail_plaintext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_subject';
  $strongarm->value = 'Rechnung zu Ihrer Bestellung [commerce-order:order-number] im [site:name]';
  $export['commerce_billy_mail_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_mail_use_theme_registry_workaround_theme_items';
  $strongarm->value = array(
    'commerce_order__commerce_order__pdf' => 'commerce_order__commerce_order__pdf',
  );
  $export['commerce_billy_mail_use_theme_registry_workaround_theme_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_pdf_css_files';
  $strongarm->value = array(
    0 => 'profiles/inkota_shop/themes/inkshop/css/pdf.css',
  );
  $export['commerce_billy_pdf_css_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_pdf_logo';
  $strongarm->value = 'profiles/inkota_shop/themes/inkshop/images/rechnung_sidebar.png';
  $export['commerce_billy_pdf_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_pdf_order_statuses';
  $strongarm->value = array(
    'canceled' => 'canceled',
    'completed' => 'completed',
    'invoiced' => 'invoiced',
    'mahnung_1' => 'mahnung_1',
    'mahnung_2' => 'mahnung_2',
    'gesperrt' => 'gesperrt',
  );
  $export['commerce_billy_pdf_order_statuses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_billy_pdf_text_settings';
  $strongarm->value = array(
    'invoice_header' => '<div class="address">INKOTA-netzwerk e.V. • Chrysanthemenstraße 1-3 • 10407 Berlin</div>
',
    'invoice_location' => 'Datum: Berlin',
    'invoice_date_format' => 'd.m.Y',
    'invoice_text' => '<p>Vielen Dank für Ihre Bestellung. <br/>Bitte überweisen Sie den Rechnungsbetrag innerhalb von 14 Tagen unter Angabe <strong><u>Ihres Namens und unserer Rechnungsnummer</u></strong> auf unser Konto: </p><p>IBAN DE06 3506 0190 1555 0000 10<br />BIC:
GENODED1DKD <br />Bank: KD-Bank.</p>
<p>
Mit freundlichen Grüßen<br />
Dorothée Decker<br />
i.A. INKOTA-netzwerk e.V.
</p>
<p>&nbsp;</p>

',
    'invoice_footer' => '<p>P.S.: Eine unabhängige Stimme braucht eine unabhängige Finanzierung! <br />Unterstützen Sie unsere Arbeit dauerhaft – mit einer Fördermitgliedschaft: <br /><a href="https://www.inkota.de/foerdermitgliedschaft">www.inkota.de/foerdermitgliedschaft</a></p>',
  );
  $export['commerce_billy_pdf_text_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_contents_pane_view';
  $strongarm->value = 'commerce_cart_summary|default';
  $export['commerce_cart_contents_pane_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_refresh_force';
  $strongarm->value = 1;
  $export['commerce_cart_refresh_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_refresh_frequency';
  $strongarm->value = '10';
  $export['commerce_cart_refresh_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_cart_refresh_mode';
  $strongarm->value = 'owner_only';
  $export['commerce_cart_refresh_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_completion_message';
  $strongarm->value = array(
    'value' => '<p>Herzlichen Dank für Ihre Bestellung!</p><p>Eine E-Mail zur Bestätigung Ihrer Bestellung Nr. [commerce-order:order-number] haben wir soeben an Sie versendet. Wenn dies Ihre erste Bestellung war, erhalten Sie außerdem eine E-Mail mit Ihren Anmeldedaten für Ihr Benutzerkonto beim INKOTA-Webshop.</p><p>Viele Grüße<br />Ihr INKOTA-Team</p><p><br />Was wollen Sie als nächstes tun?</p><p><a href="node/1422">Südlink-Abo bestellen</a></p><p><a href="/">Zurück zur Startseite des INKOTA-Webshops</a></p><p><a href="https://inkota.de">Zurück zur INKOTA-Webseite</a></p>',
    'format' => 'filtered_html',
  );
  $export['commerce_checkout_completion_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_block_pages';
  $strongarm->value = array();
  $export['commerce_checkout_progress_block_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_cart';
  $strongarm->value = 1;
  $export['commerce_checkout_progress_cart'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_link';
  $strongarm->value = 1;
  $export['commerce_checkout_progress_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_list_type';
  $strongarm->value = 'ol';
  $export['commerce_checkout_progress_list_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_run_update_7103';
  $strongarm->value = '1';
  $export['commerce_checkout_run_update_7103'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_component_hidden_settings';
  $strongarm->value = array(
    'base_price' => array(
      'hide' => 0,
    ),
    'shipping' => array(
      'hide' => 0,
    ),
    'tax|remove_ust_7_for_non_eu_clients' => array(
      'hide' => 0,
    ),
    'tax|ust_7_shops' => array(
      'hide' => 0,
    ),
    'tax|remove_ust_shop_7_for_non_eu_clients' => array(
      'hide' => 0,
    ),
    'flat_rate_eu_paket_bis_5000g' => array(
      'hide' => 0,
    ),
    'flat_rate_versandkosten_inklusive' => array(
      'hide' => 0,
    ),
    'flat_rate_eu_briefsendung_bis_50g' => array(
      'hide' => 0,
    ),
    'flat_rate_eu_p_ckchen_bis_2000g' => array(
      'hide' => 0,
    ),
    'flat_rate_deutschland_p_ckchen_bis_2000g' => array(
      'hide' => 0,
    ),
    'flat_rate_briefsendung_bis_500g' => array(
      'hide' => 0,
    ),
    'flat_rate_briefsendung_bis_1000g' => array(
      'hide' => 0,
    ),
    'flat_rate_deutschland_briefsendung_bis_50g' => array(
      'hide' => 0,
    ),
    'flat_rate_deutschland_paeckchen_bis_5kg' => array(
      'hide' => 0,
    ),
    'flat_rate_eu_briefsendung_bis_1000g' => array(
      'hide' => 0,
    ),
    'flat_rate_deutschland_paket_bis_10000g' => array(
      'hide' => 0,
    ),
    'flat_rate_eu_briefsendung_bis_500g' => array(
      'hide' => 0,
    ),
    'tax|mwst_reduced_de' => array(
      'hide' => 0,
    ),
    'vat|no_reduced|08_2012' => array(
      'hide' => 0,
    ),
    'vat|no_standard|25_2012' => array(
      'hide' => 0,
    ),
    'vat|no_intermediate|15_2012' => array(
      'hide' => 0,
    ),
    'flat_rate_not_eu_briefsendung_bis_50g' => array(
      'hide' => 0,
    ),
    'flat_rate_not_eu_briefsendung_bis_1000g' => array(
      'hide' => 0,
    ),
    'flat_rate_not_eu_briefsendung_bis_500g' => array(
      'hide' => 0,
    ),
    'flat_rate_not_eu_paket_bis_5000g' => array(
      'hide' => 0,
    ),
    'flat_rate_not_eu_p_ckchen_bis_2000g' => array(
      'hide' => 0,
    ),
    'vat|ch_reduced|025_2011' => array(
      'hide' => 0,
    ),
    'vat|ch_hotel|038_2011' => array(
      'hide' => 0,
    ),
    'vat|ch_standard|08_2011' => array(
      'hide' => 0,
    ),
    'vat|ec_ic_rc|00' => array(
      'hide' => 0,
    ),
    'vat|no_zero|00_2012' => array(
      'hide' => 0,
    ),
    'vat|de_standard|19_2007' => array(
      'hide' => 0,
    ),
    'vat|de_reduced|07_1983' => array(
      'hide' => 0,
    ),
    'discount' => array(
      'hide' => 0,
    ),
    'fee' => array(
      'hide' => 0,
    ),
  );
  $export['commerce_component_hidden_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_component_price_order';
  $strongarm->value = array(
    'base_price' => array(
      'weight' => '-50',
    ),
    'shipping' => array(
      'weight' => '-49',
    ),
    'tax|remove_ust_7_for_non_eu_clients' => array(
      'weight' => '-48',
    ),
    'tax|ust_7_shops' => array(
      'weight' => '-47',
    ),
    'tax|remove_ust_shop_7_for_non_eu_clients' => array(
      'weight' => '-46',
    ),
    'flat_rate_eu_paket_bis_5000g' => array(
      'weight' => '-45',
    ),
    'flat_rate_versandkosten_inklusive' => array(
      'weight' => '-44',
    ),
    'flat_rate_eu_briefsendung_bis_50g' => array(
      'weight' => '-43',
    ),
    'flat_rate_eu_p_ckchen_bis_2000g' => array(
      'weight' => '-42',
    ),
    'flat_rate_deutschland_p_ckchen_bis_2000g' => array(
      'weight' => '-41',
    ),
    'flat_rate_briefsendung_bis_500g' => array(
      'weight' => '-40',
    ),
    'flat_rate_briefsendung_bis_1000g' => array(
      'weight' => '-39',
    ),
    'flat_rate_deutschland_briefsendung_bis_50g' => array(
      'weight' => '-38',
    ),
    'flat_rate_deutschland_paeckchen_bis_5kg' => array(
      'weight' => '-37',
    ),
    'flat_rate_eu_briefsendung_bis_1000g' => array(
      'weight' => '-36',
    ),
    'flat_rate_deutschland_paket_bis_10000g' => array(
      'weight' => '-35',
    ),
    'flat_rate_eu_briefsendung_bis_500g' => array(
      'weight' => '-34',
    ),
    'tax|mwst_reduced_de' => array(
      'weight' => '-33',
    ),
    'vat|no_reduced|08_2012' => array(
      'weight' => '-32',
    ),
    'vat|no_standard|25_2012' => array(
      'weight' => '-31',
    ),
    'vat|no_intermediate|15_2012' => array(
      'weight' => '-30',
    ),
    'flat_rate_not_eu_briefsendung_bis_50g' => array(
      'weight' => '-29',
    ),
    'flat_rate_not_eu_briefsendung_bis_1000g' => array(
      'weight' => '-28',
    ),
    'flat_rate_not_eu_briefsendung_bis_500g' => array(
      'weight' => '-27',
    ),
    'flat_rate_not_eu_paket_bis_5000g' => array(
      'weight' => '-26',
    ),
    'flat_rate_not_eu_p_ckchen_bis_2000g' => array(
      'weight' => '-25',
    ),
    'vat|ch_reduced|025_2011' => array(
      'weight' => '-24',
    ),
    'vat|ch_hotel|038_2011' => array(
      'weight' => '-23',
    ),
    'vat|ch_standard|08_2011' => array(
      'weight' => '-22',
    ),
    'vat|ec_ic_rc|00' => array(
      'weight' => '-21',
    ),
    'vat|no_zero|00_2012' => array(
      'weight' => '-20',
    ),
    'discount' => array(
      'weight' => '-19',
    ),
    'vat|de_standard|19_2007' => array(
      'weight' => '-18',
    ),
    'vat|de_reduced|07_1983' => array(
      'weight' => '-17',
    ),
    'fee' => array(
      'weight' => '-16',
    ),
  );
  $export['commerce_component_price_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_addressbook';
  $strongarm->value = 1;
  $export['commerce_customer_profile_billing_addressbook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_profile_copy';
  $strongarm->value = 1;
  $export['commerce_customer_profile_billing_profile_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_profile_copy_default';
  $strongarm->value = 1;
  $export['commerce_customer_profile_billing_profile_copy_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_profile_copy_source';
  $strongarm->value = 'shipping';
  $export['commerce_customer_profile_billing_profile_copy_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_eu_vat_rc_addressbook';
  $strongarm->value = 0;
  $export['commerce_customer_profile_eu_vat_rc_addressbook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_eu_vat_rc_field';
  $strongarm->value = 'commerce_customer_eu_vat_rc';
  $export['commerce_customer_profile_eu_vat_rc_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_eu_vat_rc_profile_copy';
  $strongarm->value = 0;
  $export['commerce_customer_profile_eu_vat_rc_profile_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_eu_vat_rc_profile_copy_default';
  $strongarm->value = 1;
  $export['commerce_customer_profile_eu_vat_rc_profile_copy_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_eu_vat_rc_profile_copy_source';
  $strongarm->value = 'billing';
  $export['commerce_customer_profile_eu_vat_rc_profile_copy_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_addressbook';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_addressbook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_field';
  $strongarm->value = 'commerce_customer_shipping';
  $export['commerce_customer_profile_shipping_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy';
  $strongarm->value = 0;
  $export['commerce_customer_profile_shipping_profile_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_default';
  $strongarm->value = 0;
  $export['commerce_customer_profile_shipping_profile_copy_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_source';
  $strongarm->value = 'billing';
  $export['commerce_customer_profile_shipping_profile_copy_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_default_currency';
  $strongarm->value = 'EUR';
  $export['commerce_default_currency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_donate_amounts';
  $strongarm->value = '1|1€
5|5€
10|10€
20|20€';
  $export['commerce_donate_checkout_pane_donate_amounts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_override_options';
  $strongarm->value = 1;
  $export['commerce_donate_checkout_pane_override_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_product_id';
  $strongarm->value = '707';
  $export['commerce_donate_checkout_pane_product_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_title';
  $strongarm->value = 'Spende';
  $export['commerce_donate_checkout_pane_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_enabled_currencies';
  $strongarm->value = array(
    'EUR' => 'EUR',
    'AED' => 0,
    'AFN' => 0,
    'ANG' => 0,
    'AOA' => 0,
    'ARM' => 0,
    'ARS' => 0,
    'AUD' => 0,
    'AWG' => 0,
    'AZN' => 0,
    'BAM' => 0,
    'BBD' => 0,
    'BDT' => 0,
    'BGN' => 0,
    'BHD' => 0,
    'BIF' => 0,
    'BMD' => 0,
    'BND' => 0,
    'BOB' => 0,
    'BRL' => 0,
    'BSD' => 0,
    'BTN' => 0,
    'BWP' => 0,
    'BYR' => 0,
    'BZD' => 0,
    'CAD' => 0,
    'CDF' => 0,
    'CHF' => 0,
    'CLP' => 0,
    'CNY' => 0,
    'COP' => 0,
    'CRC' => 0,
    'CUC' => 0,
    'CUP' => 0,
    'CVE' => 0,
    'CZK' => 0,
    'DJF' => 0,
    'DKK' => 0,
    'DOP' => 0,
    'DZD' => 0,
    'EEK' => 0,
    'EGP' => 0,
    'ERN' => 0,
    'ETB' => 0,
    'FJD' => 0,
    'FKP' => 0,
    'GBP' => 0,
    'GHS' => 0,
    'GIP' => 0,
    'GMD' => 0,
    'GNF' => 0,
    'GTQ' => 0,
    'GYD' => 0,
    'HKD' => 0,
    'HNL' => 0,
    'HRK' => 0,
    'HTG' => 0,
    'HUF' => 0,
    'IDR' => 0,
    'ILS' => 0,
    'INR' => 0,
    'IRR' => 0,
    'ISK' => 0,
    'JMD' => 0,
    'JOD' => 0,
    'JPY' => 0,
    'KES' => 0,
    'KGS' => 0,
    'KMF' => 0,
    'KRW' => 0,
    'KWD' => 0,
    'KYD' => 0,
    'KZT' => 0,
    'LAK' => 0,
    'LBP' => 0,
    'LKR' => 0,
    'LRD' => 0,
    'LSL' => 0,
    'LTL' => 0,
    'LVL' => 0,
    'LYD' => 0,
    'MAD' => 0,
    'MDL' => 0,
    'MKD' => 0,
    'MMK' => 0,
    'MNT' => 0,
    'MOP' => 0,
    'MRO' => 0,
    'MTP' => 0,
    'MUR' => 0,
    'MXN' => 0,
    'MYR' => 0,
    'MZN' => 0,
    'NAD' => 0,
    'NGN' => 0,
    'NIO' => 0,
    'NOK' => 0,
    'NPR' => 0,
    'NZD' => 0,
    'PAB' => 0,
    'PEN' => 0,
    'PGK' => 0,
    'PHP' => 0,
    'PKR' => 0,
    'PLN' => 0,
    'PYG' => 0,
    'QAR' => 0,
    'RHD' => 0,
    'RON' => 0,
    'RSD' => 0,
    'RUB' => 0,
    'SAR' => 0,
    'SBD' => 0,
    'SCR' => 0,
    'SDD' => 0,
    'SEK' => 0,
    'SGD' => 0,
    'SHP' => 0,
    'SLL' => 0,
    'SOS' => 0,
    'SRD' => 0,
    'SRG' => 0,
    'STD' => 0,
    'SYP' => 0,
    'SZL' => 0,
    'THB' => 0,
    'TND' => 0,
    'TOP' => 0,
    'TRY' => 0,
    'TTD' => 0,
    'TWD' => 0,
    'TZS' => 0,
    'UAH' => 0,
    'UGX' => 0,
    'USD' => 0,
    'UYU' => 0,
    'VEF' => 0,
    'VND' => 0,
    'VUV' => 0,
    'WST' => 0,
    'XAF' => 0,
    'XCD' => 0,
    'XOF' => 0,
    'XPF' => 0,
    'YER' => 0,
    'ZAR' => 0,
    'ZMK' => 0,
  );
  $export['commerce_enabled_currencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_auth_display';
  $strongarm->value = 1;
  $export['commerce_order_account_pane_auth_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_mail_double_entry';
  $strongarm->value = 0;
  $export['commerce_order_account_pane_mail_double_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_apply_pricing_rules_link';
  $strongarm->value = 1;
  $export['commerce_order_apply_pricing_rules_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_auto_revision';
  $strongarm->value = 1;
  $export['commerce_order_auto_revision'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_help_text';
  $strongarm->value = '';
  $export['commerce_order_help_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_simulate_checkout_link';
  $strongarm->value = 1;
  $export['commerce_order_simulate_checkout_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_payment_pane_no_method_behavior';
  $strongarm->value = 'message_event';
  $export['commerce_payment_pane_no_method_behavior'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_payment_pane_require_method';
  $strongarm->value = 0;
  $export['commerce_payment_pane_require_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_shipping_pane_require_service';
  $strongarm->value = 0;
  $export['commerce_shipping_pane_require_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_shipping_recalculate_services';
  $strongarm->value = 0;
  $export['commerce_shipping_recalculate_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_simplenews_checkout_hide_subscribed';
  $strongarm->value = 1;
  $export['commerce_simplenews_checkout_hide_subscribed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_simplenews_checkout_message';
  $strongarm->value = array(
    'value' => '<p>Bestellen Sie den INKOTA Newsletter gleich mit und bleiben Sie auf dem Laufenden. Sie können den Newsletter jederzeit wieder abbestellen.</p>',
    'format' => 'filtered_html',
  );
  $export['commerce_simplenews_checkout_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_vat_direction';
  $strongarm->value = 'reverse';
  $export['commerce_vat_direction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__commerce_order_donation_thank_you';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__commerce_order_donation_thank_you'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__commerce_order_order_confirmation_versand';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__commerce_order_order_confirmation_versand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__commerce_order_summary';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_message__commerce_order_summary'] = $strongarm;

  return $export;
}
