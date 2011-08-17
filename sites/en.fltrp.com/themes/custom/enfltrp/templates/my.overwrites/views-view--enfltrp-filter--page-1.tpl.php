 <?php
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="category1">
<?php

 $category = $_GET['category'];
if(empty ($category)){
	$category="All";
}

$yz = $_GET['yz'];
if(empty ($yz)){
	$yz="All";
}   

$rd="All";  

 $path = '/en?category='.$category.'&rd='.$rd.'&yz='.$yz;
 if($_GET['rd']=='All')/* 读者为All，则当前 All 标签加 active 的 class，否则class为空*/
 	$a_class = 'active';
 else
 	$a_class = '';
?>
      Sort by Ages: <a class="<?php print $a_class; ?>" href="<?php print $path; ?>">All</a>
        <?php 
             $views_name = "filter_fenlei";
             $display_id = "block_1";
	     print views_embed_view($views_name, $display_id);
        ?>     
</div>



<div class="category2">
<?php

$category = $_GET['category'];
if(empty ($category)){
	$category="All";
}

$yz="All";

$rd = $_GET['rd'];
if(empty ($rd)){
	$rd="All";
}    
	 
 $path = '/en?category='.$category.'&rd='.$rd.'&yz='.$yz;
 if($_GET['yz']=='All')/* 语种为All，则当前 All 标签加 active 的 class，否则class为空*/
 	$a_class = 'active';
 else
 	$a_class = '';
?> 
	Sort by Language: <a class="<?php print $a_class; ?>" href="<?php print $path;?>">All</a>
          <?php
             $views_name = "filter_fenlei";
             $display_id = "block_2";
             print views_embed_view($views_name, $display_id);
          ?>
</div>



<div class="filter_detail">

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

</div><?php /* class view */ ?>

