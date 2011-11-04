


<?php
  $term_name = $row->taxonomy_term_data_name;
  $current_id1 = arg(2);
  $current_id2 = arg(3);
  $id=$row->tid;
  $path = 'http://academic.fltrp.com/productslist/'.$id.'/'. $current_id1.'/'.$current_id2;
  if ($id == arg(1))
        $class = 'active';
  else
        $class = ' ';


?>

<a class="<?php print $class; ?>" href="<?php print $path;?>"><?php print $term_name ?></a>

