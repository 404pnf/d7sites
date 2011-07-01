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
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="row" id="booklist">
<ul>
    <?php foreach ($rows as $row_number => $columns): ?>
      <li class="fleft column2">
        <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
        <?php endforeach; ?>
      </li>
    <?php endforeach; ?>
</ul>
</div>
