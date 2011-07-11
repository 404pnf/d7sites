<?php 
/* 这个区块是drupal 7默认方node内容的区块。必须启用。
   但我们不需要它那些div id和class，比如 div class-"odd" id="block-sytem-class"
   只需要简单输入$content就可以了。这样页面干净许多。
*/
?>
  <?php print $content; ?>
