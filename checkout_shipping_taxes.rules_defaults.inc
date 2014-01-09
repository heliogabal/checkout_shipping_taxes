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
  $items['commerce_shipping_service_deutsche_post_1kg_international_'] = entity_import('rules_config', '{ "commerce_shipping_service_deutsche_post_1kg_international_" : {
      "LABEL" : "Rate Deutsche Post - 1kg International - No tracking",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "0.4" } },
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "0.3501" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutsche_post_1kg_international_",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_p_ckchen'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_p_ckchen" : {
      "LABEL" : "Rate Deutschland P\\u00e4ckchen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "1.3" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_p_ckchen",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_1'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_1" : {
      "LABEL" : "Rate Deutschland Paket 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_1",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_2'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_2" : {
      "LABEL" : "Rate Deutschland Paket 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_2",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_3'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_3" : {
      "LABEL" : "Rate Deutschland Paket 3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_3",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_deutschland_paket_4'] = entity_import('rules_config', '{ "commerce_shipping_service_deutschland_paket_4" : {
      "LABEL" : "Rate Deutschland Paket 4",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "23" } },
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "deutschland_paket_4",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_p_ckchen'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_p_ckchen" : {
      "LABEL" : "Rate EU P\\u00e4ckchen",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "1" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_p_ckchen",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_parcel_with_tracking_1'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_parcel_with_tracking_1" : {
      "LABEL" : "Rate EU Parcel with tracking 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "1" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_parcel_with_tracking_1",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_parcel_with_tracking_2'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_parcel_with_tracking_2" : {
      "LABEL" : "Rate EU Parcel with tracking 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_parcel_with_tracking_2",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_parcel_with_tracking_3'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_parcel_with_tracking_3" : {
      "LABEL" : "Rate EU Parcel with tracking 3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "15" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_parcel_with_tracking_3",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_eu_parcel_with_tracking_4'] = entity_import('rules_config', '{ "commerce_shipping_service_eu_parcel_with_tracking_4" : {
      "LABEL" : "Rate EU Parcel with tracking 4",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "15" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "25" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "eu_parcel_with_tracking_4",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_europe_outside_eu_1'] = entity_import('rules_config', '{ "commerce_shipping_service_europe_outside_eu_1" : {
      "LABEL" : "Rate Europe outside EU 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "europe_outside_eu_1",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_europe_outside_eu_2'] = entity_import('rules_config', '{ "commerce_shipping_service_europe_outside_eu_2" : {
      "LABEL" : "Rate Europe outside EU 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "europe_outside_eu_2",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_europe_outside_eu_3'] = entity_import('rules_config', '{ "commerce_shipping_service_europe_outside_eu_3" : {
      "LABEL" : "Rate Europe outside EU 3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "europe_outside_eu_3",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_europe_outside_eu_4'] = entity_import('rules_config', '{ "commerce_shipping_service_europe_outside_eu_4" : {
      "LABEL" : "Rate Europe outside EU 4",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "25" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "europe_outside_eu_4",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_freie_selbstabholung'] = entity_import('rules_config', '{ "commerce_shipping_service_freie_selbstabholung" : {
      "LABEL" : "Rate Freie Selbstabholung",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
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
                "address_component" : "locality",
                "value" : "berlin"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "locality",
                "value" : "Berlin"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "locality",
                "value" : "BERLIN"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "freie_selbstabholung",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_global_small_parcel'] = entity_import('rules_config', '{ "commerce_shipping_service_global_small_parcel" : {
      "LABEL" : "Rate Global Small Parcel",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "1" } },
        { "NOT OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "global_small_parcel",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_gro_brief_international_500g'] = entity_import('rules_config', '{ "commerce_shipping_service_gro_brief_international_500g" : {
      "LABEL" : "Rate Gro\\u00dfbrief International 500g",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "0.350" } },
        { "AND" : [] },
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "gro_brief_international_500g",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_maxibrief_deutschland'] = entity_import('rules_config', '{ "commerce_shipping_service_maxibrief_deutschland" : {
      "LABEL" : "Rate Maxibrief Deutschland",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "AND" : [] },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "0.2" } }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "maxibrief_deutschland",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_warensendung'] = entity_import('rules_config', '{ "commerce_shipping_service_warensendung" : {
      "LABEL" : "Rate Warensendung",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_physical", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "0.301" } },
        { "commerce_order_compare_total_product_quantity" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003C",
            "value" : "3"
          }
        },
        { "AND" : [
            { "NOT commerce_order_contains_product" : {
                "commerce_order" : [ "commerce_order" ],
                "product_id" : "#56",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "NOT commerce_order_contains_product" : {
                "commerce_order" : [ "commerce_order" ],
                "product_id" : "#64",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "NOT commerce_order_contains_product" : {
                "commerce_order" : [ "commerce_order" ],
                "product_id" : "#10-plain",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "NOT commerce_order_contains_product" : {
                "commerce_order" : [ "commerce_order" ],
                "product_id" : "#10",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "NOT commerce_order_contains_product" : {
                "commerce_order" : [ "commerce_order" ],
                "product_id" : "#87",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "warensendung",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_world_paket_1'] = entity_import('rules_config', '{ "commerce_shipping_service_world_paket_1" : {
      "LABEL" : "Rate World Paket 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "world_paket_1",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_world_paket_2'] = entity_import('rules_config', '{ "commerce_shipping_service_world_paket_2" : {
      "LABEL" : "Rate World Paket 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "world_paket_2",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_world_paket_3'] = entity_import('rules_config', '{ "commerce_shipping_service_world_paket_3" : {
      "LABEL" : "Rate World Paket 3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "world_paket_3",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_world_paket_4'] = entity_import('rules_config', '{ "commerce_shipping_service_world_paket_4" : {
      "LABEL" : "Rate World Paket 4",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "25" } },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "world_paket_4",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_zone4_1'] = entity_import('rules_config', '{ "commerce_shipping_service_zone4_1" : {
      "LABEL" : "Rate Zone4 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "NOT OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "zone4_1",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_zone4_2'] = entity_import('rules_config', '{ "commerce_shipping_service_zone4_2" : {
      "LABEL" : "Rate Zone4 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "3" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "NOT OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "zone4_2",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_zone4_3'] = entity_import('rules_config', '{ "commerce_shipping_service_zone4_3" : {
      "LABEL" : "Rate Zone4 3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "7" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "NOT OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "zone4_3",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_zone4_4'] = entity_import('rules_config', '{ "commerce_shipping_service_zone4_4" : {
      "LABEL" : "Rate Zone4 4",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_physical", "commerce_order", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "14" } },
        { "commerce_physical_rules_order_is_under_weight_limit" : { "order" : [ "commerce-order" ], "limit" : "25" } },
        { "NOT OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TN"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "US"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AX"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-CO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-CE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IC"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "XK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT-SO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES-ML"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MD"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ME"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CH"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RS"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "TR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "UA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "VA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AM"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CA"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "JO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "KZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MA"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "zone4_4",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_mwst_reduced_de'] = entity_import('rules_config', '{ "commerce_tax_rate_mwst_reduced_de" : {
      "LABEL" : "Calculate Ust 7%",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_rules_check_if_the_product_has_7_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
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
            "amount" : "1.07",
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce_line_item" ],
              "tax_rate_name" : "mwst_reduced_de"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_remove_ust_7_for_non_eu_clients'] = entity_import('rules_config', '{ "commerce_tax_rate_remove_ust_7_for_non_eu_clients" : {
      "LABEL" : "Calculate Remove USt 7% for Non-EU clients",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_line_item" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_rules_check_if_the_product_has_7_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
        { "NOT component_rules_check_if_the_shipping_is_to_eu" : [] },
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
            "amount" : "1.07",
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_remove_ust_shop_7_for_non_eu_clients'] = entity_import('rules_config', '{ "commerce_tax_rate_remove_ust_shop_7_for_non_eu_clients" : {
      "LABEL" : "Calculate Remove USt SHOP 7% for Non-EU clients",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "commerce_line_item" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_rules_check_if_the_product_has_7_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
        { "NOT component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_unit_price" } },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:commerce-product" ],
            "field" : "field_wholesale_price"
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : {
              "select" : "commerce-line-item:commerce-product:field-wholesale-price:amount",
              "php" : { "code" : "return $value \\/1.07;" }
            },
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_ust_7_shops'] = entity_import('rules_config', '{ "commerce_tax_rate_ust_7_shops" : {
      "LABEL" : "Calculate USt 7% shops",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "commerce_line_item", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_rules_check_if_the_product_has_7_vat" : { "product" : [ "commerce-line-item:commerce-product" ] } },
        { "component_rules_check_if_the_shipping_is_to_eu" : [] },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_unit_price" } },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:commerce-product" ],
            "field" : "field_wholesale_price"
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce-line-item" ],
            "amount" : {
              "select" : "commerce-line-item:commerce-product:field-wholesale-price:amount",
              "php" : { "code" : "return $value \\/1.07;" }
            },
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce_line_item" ],
              "tax_rate_name" : "ust_7_shops"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
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
  return $items;
}
