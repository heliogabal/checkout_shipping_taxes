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
            "value" : "1.98",
            "unit" : "kg"
          }
        },
        { "commerce_physical_rules_order_weight_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C=",
            "value" : "9.5",
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
        { "component_rules_check_if_the_product_has_19_vat" : [] },
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
  $items['commerce_tax_rate_remove_ust_7_for_non_eu_clients'] = entity_import('rules_config', '{ "commerce_tax_rate_remove_ust_7_for_non_eu_clients" : {
      "LABEL" : "Remove USt 7% for Non-EU clients berechnen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Position", "type" : "commerce_line_item" } },
      "DO" : []
    }
  }');
  $items['commerce_tax_rate_remove_ust_shop_7_for_non_eu_clients'] = entity_import('rules_config', '{ "commerce_tax_rate_remove_ust_shop_7_for_non_eu_clients" : {
      "LABEL" : "Remove USt SHOP 7% for Non-EU clients berechnen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Position", "type" : "commerce_line_item" } },
      "DO" : []
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
  $items['rules_check_if_no_shipping_country'] = entity_import('rules_config', '{ "rules_check_if_no_shipping_country" : {
      "LABEL" : "Check if no shipping country",
      "PLUGIN" : "or",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "OR" : [ { "data_is_empty" : { "data" : [ "site:current-cart-order" ] } } ]
    }
  }');
  $items['rules_check_if_order_contains_only_non_shippable_products'] = entity_import('rules_config', '{ "rules_check_if_order_contains_only_non_shippable_products" : {
      "LABEL" : "Check if order contains only non-shippable products",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "shipping" ],
      "REQUIRES" : [ "commerce_order" ],
      "USES VARIABLES" : { "order" : { "label" : "Order", "type" : "commerce_order" } },
      "AND" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "order" ],
            "product_type" : { "value" : { "recurring" : "recurring" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "NOT commerce_order_contains_product_type" : {
            "commerce_order" : [ "order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "operator" : "\\u003E=",
            "value" : "1"
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
      "REQUIRES" : [ "rules", "commerce_stock" ],
      "ON" : { "commerce_stock_add_to_cart_check_product" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-product:commerce-stock" ], "value" : "50" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "rhalbmann@gmail.com",
            "subject" : "INKOTA Shop: Bestand pr\\u00fcfen",
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
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "donation" : "donation" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "rhalbmann@gmail.com",
            "subject" : "Spende an INKOTA",
            "message" : "Es wurde gespendet!\\r\\n\\r\\nBestellnummer: [commerce-order:order-number]\\r\\nSpender: [commerce-order:owner]\\r\\nE-Mail: [commerce-order:mail]\\r\\n\\r\\nAdresse: [commerce-order:commerce_customer_billing]",
            "from" : "[commerce-order:mail]",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_wenn_bestand_50_expemplare'] = entity_import('rules_config', '{ "rules_email_wenn_bestand_50_expemplare" : {
      "LABEL" : "Email, wenn Bestand 50 Expemplare",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "process_checkout_page" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "site:current-cart-order:commerce-line-items:0:quantity" ],
            "value" : "50"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "rhalbmann@gmail.com",
            "subject" : "INKOTA Shop: Bestand pr\\u00fcfen",
            "message" : "SKU: [commerce-product:sku]\\r\\nTitel: [commerce-product:title]\\r\\nBestand: [commerce-product:commerce-stock-int]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_login_redirect_for_non_administrators'] = entity_import('rules_config', '{ "rules_login_redirect_for_non_administrators" : {
      "LABEL" : "Login redirect for non-administrators",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Login redirect" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "2" : "2", "5" : "5" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  $items['rules_remove_vat_for_eu'] = entity_import('rules_config', '{ "rules_remove_vat_for_eu" : {
      "LABEL" : "Remove VAT for EU",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "rules",
        "commerce_order",
        "commerce_tax",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "AND" : [
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
            { "NOT data_is_empty" : { "data" : [
                  "commerce-line-item:order:commerce-customer-billing:commerce-customer-address:country"
                ]
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "address_field" : "commerce_customer_billing|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_tax_remove_taxes" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "increase_base_price" : 0
          }
        }
      ]
    }
  }');
  $items['rules_set_body_class_on_checkout_complete'] = entity_import('rules_config', '{ "rules_set_body_class_on_checkout_complete" : {
      "LABEL" : "Check if order contains donation",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "commerce_order" ],
      "USES VARIABLES" : { "order" : { "label" : "Bestellung", "type" : "commerce_order" } },
      "AND" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_spendenberag_als_preis_setzen'] = entity_import('rules_config', '{ "rules_spendenberag_als_preis_setzen" : {
      "LABEL" : "Spendenberag als Preis setzen",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "2",
      "OWNER" : "rules",
      "TAGS" : [ "commerce donate" ],
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item" ],
            "field" : "commerce_donate_amount"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:commerce-donate-amount" ],
              "op" : "*",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "donation_in_euro" : "Spendenbetrag in Euro" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "donation-in-euro" ],
            "component_name" : "fee",
            "round_mode" : "0"
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
  $items['rules_wenn_noch_keine_email_adresse_bekannt_ist'] = entity_import('rules_config', '{ "rules_wenn_noch_keine_email_adresse_bekannt_ist" : {
      "LABEL" : "Wenn noch keine Email-Adresse bekannt ist",
      "PLUGIN" : "or",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "order" : { "label" : "Bestellung", "type" : "commerce_order" } },
      "OR" : [
        { "entity_has_field" : {
            "entity" : [ "site:current-cart-order" ],
            "field" : "commerce_customer_shipping"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "site:current-cart-order" ],
            "field" : "commerce_customer_address"
          }
        },
        { "data_is_empty" : { "data" : [ "site:current-cart-order:mail" ] } }
      ]
    }
  }');
  return $items;
}
