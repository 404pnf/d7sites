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

<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
  
<div id="bestgroup-content">
	<!-- wrapper for navigator elements -->
	<div class="navi"></div>
	
	<!-- "previous page" action -->
	<a class="prev browse left disabled"></a>
	
	<!-- root element for scrollable -->
	<div class="scrollable" id="scroll">    
	   <!-- root element for the items -->
	   <div id="bestgroup-items" class="items">
		  <?php print $rows; ?>
	  </div>
	</div>
	
    <a class="next browse right"></a>
    
</div>   

  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>
  
  

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div> <?php /* class view */ ?>

<SCRIPT type="text/javascript" src="/<?php print $base_path.$directory?>/js/jquery.tools.min.js"></script>

<script>
/**/
var $c=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js
$c(function(){ 
	//alert('123');
	// initialize scrollable together with the navigator plugin
	total = 0;
	$c("#bestgroup-items div.views-row").each(function(index){
		total = index+1;
	});
	
	if(total<=4) $c('a.next').addClass('disabled');
	
	$c("#scroll").scrollable({
		size: 4,
		vertical:false, 
		clickable:false,
		//navi:'.navi',
		items:'#bestgroup-items',
		//prevPage:'.prev',//跳转到上一页
		//nextPage:'.next',//跳转到下一页
		prev:'.prev',//跳转到上一页
		next:'.next',//跳转到下一页
		hoverClass: 'hover',
		easing:'linear' 
	
	}); 

});
</script>