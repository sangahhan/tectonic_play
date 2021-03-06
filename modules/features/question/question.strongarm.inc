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
  $strongarm->name = 'field_bundle_settings_node__question_';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'page_listing' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'question_listing' => array(
        'custom_settings' => TRUE,
      ),
      'questions' => array(
        'custom_settings' => TRUE,
      ),
      'display_conference_password' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_questions' => array(
        'custom_settings' => TRUE,
      ),
      'regular_questions' => array(
        'custom_settings' => TRUE,
      ),
      'conference_page' => array(
        'custom_settings' => FALSE,
      ),
      'question_slideshow' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__question_'] = $strongarm;

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
  $strongarm->value = array();
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
  $strongarm->value = '0';
  $export['node_preview_question_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_question_';
  $strongarm->value = 1;
  $export['node_submitted_question_'] = $strongarm;

  return $export;
}
