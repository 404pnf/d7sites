<?php
//培训活动模版覆写，使其结构满足设计输出要求
// $Id: views-view-list.tpl.php,v 1.3.6.3 2010/12/07 17:19:09 dereine Exp $
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
			$i=0; 
			$output = '';
	?>
	<?php foreach ($rows as $id => $row): ?>
	
		<?php 
			
			if($i%2==0){
				$output .='<li class="column2">';
			}else{
				$output .='<li class="column2 even">';
			}
			$output .=$row; 
			$output .='</li>';
	
		?>
	
     <?php $i++; ?>
    <?php endforeach; ?>
	<?php print $output;  ?>

  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
