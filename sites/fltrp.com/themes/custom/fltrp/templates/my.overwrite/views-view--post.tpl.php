<?php
//首页重要公告views模版覆写
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
<?php print $header; ?> 
<div id="important_info">
  <div id="home-news-more"><a href="news">更多>></a></div>
	<div class="infobox">
		<?php if ($rows): ?>
      <?php print $rows; ?>

    <?php elseif ($empty): ?>
      <div class="view-empty">
      <?php print $empty; ?>
      </div>
    <?php endif; ?>
	 
	</div>
</div>		
<?php print $footer; ?>

