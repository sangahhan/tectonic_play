<?php
/**
 * @file
 * question.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function question_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_question_';
  $strongarm->value = '0';
  $export['language_content_type_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_question_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_question_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_question_';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_question_';
  $strongarm->value = '1';
  $export['node_preview_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_question_';
  $strongarm->value = 1;
  $export['node_submitted_question_'] = $strongarm;

  return $export;
}