<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

<meta name="viewport" content="width=device-width;"/>
	
	<link href="http://2u4u.com.cn/sites/2u4u.com.cn/themes/stable/mobile/css/common.css" media="all" rel="stylesheet" type="text/css">
	<link href="/<?php print $directory?>/mobile/css/mobile.css" media="all" rel="stylesheet" type="text/css">
	
	<SCRIPT type="text/javascript" src="http://2u4u.com.cn/sites/2u4u.com.cn/themes/stable/mobile/js/jquery.js"></SCRIPT>
	<script src="http://2u4u.com.cn/sites/ebook.2u4u.com.cn/themes/ebook/js/jquery.tools.min.js" type="text/javascript"></script>
	
	<?php $clienttype = $_REQUEST['clienttype']; echo '<script> var clienttype = "'. $clienttype.'"; </script>';?>
	<SCRIPT type="text/javascript" src="http://2u4u.com.cn/sites/2u4u.com.cn/themes/stable/mobile/js/jquery.m2u4u.common.js"></SCRIPT>

  <?php //print $styles; ?>

  <?php //print $scripts; ?>
</head>
<body class="mobile">
  <?php print $page; ?>
</body>
</html>
