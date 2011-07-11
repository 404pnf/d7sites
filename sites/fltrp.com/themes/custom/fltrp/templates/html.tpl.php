<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>


  <?php print $styles; ?>

<!---   added by zhanglin  //-->
<?
	global $base_url;
	 $current_path   = drupal_get_path_alias();
	
	 switch($current_path){
	 case "home":
          $custom_style_file ='/css/index.css';
		 break;
	 case "products":
          $custom_style_file ='/css/product.css';
		 break;
	 case "productslist":
          $custom_style_file ='/css/product.css';
		 break;
	 case "productsdetails":
          $custom_style_file ='/css/product.css';
		 break;
	case "training":
          $custom_style_file ='/css/trainning.css';
		 break;
	case "training/teacher":
          $custom_style_file ='/css/trainning.css';
		 break;
	case "training/person":
          $custom_style_file ='/css/trainning.css';
		 break;
	case "home":
          $custom_style_file ='/css/index.css';
		 break;
	case "digital":
          $custom_style_file ='/css/product.css';
		 break;
	case "news":
          $custom_style_file ='/css/information.css';
		 break;	
	case "newsmore":
          $custom_style_file ='/css/information.css';
	      break;
	case "match":
          $custom_style_file ='/css/match.css';
		 break;
	 }
if(!empty($custom_style_file)){
    $custom_style_uri = ' <style type="text/css" media="all">@import url("'.$base_url.'/'.drupal_get_path('theme','fltrp').$custom_style_file.'");</style>';
    print   $custom_style_uri ;
}


?>
<!---   added by zhanglin//  -->

<?php if ($current_path == "products-demo-demo-demo"): ?>
<link href="/sites/fltrp.com/themes/custom/fltrp/lunbo/css/style.css" rel="stylesheet" type="text/css" />
<!--[if lte IE 7]><link href="./css/old_ie.css" rel="stylesheet" type="text/css" /><![endif]-->
<script src="/sites/fltrp.com/themes/custom/fltrp/lunbo/js/jquery-1.5.min.js" type="text/javascript"></script>
<script src="/sites/fltrp.com/themes/custom/fltrp/lunbo/js/jquery.easing.1.3.js" type="text/javascript"></script>
<script src="/sites/fltrp.com/themes/custom/fltrp/lunbo//js/cufon-yui.js" type="text/javascript"></script>
<script type="text/javascript" src="/sites/fltrp.com/themes/custom/fltrp/lunbo/js/cycle.js"></script>
<!--±ØÐë-->
<script>
var slider_settings = {
   speed:              800,
   easing:             'easeInOutQuad',
   oneAfterAnother:    false
}
is_day=false;
</script>
<script src="/sites/fltrp.com/themes/custom/fltrp/lunbo/js/vt.js" type="text/javascript"></script>
<?php endif; ?>

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
