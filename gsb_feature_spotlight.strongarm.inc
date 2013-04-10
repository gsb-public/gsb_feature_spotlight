<?php
/**
 * @file
 * gsb_feature_spotlight.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_spotlight_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_year';
  $strongarm->value = 'Y';
  $export['date_format_year'] = $strongarm;

  return $export;
}
