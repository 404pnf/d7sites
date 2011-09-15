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
if (theme_get_setting('fltrp_tabs')) {
  drupal_add_css( drupal_get_path('theme', 'fltrp') .'/css/tabs.css');
}

function fltrp_preprocess_page(&$vars, $hook) {
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

function fltrp_preprocess_node(&$vars) {
  // Add a striping class.
  $vars['classes_array'][] = 'node-' . $vars['zebra'];
}

function fltrp_preprocess_block(&$vars, $hook) {
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
function fltrp_breadcrumb($variables) {

 $breadcrumb_separator = theme_get_setting('fltrp_breadcrumb_separator');
  $current_path   = drupal_get_path_alias();

	if($current_path =='searcher'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
	     $breadcrumbs[] = '<a href="'.url('searcher').'">'.t('搜索').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode( $breadcrumb_separator , $breadcrumbs);
		$output .= '</div>';
		return $output;
	}


	if($current_path =='productslist'||$current_path =='digital'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		//if($current_path =='productslist'){
		  $breadcrumbs[] = '<a href="'.url('productslist').'">'.t('产品中心').'</a>';
		//}else{
		//   $breadcrumbs[] = '<a href="'.url('digital').'">'.t('数字产品').'</a>';
		//}
	  $category = $_GET["category"];
		$tid = $category;
		$parents = taxonomy_get_parents_all($tid);
		//debug($parents);
		$parents = array_reverse($parents);
		foreach($parents as $parent){
			//$breadcrumbs[] = l($parent->name, 'productslist?category='.$parent->tid);
			$breadcrumbs[] = '<a href="'.$current_path.'?category='.$parent->tid.'">'.$parent->name.'</a>';
		}
	  $output = '<div class="breadcrumb">';
		$output .=implode( $breadcrumb_separator , $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

 /**

if($current_path =='news'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('news').'">'.t('资讯中心').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode(' > ', $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='match'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('match').'">'.t('赛事活动').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode(' > ', $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='training'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('training').'">'.t('培训业务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode(' > ', $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

*/
	if($current_path =='newsmore'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		if($current_path =='newsmore'){
		  $breadcrumbs[] = '<a href="'.url('news').'">'.t('资讯中心').'</a>';
		}else{
		 // $breadcrumbs[] = '<a href="'.url('digital').'">'.t('数字产品').'</a>';
		}
	  $cid = $_GET["cid"];
		$tid = $cid;
		$term =taxonomy_term_load($tid);
		$breadcrumbs[] = '<a href="'.base_path().'newsmore?cid='.$term->tid.'">'.$term->name.'</a>';
	  $output = '<div class="breadcrumb">';
		$output .=implode( $breadcrumb_separator , $breadcrumbs);
		$output .= '</div>';
		return $output;
	}






  $current_path   = drupal_get_path_alias();
if($current_path =='training'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('training').'">'.t('培训业务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='server'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('server').'">'.t('读者服务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='sls'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('sls').'">'.t('学校和图书馆服务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='sales'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('sales').'">'.t('经销商服务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='author'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('author').'">'.t('作者服务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}


if($current_path =='copyright'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('copyright').'">'.t('版权业务').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}


if($current_path =='sites'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('sites').'">'.t('外研社网群').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='map'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('map').'">'.t('到达外研社').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='links'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('links').'">'.t('友情链接').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}


if($current_path =='jubao'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('jubao').'">'.t('盗版举报').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='contact'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = '<a href="'.url('contact').'">'.t('联系我们').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='aboutus1'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = t('关于我们');
		  $breadcrumbs[] = '<a href="'.url('aboutus1').'">'.t('社长致辞').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='aboutus2'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = t('关于我们');
		  $breadcrumbs[] = '<a href="'.url('aboutus2').'">'.t('本社简介').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}

if($current_path =='aboutus3'){
	  $breadcrumbs = array();
		$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
		 $breadcrumbs[] = t('关于我们');
		  $breadcrumbs[] = '<a href="'.url('aboutus3').'">'.t('机构概览').'</a>';

	  $output = '<div class="breadcrumb">';
		$output .=implode($breadcrumb_separator, $breadcrumbs);
		$output .= '</div>';
		return $output;
	}


  if(arg(0)=='node' && arg(1)>0){
	  $nid = arg(1);
		$node = node_load($nid);

		if($node->type == 'router'){
            $path_ailas   = drupal_get_path_alias();
		    $title = $node->title;
		    $breadcrumbs = array();
			$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
			$breadcrumbs[] = '<a href="'.url($path_ailas).'">'.t($title).'</a>';
                        $output = '<div class="breadcrumb">';
			$output .=implode($breadcrumb_separator, $breadcrumbs);
			$output .= '</div>';
			return $output;
				
		}
		




		if($node->type == 'book'){
		
		  $breadcrumbs = array();
			$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
			$breadcrumbs[] = '<a href="'.url('productslist').'">'.t('产品中心').'</a>';
			$tid = $node->field_category['und'][0]['tid'];
			$parents = taxonomy_get_parents_all($tid);
			//debug($parents);
			$parents = array_reverse($parents);
			foreach($parents as $parent){
			  //$breadcrumbs[] = l($parent->name, 'productslist?category='.$parent->tid);
				$breadcrumbs[] = '<a href="'.base_path().'productslist?category='.$parent->tid.'">'.$parent->name.'</a>';
			}
		        $output = '<div class="breadcrumb">';
			$output .=implode($breadcrumb_separator, $breadcrumbs);
			$output .= '</div>';
			return $output;
				
		}
		
		if($node->type == 'news'){
		
		  $breadcrumbs = array();
			$breadcrumbs[] = '<a href="'.url().'">'.t('首页').'</a>';
			$breadcrumbs[] = '<a href="'.url('news').'">'.t('资讯中心').'</a>';
			$tid = $node->field_channel['zh-hans'][0]['tid'];
			$term =taxonomy_term_load($tid);
			$breadcrumbs[] = '<a href="'.base_path().'newsmore?cid='.$term->tid.'">'.$term->name.'</a>';
			/*
			$parents = taxonomy_get_parents_all($tid);
			//debug($parents);
			$parents = array_reverse($parents);
			foreach($parents as $parent){
			  //$breadcrumbs[] = l($parent->name, 'productslist?category='.$parent->tid);
				$breadcrumbs[] = '<a href="'.base_path().'newsmore?cid='.$term->tid.'">'.$term->name.'</a>';
			}
		*/
		  $output = '<div class="breadcrumb">';
			$output .=implode($breadcrumb_separator, $breadcrumbs);
			$output .= 	'</div>';
			return $output;
		}
	}

  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('fltrp_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('fltrp_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('fltrp_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('fltrp_breadcrumb_title')) {
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
      elseif (theme_get_setting('fltrp_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with .element-invisible.
    //  $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

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


function fltrp_id_safe($string) {
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
 
function fltrp_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // Adding a class depending on the TITLE of the link (not constant)
  $element['#attributes']['class'][] = fltrp_id_safe($element['#title']);
  // Adding a class depending on the ID of the link (constant)
  $element['#attributes']['class'][] = 'mid-' . $element['#original_link']['mlid'];
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override or insert variables into theme_menu_local_task().
 */
function fltrp_preprocess_menu_local_task(&$variables) {
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

function fltrp_menu_local_tasks(&$variables) {  
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

function fltrp_menu_tree__menu_footer_menu($variables) {
  return '<ul class="fcenter">' . $variables['tree'] . '</ul>';
}

function fltrp_menu_link__menu_footer_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li>' . $output . $sub_menu . "</li>\n";
}

