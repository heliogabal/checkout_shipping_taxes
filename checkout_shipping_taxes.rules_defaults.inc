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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "0",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "950",
            "unit" : "g"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "briefsendung_bis_1000g",
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "950",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1950",
            "unit" : "g"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_p_ckchen_bis_2000g",
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "1950",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "9650",
            "unit" : "g"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_bis_10000g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_bis_31_5kg'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_bis_31_5kg" : {
      "LABEL" : "Rate Deutschland Paket bis 31,5kg",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "9650",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "31200",
            "unit" : "g"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_bis_31_5kg",
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
      "REQUIRES" : [ "commerce_order", "rules", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "470",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "950",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "rules", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "48",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "470",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "rules", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "0",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "48",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "rules", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "950",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1.95",
            "unit" : "kg"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_p_ckchen_bis_2000g",
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "operator" : "is one of",
            "value" : "CH\\r\\nNO"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "480",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "950",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "operator" : "is one of",
            "value" : "CH\\r\\nNO"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "48",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "480",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "operator" : "is one of",
            "value" : "CH\\r\\nNO"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "0",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "48",
            "unit" : "g"
          }
        }
      ],
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "operator" : "is one of",
            "value" : "CH\\r\\nNO"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "950",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1950",
            "unit" : "g"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "not_eu_p_ckchen_bis_2000g",
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
  $items['rules_10_rabatt_dossier_und_texte'] = entity_import('rules_config', '{ "rules_10_rabatt_dossier_und_texte" : {
      "LABEL" : "30% Rabatt Dossier, Texte und S\\u00fcdlink",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom", "rabatt" ],
      "REQUIRES" : [
        "commerce_rules_extra",
        "rules",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "commerce_rules_extra_rules_condition_has_terms" : {
            "line_item" : [ "commerce-line-item" ],
            "voc_name" : "type",
            "term_id" : { "value" : { "16" : "16", "163" : "163", "164" : "164" } },
            "product_display" : "1",
            "term_operator" : "IOO"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:quantity" ],
            "op" : "\\u003E",
            "value" : "9"
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_multiply" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : "0.70",
            "component_name" : "discount",
            "round_mode" : "2"
          }
        }
      ]
    }
  }');
  $items['rules_5_rabatt_dossier_und_texte'] = entity_import('rules_config', '{ "rules_5_rabatt_dossier_und_texte" : {
      "LABEL" : "20% Rabatt Dossier und Texte und S\\u00fcdlink",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom", "rabatt" ],
      "REQUIRES" : [
        "commerce_rules_extra",
        "rules",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "commerce_rules_extra_rules_condition_has_terms" : {
            "line_item" : [ "commerce-line-item" ],
            "voc_name" : "type",
            "term_id" : { "value" : { "16" : "16", "163" : "163", "164" : "164" } },
            "product_display" : "1",
            "term_operator" : "IOO"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:quantity" ],
            "op" : "\\u003E",
            "value" : "4"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:quantity" ],
            "op" : "\\u003C",
            "value" : "10"
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_multiply" : {
            "commerce_line_item" : [ "commerce-line-item" ],
            "amount" : "0.80",
            "component_name" : "discount",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_auto_add_shipping_service'] = entity_import('rules_config', '{ "rules_auto_add_shipping_service" : {
      "LABEL" : "Auto-add shipping service",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_shipping", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:status" ], "value" : "checkout_review" } },
        { "data_is" : { "data" : [ "commerce-order:type" ], "value" : "commerce_order" } },
        { "NOT data_is_empty" : { "data" : [ "commerce-order:commerce-customer-shipping" ] } }
      ],
      "DO" : [
        { "commerce_shipping_method_collect_rates" : {
            "shipping_method_name" : "flat_rate",
            "commerce_order" : [ "commerce_order" ]
          }
        },
        { "commerce_shipping_rate_apply" : {
            "commerce_order" : [ "commerce_order" ],
            "shipping_service_name" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_check_if_the_shipping_is_to_eu'] = entity_import('rules_config', '{ "rules_check_if_the_shipping_is_to_eu" : {
      "LABEL" : "Check if the Shipping is to EU",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order" ],
      "AND" : [
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_email_suedlink_abo'] = entity_import('rules_config', '{ "rules_email_suedlink_abo" : {
      "LABEL" : "Email S\\u00fcdlink Abo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "inkota" ],
      "REQUIRES" : [ "pet", "simplenews_rules" ],
      "ON" : { "simplenews_rules_event_subscribe" : [] },
      "DO" : [
        { "pet_action_send_pet" : {
            "pet_name" : "newsletter_abo_an_die_verantwortlichen",
            "to_text" : "\\u003Crhalbmann@gmail.com\\u003E,\\u003Cversand@inkota.de\\u003E",
            "to_account" : [ "" ],
            "account_subs" : [ "" ],
            "node_subs" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_wenn_spende_eingegangen_ist'] = entity_import('rules_config', '{ "rules_email_wenn_spende_eingegangen_ist" : {
      "LABEL" : "Email wenn Spende eingegangen ist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "inkota" ],
      "REQUIRES" : [ "rules", "commerce_order", "commerce_pet", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:state" ], "value" : "completed" } },
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "donation" : "donation" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_pet_action_send_pet" : {
            "pet_name" : "donation_email",
            "to_text" : "\\u003Crhalbmann@gmail.com\\u003E,\\u003Cspenden@inkota.de\\u003E",
            "to_account" : [ "" ],
            "account_subs" : [ "commerce-order:owner" ],
            "entity_subs" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
