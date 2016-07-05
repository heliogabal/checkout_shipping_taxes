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
  $items['checkout_shipping_taxes_check_if_the_product_has_19_vat'] = entity_import('rules_config', '{ "checkout_shipping_taxes_check_if_the_product_has_19_vat" : {
      "LABEL" : "Check if the Product has 19% VAT",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "product" : { "label" : "Product", "type" : "commerce_product" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "product" ], "field" : "field_product_tax" } },
        { "data_is" : { "data" : [ "product:field-product-tax" ], "value" : "19" } }
      ]
    }
  }');
  $items['commerce_payment_bank_transfer'] = entity_import('rules_config', '{ "commerce_payment_bank_transfer" : {
      "LABEL" : "Auf Rechnung",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : {
                  "details" : {
                    "account_owner" : "INKOTA-netzwerk e.V.",
                    "account_number" : "",
                    "account_iban" : "DE06 3506 0190 1555 0000 10",
                    "bank_code_appellation" : "",
                    "bank_code" : "",
                    "account_swift" : "GENODED1DKD",
                    "account_bank" : "KD-Bank",
                    "account_branch" : ""
                  },
                  "subject_oid" : 0,
                  "policy" : ""
                }
              }
            }
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
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "rhalbmann@gmail.com",
                  "currency_code" : "EUR",
                  "allow_supported_currencies" : 0,
                  "language" : "DE",
                  "server" : "sandbox",
                  "payment_action" : "sale",
                  "ipn_logging" : "full_ipn",
                  "receiver_emails" : "",
                  "ipn_create_billing_profile" : 0,
                  "show_payment_instructions" : 0
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_rate_briefsendung_bis_50g'] = entity_import('rules_config', '{ "commerce_shipping_rate_briefsendung_bis_50g" : {
      "LABEL" : "Rate Briefsendung bis 50g",
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
        { "AND" : [
            { "NOT commerce_physical_rules_order_weight_comparison" : {
                "commerce_order" : [ "commerce_order" ],
                "operator" : "\\u003C=",
                "value" : "0",
                "unit" : "g"
              }
            },
            { "commerce_physical_rules_order_weight_comparison" : {
                "commerce_order" : [ "commerce_order" ],
                "operator" : "\\u003C=",
                "value" : "50",
                "unit" : "g"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_briefsendung_bis_50g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_rate_deutschland_paket_bis_5000g'] = entity_import('rules_config', '{ "commerce_shipping_rate_deutschland_paket_bis_5000g" : {
      "LABEL" : "Rate Deutschland Paket bis 5000g",
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
            "value" : "1.98",
            "unit" : "kg"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "5",
            "unit" : "kg"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paeckchen_bis_5kg",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_briefsendung_bis_1000g'] = entity_import('rules_config', '{ "commerce_shipping_service_briefsendung_bis_1000g" : {
      "LABEL" : "Rate Briefsendung bis 1000g",
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
            "value" : "480",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "980",
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
  $items['commerce_shipping_service_briefsendung_bis_500g'] = entity_import('rules_config', '{ "commerce_shipping_service_briefsendung_bis_500g" : {
      "LABEL" : "Rate Briefsendung bis 500g",
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
        { "AND" : [
            { "NOT commerce_physical_rules_order_weight_comparison" : {
                "commerce_order" : [ "commerce_order" ],
                "operator" : "\\u003C=",
                "value" : "51",
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
          ]
        }
      ],
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
            "value" : "980",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1.98",
            "unit" : "kg"
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
      "LABEL" : "Rate Deutschland Paket bis 10000g",
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
            "value" : "5",
            "unit" : "kg"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "9.9",
            "unit" : "kg"
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
  $items['commerce_shipping_service_eu_briefsendung_bis_1000g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_briefsendung_bis_1000g" : {
      "LABEL" : "Rate EU Briefsendung bis 1000g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "rules", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
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
            "value" : "980",
            "unit" : "g"
          }
        },
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "component_rules_check_if_the_shipping_is_to_eu" : [] }
          ]
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
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
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
            "value" : "480",
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
        { "OR" : [
            { "component_rules_check_if_the_shipping_is_to_eu" : [] },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            }
          ]
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
            "operator" : "\\u003C",
            "value" : "50",
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
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "component_rules_check_if_the_shipping_is_to_eu" : [] }
          ]
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "980",
            "unit" : "g"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "1.98",
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
  $items['commerce_shipping_service_eu_paket_bis_5000g'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_paket_bis_5000g" : {
      "LABEL" : "Rate EU Paket bis 5000g",
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
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "component_rules_check_if_the_shipping_is_to_eu" : [] }
          ]
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "1.98",
            "unit" : "kg"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "4.5",
            "unit" : "kg"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_paket_bis_5000g",
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
      "REQUIRES" : [ "rules", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Reihenfolge", "type" : "commerce_order" } },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "commerce-order" ], "type" : "commerce_recurring" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "versandkosten_inklusive",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_mwst_reduced_de'] = entity_import('rules_config', '{ "commerce_tax_rate_mwst_reduced_de" : {
      "LABEL" : "MWST_reduced_de berechnen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Position", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_unit_price" } },
        { "component_rules_check_if_the_product_has_7_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
        { "OR" : [
            { "component_rules_wenn_noch_kein_land_bekannt_ist" : [] },
            { "component_rules_check_if_the_shipping_is_to_eu" : [] }
          ]
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_divide" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : "1.07",
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "mwst_reduced_de"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Angewendete Steuer" } }
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_mwst_standard_de'] = entity_import('rules_config', '{ "commerce_tax_rate_mwst_standard_de" : {
      "LABEL" : "Calculate MwSt",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_checkout_shipping_taxes_check_if_the_product_has_19_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_unit_price" } },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_divide" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : "1.19",
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce_line_item" ],
              "tax_rate_name" : "ust"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_ust_7_shops'] = entity_import('rules_config', '{ "commerce_tax_rate_ust_7_shops" : {
      "LABEL" : "USt 7% shops berechnen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Position", "type" : "commerce_line_item" } },
      "DO" : []
    }
  }');
  $items['rules_10_rabatt_dossier_und_texte'] = entity_import('rules_config', '{ "rules_10_rabatt_dossier_und_texte" : {
      "LABEL" : "10% Rabatt Dossier und Texte",
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
            "term_id" : { "value" : { "163" : "163", "164" : "164" } },
            "product_display" : 1,
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
            "amount" : "0.90",
            "component_name" : "discount",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_5_rabatt_dossier_und_texte'] = entity_import('rules_config', '{ "rules_5_rabatt_dossier_und_texte" : {
      "LABEL" : "5% Rabatt Dossier und Texte",
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
            "term_id" : { "value" : { "163" : "163", "164" : "164" } },
            "product_display" : 1,
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
            "amount" : "0.95",
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
  $items['rules_check_if_the_product_has_7_vat'] = entity_import('rules_config', '{ "rules_check_if_the_product_has_7_vat" : {
      "LABEL" : "Check if the Product has 7% VAT",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "product" : { "label" : "Product", "type" : "commerce_product" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "product" ], "field" : "field_product_tax" } },
        { "data_is" : { "data" : [ "product:field-product-tax" ], "value" : "7" } }
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
  $items['rules_e_mail_wenn_nur_noch_50_exemplare_auf_lager'] = entity_import('rules_config', '{ "rules_e_mail_wenn_nur_noch_50_exemplare_auf_lager" : {
      "LABEL" : "E-Mail, wenn nur noch 50 Exemplare auf Lager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "stock_control" ],
      "REQUIRES" : [ "rules", "rules_i18n", "commerce_stock" ],
      "ON" : { "commerce_stock_add_to_cart_check_product" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-product:commerce-stock" ], "value" : "50" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "versand@inkota.de",
            "subject" : "INKOTA Shop: [commerce-product:title] Bestand pr\\u00fcfen",
            "message" : "SKU: [commerce-product:sku]\\r\\nTitel: [commerce-product:title]\\r\\nBestand: [commerce-product:commerce-stock-int]\\r\\n\\r\\nBestand korrigieren: [commerce-product:edit-url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_bei_spende_verschicken'] = entity_import('rules_config', '{ "rules_email_bei_spende_verschicken" : {
      "LABEL" : "Email bei Spende verschicken",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "commerce_order", "rules", "rules_i18n", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "donation" : "donation" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "data_is" : { "data" : [ "commerce-order:state" ], "value" : "completed" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "\\u003Cknoblauch@inkota.de\\u003E,\\u003Chirschel@inkota.de\\u003E",
            "subject" : "Neue webshop-Spende an INKOTA",
            "message" : "Es wurde gespendet!\\r\\n\\r\\nRechnungsnummer: [commerce-order:order-number]\\r\\nRechnungsdatum: [commerce-order:field-commerce-billy-i-date]\\r\\nBestellnummer: [commerce-order:order-id]\\r\\n\\r\\nSpender: [commerce-order:owner]\\r\\nE-Mail: [commerce-order:mail]\\r\\n\\r\\nSpender Adresse:\\r\\n[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:name_line]\\u003Cbr \\/\\u003E\\r\\n[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:organisation_name]\\u003Cbr \\/\\u003E\\r\\n[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:thoroughfare]\\u003Cbr \\/\\u003E\\r\\n[message:message-commerce-order:commerce-customer-billing:commerce-customer-address:postal_code] [message:message-commerce-order:commerce-customer-billing:commerce-customer-address:locality]\\r\\n\\r\\nBestellung: [commerce-order:commerce_line_items]",
            "from" : "[commerce-order:mail]",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_order_status_to_paid_paypal_when_checkout_complete'] = entity_import('rules_config', '{ "rules_set_order_status_to_paid_paypal_when_checkout_complete" : {
      "LABEL" : "Set Order Status to \\u0022charged\\u0022 when checkout complete",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "commerce_payment", "commerce_order", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_payment_order_balance_comparison" : { "commerce_order" : [ "commerce_order" ], "value" : "0" } }
      ],
      "DO" : [
        { "commerce_order_update_status" : {
            "commerce_order" : [ "commerce_order" ],
            "order_status" : "cardonfile_charged"
          }
        }
      ]
    }
  }');
  $items['rules_wenn_noch_kein_land_bekannt_ist'] = entity_import('rules_config', '{ "rules_wenn_noch_kein_land_bekannt_ist" : {
      "LABEL" : "Wenn noch kein Land bekannt ist",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Position", "type" : "commerce_line_item" } },
      "AND" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "commerce-line-item:order" ],
            "type" : "commerce_order",
            "bundle" : { "value" : { "commerce_order" : "commerce_order" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:order" ],
            "field" : "commerce_customer_billing"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:order:commerce-customer-billing" ],
            "field" : "commerce_customer_address"
          }
        },
        { "data_is_empty" : { "data" : [
              "commerce-line-item:order:commerce-customer-billing:commerce-customer-address:country"
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
