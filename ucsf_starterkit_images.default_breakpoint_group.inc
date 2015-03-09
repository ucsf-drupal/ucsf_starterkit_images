<?php
/**
 * @file
 * ucsf_starterkit_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ucsf_starterkit_images_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_full';
  $breakpoint_group->name = 'Media Full';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.full',
    1 => 'custom.user.mobile_to_regular',
    2 => 'custom.user.mobile_third_is_full',
    3 => 'custom.user.mobile_quarter_from_third',
    4 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_full'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_half';
  $breakpoint_group->name = 'Media Half';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.half',
    1 => 'custom.user.third_from_half',
    2 => 'custom.user.quarter_from_third_from_half',
    3 => 'custom.user.mobile_to_regular',
    4 => 'custom.user.mobile_third_is_full',
    5 => 'custom.user.mobile_quarter_from_third',
    6 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_half'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_quarter';
  $breakpoint_group->name = 'Media Quarter';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.quarter',
    1 => 'custom.user.mobile_to_regular',
    2 => 'custom.user.mobile_third_is_full',
    3 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_quarter'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_half';
  $breakpoint_group->name = 'Media Square Half';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.half',
    1 => 'custom.user.third_from_half',
    2 => 'custom.user.quarter_from_third_from_half',
    3 => 'custom.user.mobile_to_regular',
    4 => 'custom.user.mobile_third_is_full',
    5 => 'custom.user.mobile_quarter_from_third',
    6 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_half'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_quarter';
  $breakpoint_group->name = 'Media Square Quarter';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.quarter',
    1 => 'custom.user.mobile_to_regular',
    2 => 'custom.user.mobile_third_is_full',
    3 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_quarter'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_square_third';
  $breakpoint_group->name = 'Media Square Third';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.third_',
    1 => 'custom.user.quarter_from_third',
    2 => 'custom.user.mobile_to_regular',
    3 => 'custom.user.mobile_third_is_full',
    4 => 'custom.user.mobile_quarter_from_third',
    5 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_square_third'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'media_third';
  $breakpoint_group->name = 'Media Third';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.third_',
    1 => 'custom.user.quarter_from_third',
    2 => 'custom.user.mobile_to_regular',
    3 => 'custom.user.mobile_third_is_full',
    4 => 'custom.user.mobile_quarter_from_third',
    5 => 'custom.user.mobile',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['media_third'] = $breakpoint_group;

  return $export;
}
