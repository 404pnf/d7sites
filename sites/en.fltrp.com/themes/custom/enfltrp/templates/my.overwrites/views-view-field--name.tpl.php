<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>
<?php 
      //需要判断yz是不是为空，初始化需要赋值All
      $rd = $_GET['rd'];
      if(empty ($rd)){
	  $rd="All";
	 }  
      $yz = $_GET['yz'];
      if(empty ($yz)){
	  $yz="All";
	 }      
      $category = $row->tid;  
      $path_rd = '/en?category='.$category.'&rd='.$rd.'&yz='.$yz; //"/"为绝对路径不能不加,否则图书节点选择分类不正常
     
?>

<div class="isactive">

<?php

$initialize=$_GET['category'];

if ($initialize == $category){
	$content = "<div class='sort_reader'><a href='$path_rd'>".$row->taxonomy_term_data_name."</a></div>";
	print $content;       
}else{
    
    $full_path ="<a href='$path_rd'>".$row->taxonomy_term_data_name."</a></div>";
    
    print $full_path;	
}
?>

