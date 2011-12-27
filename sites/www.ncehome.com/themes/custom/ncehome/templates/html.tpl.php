<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>

<!---   added by zhanglin  //-->
<?php
	global $base_url;
	 $current_path   = drupal_get_path_alias();

	 switch($current_path){
	 case "frontpage":
          $custom_style_file ='/css/index.css';
		 break;
	 case "news":
          $custom_style_file ='/css/information.css';
		 break;
 
	 }

 if(stristr($current_path,'news/'))
			   $custom_style_file ='/css/news.css';


 if(stristr($current_path,'newsdetails/'))
			   $custom_style_file ='/css/news.css';

 if(stristr($current_path,'productslist/45/80')||stristr($current_path,'productslist/45/23')||stristr($current_path,'productslist/45/16')||stristr($current_path,'productslist/45'))
                           $custom_style_file ='/css/xgn.css';

 if(stristr($current_path,'productslist/50/19')||stristr($current_path,'productslist/50/25')||stristr($current_path,'productslist/50/29')||stristr($current_path,'productslist/50/34')||stristr($current_path,'productslist/50/38')||stristr($current_path,'productslist/50'))
                           $custom_style_file ='/css/jq.css';

 if(stristr($current_path,'productslist/57/26')||stristr($current_path,'productslist/57/78')||stristr($current_path,'productslist/57/79')||stristr($current_path,'productslist/57'))
                           $custom_style_file ='/css/xbz.css';

 if(stristr($current_path,'productslist/62/24')||stristr($current_path,'productslist/62/39')||stristr($current_path,'productslist/62/76')||stristr($current_path,'productslist/62/81')||stristr($current_path,'productslist/62'))
                            $custom_style_file ='/css/qita.css';


if(!empty($custom_style_file)){
    $custom_style_uri = '<style type="text/css" media="all">@import url("'.$base_url.'/'.drupal_get_path('theme','ncehome').$custom_style_file.'");</style>';
    print   $custom_style_uri ;
}


?>
<!---   added by zhanglin//  -->

  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip">
    <a href="#main-menu"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
