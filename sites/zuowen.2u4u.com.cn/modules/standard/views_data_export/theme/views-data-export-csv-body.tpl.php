<?php

// Print out exported items.
$total = count($themed_rows);
$i =0;
foreach ($themed_rows as $count => $item_row):
  $i++;
  print implode($separator, $item_row) . (($i != $total) ? "\r\n" : "");
endforeach;