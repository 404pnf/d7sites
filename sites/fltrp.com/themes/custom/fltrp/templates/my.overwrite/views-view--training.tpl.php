<?php
// $Id: views-view-grid.tpl.php,v 1.3.6.3 2010/12/10 08:19:15 dereine Exp $
/**
 * @file views-view-grid.tpl.php
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<div id="sbtn">
  <?php $current_path   = drupal_get_path_alias(); ?>
	<?php //print  $current_path; ?>
	<a class="<?php print  $current_path !='training/person' ? 'active': '' ?>" href="<?php print base_path(); ?>training"><img src="<?php print base_path().path_to_theme(); ?>/images/<?php print  $current_path !='training/person' ? 's': '' ?>js-btn20110630.gif"/></a>
	<a class="<?php print  $current_path =='training/person' ? 'active': '' ?>" href="<?php print base_path(); ?>training/person"><img src="<?php print base_path().path_to_theme(); ?>/images/<?php print  $current_path =='training/person' ? 's': '' ?>px-btn20110630.gif"/></a>
</div>

<div class="row" id="booklist">

  <?php if ($rows): ?>
      <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

</div>
