<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 * 
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */

function qandapp_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.
  
  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function adaptivetheme_subtheme_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_page(&$vars) {
}
function adaptivetheme_subtheme_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
function qandapp_preprocess_node(&$vars) {
	//For content node of type talk, display a link for the 
	//	corresponding questions slideshow
	
	if ($vars['type'] == 'talk') {
		$vars['slideshow_link'] = l('Questions Slideshow', 'talk/'.$vars['nid'].'/slideshow', array('absolute' => TRUE));


		// Display a form to add a Question
		$node = array();
		$node['type'] = 'question_';
		module_load_include('inc', 'node', 'node.pages');
		$vars['question_form'] = drupal_render(drupal_get_form('question__node_form', (object) $node));
	}
}
function adaptivetheme_subtheme_process_node(&$vars) {
}

function qandapp_form_alter (&$form, &$form_state, $form_id) {
	dsm($form);
	dsm($form_id);
	if ($form_id == 'question__node_form'){
		$node = menu_get_object();
		if ($node->type == 'talk'){
			$form['field_talk']['und']['0']['nid']['#type'] = 'value';
			$form['field_talk']['und']['0']['nid']['#value'] = $node->nid;

	
		}
	}
	
}


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_comment(&$vars) {
}
function adaptivetheme_subtheme_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function adaptivetheme_subtheme_preprocess_block(&$vars) {
}
function adaptivetheme_subtheme_process_block(&$vars) {
}
// */
