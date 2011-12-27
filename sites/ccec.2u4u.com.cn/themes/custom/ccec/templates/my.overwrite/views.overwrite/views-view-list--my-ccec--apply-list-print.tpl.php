<?php
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
<style>
*{margin:0;padding:0;}
ul{list-style:none;overflow:auto;}
li.views-row{overflow:auto;float:left;margin:1px;}
.rows{margin-left:248px;font-size:14px}
#photo{margin-top:128px;margin-left:52px;float:left;}
#name{margin-top:16px}
#candidate-id{margin-top:126px}
#degree{margin-top:19px}
#date{margin-top:23px}
.element-invisible{clear:both}
 .pb{page-break-after:always;clear:both;}
@media print{.element-invisible,.item-list ul.pager{display:none;}
   .pb{page-break-after:always;clear:both;}
}
</style>

<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
  <?php $i=1;?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
	    <?php if($i%4==0):?>
				<div class="pb"></div>
		<?php endif; ?>
		  <?php $i++;?>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
