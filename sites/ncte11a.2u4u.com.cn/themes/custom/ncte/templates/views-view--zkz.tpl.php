<?php
/**
  这是打印准考证的views页面，因此，一切要简单再简单
  避免干扰whx写的css
 */
?>


	<?php if ($header): ?>
      <?php //print $header; ?>
  <?php endif; ?>
  <?php if ($rows): ?>
    <div id="zkzprint" class="main_div">
      <?php print $rows; ?>
    </div>
  <?php endif; ?>
	
	  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>


