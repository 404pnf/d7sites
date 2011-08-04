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
	 case "products":
          $custom_style_file ='/css/product.css';
		 break;
	 case "list":
          $custom_style_file ='/css/product.css';
		 break;
	 case "book":
          $custom_style_file ='/css/product.css';
		 break;
	case "news":
          $custom_style_file ='/css/information.css';
		 break;
        case "training":
          $custom_style_file = '/css/product.css';
                 break;   	
	case "resources":
          $custom_style_file ='/css/information.css';
		 break;	
	case "newsdetails":
          $custom_style_file ='/css/article.css';
	      break;
	case "searcher":
          $custom_style_file ='/css/searcher.css';
		 break;
	 }

 if(stristr($current_path,'news/'))
			   $custom_style_file ='/css/information.css';

 if(stristr($current_path,'newsdetails/'))
			   $custom_style_file ='/css/information.css';

 if(stristr($current_path,'list/')||stristr($current_path,'book/')||stristr($current_path,'products/')||stristr($current_path,'training/'))
			   $custom_style_file ='/css/product.css';

if(!empty($custom_style_file)){
    $custom_style_uri = '<style type="text/css" media="all">@import url("'.$base_url.'/'.drupal_get_path('theme','chinese').$custom_style_file.'");</style>';
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
