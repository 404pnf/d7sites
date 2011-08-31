<?php
/**
 * @file views-view-list.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php 
	$i=1;
	foreach ($rows as $id => $row){ 
		if($i<=3){		
	?>	  
      <li  class="pens" >
	  <?php
		}else{		
	?>	 
	 <li  >
	<?}?>
	  <?php print $row; ?></li>
    <?php 
	    $i++; 
	 }
	?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
