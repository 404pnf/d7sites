<?php
// $Id: views-view-unformatted.tpl.php,v 1.6.6.1 2010/03/29 20:05:38 dereine Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<ul class="assort fcenter">
<?php if (!empty($title)): ?>
  <li><?php print $title; ?></li>
<?php endif; ?>
<div class="sfrow">
				<ul class="fright">
<?php foreach ($rows as $id => $row): ?>
 <li>
    <?php print $row; ?>
  </li>
<?php endforeach; ?>
		</ul>
</div>
</ul>