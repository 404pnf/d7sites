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
//   print $current_path ; // 显示当前页面的内部路径
	 switch($current_path){
	 case "home":
          $custom_style_file ='/css/index.css';
		 break;
	case "news":
          $custom_style_file ='/css/information.css';
		 break;	
	case "jiazuoxuandu":
          $custom_style_file ='/css/information.css';
	      break;
	case "newsdetails":
          $custom_style_file ='/css/information.css';
	      break;
	case "searcher":
          $custom_style_file ='/css/searcher.css';
		 break;
	case "user":
          $custom_style_file ='/css/myuser.css';
		 break;
	 }


 if(stristr($current_path,'newsdetails/'))
			   $custom_style_file ='/css/information.css';

 if(stristr($current_path,'page/')||stristr($current_path,'example/'))
			   $custom_style_file ='/css/page.css';

 if(stristr($current_path,'jiazuoxuandu/'))
			   $custom_style_file ='/css/information.css';

 if(stristr($current_path,'users/')||stristr($current_path,'user/'))
			   $custom_style_file ='/css/myuser.css';

 if(stristr($current_path,'paper/'))
			   $custom_style_file ='/css/paper.css';

 if(stristr($current_path,'qu')||stristr($current_path,'xuexiao/'))
			   $custom_style_file ='/css/information.css';

if(!empty($custom_style_file)){
    $custom_style_uri = ' <style type="text/css" media="all">@import url("'.$base_url.'/'.drupal_get_path('theme','zuowen').$custom_style_file.'");</style>';
  //  print $base_url.'/'.drupal_get_path('theme','zuowen').$custom_style_file;
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
