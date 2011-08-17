<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php 
      //需要判断category和yz是不是为空，初始化需要赋值All
      $category = $_GET['category'];
      if(empty ($category)){
	  $category="All";
	 }
      $yz = $_GET['yz'];
      if(empty ($yz)){
	  $yz="All";
	 }      
      $rd = $row->tid;  
      $path_rd = '/en?category='.$category.'&rd='.$rd.'&yz='.$yz;
?>



<?php

$initialize=$_GET['rd'];

if ($initialize == $rd){
	$content = "<div class='sort_reader'><a class='active' href='$path_rd'>".$row->taxonomy_term_data_name."</a></div>";
	print $content;       
}else{
    
    $full_path ="<a href='$path_rd'>".$row->taxonomy_term_data_name."</a>";
    
    print $full_path;	
}
?>
