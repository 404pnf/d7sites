<div id="block-<?php print $block->module .'-'. $block->delta ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="block-inner">

      <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
	<div class="textlist">
	  <h1 id="" class="blocktitle"><?php print $block->subject ?><a href="news" class="more">更多>></a></h1>
	  </div>
    <?php endif;?>
      <?php print render($title_suffix); ?>
		
		<div class="content" <?php print $content_attributes; ?>>
		  <?php print $content; ?>
		</div>

  </div>
</div> <!-- /block-inner /block -->