<?php
/**
 * @file
 * checkout_shipping_taxes.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function checkout_shipping_taxes_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_bank_transfer'] = entity_import('rules_config', '{ "commerce_payment_bank_transfer" : {
      "LABEL" : "Bank Transfer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "bank_transfer"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_ec'] = entity_import('rules_config', '{ "commerce_payment_paypal_ec" : {
      "LABEL" : "PayPal Express Checkout",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_ec" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "paypal_ec"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_wps'] = entity_import('rules_config', '{ "commerce_payment_paypal_wps" : {
      "LABEL" : "PayPal WPS",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "paypal_wps"
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_briefsendung_bis_1000g'] = entity_import('rules_config', '{ "commerce_shipping_service_briefsendung_bis_1000g" : {
      "LABEL" : "Rate Deutschland Briefsendung bis 1000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "briefsendung_bis_1000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_briefsendung_bis_500g'] = entity_import('rules_config', '{ "commerce_shipping_service_briefsendung_bis_500g" : {
      "LABEL" : "Rate Deutschland Briefsendung bis 500g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "briefsendung_bis_500g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_briefsendung_bis_50g'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_briefsendung_bis_50g" : {
      "LABEL" : "Rate Deutschland Briefsendung bis 50g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_briefsendung_bis_50g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_p_ckchen_bis_2000g'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_p_ckchen_bis_2000g" : {
      "LABEL" : "Rate Deutschland P\\u00e4ckchen bis 2000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_p_ckchen_bis_2000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paeckchen_bis_5kg'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paeckchen_bis_5kg" : {
      "LABEL" : "Rate Deutschland Paket bis 5kg",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paeckchen_bis_5kg",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_bis_10000g'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_bis_10000g" : {
      "LABEL" : "Rate Deutschland Paket bis 10kg",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_bis_10000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_briefsendung_bis_1000g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_briefsendung_bis_1000g" : {
      "LABEL" : "Rate EU Briefsendung bis 1000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_briefsendung_bis_1000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_briefsendung_bis_500g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_briefsendung_bis_500g" : {
      "LABEL" : "Rate EU Briefsendung bis 500g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_briefsendung_bis_500g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_briefsendung_bis_50g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_briefsendung_bis_50g" : {
      "LABEL" : "Rate EU Briefsendung bis 50g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_briefsendung_bis_50g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_p_ckchen_bis_2000g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_p_ckchen_bis_2000g" : {
      "LABEL" : "Rate EU P\\u00e4ckchen bis 2000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_p_ckchen_bis_2000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_paket_bis_5000g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_paket_bis_5000g" : {
      "LABEL" : "Rate EU Paket bis 5000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_paket_bis_5000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_not_eu_briefsendung_bis_1000g'] = entity_import('rules_config', '{ "commerce_shipping_service_not_eu_briefsendung_bis_1000g" : {
      "LABEL" : "Rate Not EU Briefsendung bis 1000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_briefsendung_bis_1000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_not_eu_briefsendung_bis_500g'] = entity_import('rules_config', '{ "commerce_shipping_service_not_eu_briefsendung_bis_500g" : {
      "LABEL" : "Rate Not EU Briefsendung bis 500g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_briefsendung_bis_500g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_not_eu_briefsendung_bis_50g'] = entity_import('rules_config', '{ "commerce_shipping_service_not_eu_briefsendung_bis_50g" : {
      "LABEL" : "Rate Not EU Briefsendung bis 50g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_briefsendung_bis_50g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_not_eu_p_ckchen_bis_2000g'] = entity_import('rules_config', '{ "commerce_shipping_service_not_eu_p_ckchen_bis_2000g" : {
      "LABEL" : "Rate Not EU P\\u00e4ckchen bis 2000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_p_ckchen_bis_2000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_not_eu_paket_bis_5000g'] = entity_import('rules_config', '{ "commerce_shipping_service_not_eu_paket_bis_5000g" : {
      "LABEL" : "Rate Not EU Paket bis 5000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_paket_bis_5000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_versandkosten_inklusive'] = entity_import('rules_config', '{ "commerce_shipping_service_versandkosten_inklusive" : {
      "LABEL" : "Rate Versandkosten inklusive",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Reihenfolge" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "versandkosten_inklusive",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
