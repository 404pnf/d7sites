<?php

/*
 * Here we override the default HTML output of drupal.
 * refer to http://drupal.org/node/550722
 */
 
// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('clear_registry')) {
  // Rebuild .info data.
  system_rebuild_theme_data();
  // Rebuild theme registry.
  drupal_theme_rebuild();
}
// Add Zen Tabs styles
if (theme_get_setting('children_tabs')) {
  drupal_add_css( drupal_get_path('theme', 'children') .'/css/tabs.css');
}

function children_preprocess_page(&$vars, $hook) {
  if (isset($vars['node_title'])) {
    $vars['title'] = $vars['node_title'];
  }
  // Adding a class to #page in wireframe mode
  if (theme_get_setting('wireframe_mode')) {
    $vars['classes_array'][] = 'wireframe-mode';
  }
  // Adding classes wether #navigation is here or not
  if (!empty($vars['main_menu']) or !empty($vars['sub_menu'])) {
    $vars['classes_array'][] = 'with-navigation';
  }
  if (!empty($vars['secondary_menu'])) {
    $vars['classes_array'][] = 'with-subnav';
  }  
}

function children_preprocess_node(&$vars) {
  // Add a striping class.
  $vars['classes_array'][] = 'node-' . $vars['zebra'];
}

function children_preprocess_block(&$vars, $hook) {
  // Add a striping class.
  $vars['classes_array'][] = 'block-' . $vars['zebra'];
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function children_breadcrumb($variables) {
  $breadcrumb_separator = theme_get_setting('chinese_breadcrumb_separator');
  $current_path = drupal_get_path_alias(); 
          if($current_path =='aboutus'){
	        $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
		if($current_path =='aboutus'){
		  $breadcrumbs[] = '<a href="'.url('aboutus').'">'.t(' 关于我们').'</a>';
		}else{
	        }                              
                $output .= '<div class="breadcrumb">';
                $output .=implode( $breadcrumb_separator , $breadcrumbs);                
		$output .= '</div>';
		return $output;
		
	  }
	  if($current_path =='news'){
	        $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
		if($current_path =='news'){
		  $breadcrumbs[] = '<a href="'.url('news').'">'.t(' 童书迅').'</a>';
		}else{
	        }                              
                $output .= '<div class="breadcrumb">';
                $output .=implode( $breadcrumb_separator , $breadcrumbs);                
		$output .= '</div>';
		return $output;
		
	  }
	  
	  if($current_path =='products'){
	        $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
		if($current_path =='products'){
		  $breadcrumbs[] = '<a href="'.url('products').'">'.t(' 小书房').'</a>';
		}else{
	        }                              
                $output .= '<div class="breadcrumb">';
                $output .=implode( $breadcrumb_separator , $breadcrumbs);                
		$output .= '</div>';
		return $output;
		
	  }
	  
	  if(arg(0)=='products' && arg(1)>0){
                $tid = arg(1);
                $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
		$breadcrumbs[] = '<a href="'.url('products').'">'.t('小书房').'</a>';	
		$parents = taxonomy_get_parents_all($tid);             
		$parents = array_reverse($parents);
		foreach($parents as $parent){
			$breadcrumbs[] = ' >> <a href="'.base_path().'products/'.$parent->tid.'">'.$parent->name.'</a>';
		}
	        $output = '<div class="breadcrumb">';
		$output .=implode( $breadcrumb_separator , $breadcrumbs);
		$output .= '</div>';
		return $output;
	     }
             
   	  if(arg(0)=='node' && arg(1)>0){
             $nid = arg(1);
             $node = node_load($nid);
             if($node->type == 'book'){
                  $breadcrumbs = array();
                  $breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
                  $breadcrumbs[] = '<a href="'.url('products').'">'.t(' 小书房').'</a> ';
                  $tid = $node->field_category['und'][0]['tid'];   //获得产品分类
                  $parents = taxonomy_get_parents_all($tid);
                   $parents = array_reverse($parents);
                  foreach($parents as $parent){
                        $breadcrumbs[] = '>> <a href="'.base_path().'products/'.$parent->tid.'">'.$parent->name.'</a> ';
                  }
                  $output = '<div class="breadcrumb">';
                  $output .=implode($breadcrumb_separator, $breadcrumbs);
                  $output .= '</div>';
                  return $output;

             }
          }
	

	  
          
	  if(arg(0)=='node' && arg(1)>0){
             $nid = arg(1);
	     $node = node_load($nid);
             if($node->type =='news'){
	        $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a> >>';
		$breadcrumbs[] = '<a href="'.url('newsdetails').'">'.t(' 童书迅').'</a>';
	        $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	     } 
         }  
  
  
  
  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('children_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('children_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('children_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('children_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $title = check_plain($item['title']);
        }
        else {
          $title = drupal_get_title();
        }
        if ($title) {
          $trailing_separator = $breadcrumb_separator;
        }
      }
      elseif (theme_get_setting('children_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with .element-invisible.
      $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

      return $heading . '<div class="breadcrumb">' . implode($breadcrumb_separator, $breadcrumb) . $trailing_separator . $title . '</div>';
    }
  }
  // Otherwise, return an empty string.
  return '';
}

/* 	
 * 	Converts a string to a suitable html ID attribute.
 * 	
 * 	 http://www.w3.org/TR/html4/struct/global.html#h-7.5.2 specifies what makes a
 * 	 valid ID attribute in HTML. This function:
 * 	
 * 	- Ensure an ID starts with an alpha character by optionally adding an 'n'.
 * 	- Replaces any character except A-Z, numbers, and underscores with dashes.
 * 	- Converts entire string to lowercase.
 * 	
 * 	@param $string
 * 	  The string
 * 	@return
 * 	  The converted string
 */	


function children_id_safe($string) {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or underscores.
  $string = strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));
  // If the first character is not a-z, add 'n' in front.
  if (!ctype_lower($string{0})) { // Don't use ctype_alpha since its locale aware.
    $string = 'id'. $string;
  }
  return $string;
}

/**
 * Generate the HTML output for a menu link and submenu.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @return
 *   A themed HTML string.
 *
 * @ingroup themeable
 */
 
function children_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // Adding a class depending on the TITLE of the link (not constant)
  $element['#attributes']['class'][] = children_id_safe($element['#title']);
  // Adding a class depending on the ID of the link (constant)
  $element['#attributes']['class'][] = 'mid-' . $element['#original_link']['mlid'];
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override or insert variables into theme_menu_local_task().
 */
function children_preprocess_menu_local_task(&$variables) {
  $link =& $variables['element']['#link'];

  // If the link does not contain HTML already, check_plain() it now.
  // After we set 'html'=TRUE the link will not be sanitized by l().
  if (empty($link['localized_options']['html'])) {
    $link['title'] = check_plain($link['title']);
  }
  $link['localized_options']['html'] = TRUE;
  $link['title'] = '<span class="tab">' . $link['title'] . '</span>';
}

/*
 *  Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */

function children_menu_local_tasks(&$variables) {  
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;

}




function children_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li>' . $output . $sub_menu . "</li>\n";
}
