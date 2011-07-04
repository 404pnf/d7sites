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


<div class="row" id="booklist">

  <?php if ($rows): ?>
      <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

</div>
