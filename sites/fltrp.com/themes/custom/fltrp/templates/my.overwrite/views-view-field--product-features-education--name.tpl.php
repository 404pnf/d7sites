<?php
//产品属性--教育阶段views的覆写 ，作用:处理特殊的属性id，为820时，作为全选（All），另外由于作为筛选条件，所以要记录所选的产品分类和其他属性
// $Id: views-view-field.tpl.php,v 1.1 2008/05/16 22:22:32 merlinofchaos Exp $
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
			$output ="";
			$category = $_GET["category"];
			$language = $_GET["language"];
			$education = $_GET["education"];
			$url = "productslist";
			if($row->tid==819) 
			   $row->tid="All";
			if(!empty ($language)){
				//print l($row->taxonomy_term_data_name,$url ,array('query' =>array('category' =>$category,'education' =>$row->tid,'language' =>$language, ))); 
				$output.='<a href="'.$url.'?category='.$category.'&education='.$row->tid.'&language='.$language.'"';

					
			}else{
				//print l($row->taxonomy_term_data_name,$url ,array('query' =>array('category' =>$category,'education' =>$row->tid, ))); 
				$output.='<a href="'.$url.'?category='.$category.'&education='.$row->tid.'"';

			}
			
			if($education==$row->tid)
			   $output.='  class="isactive" ';
			$output.='  >'.$row->taxonomy_term_data_name.'</a>';
			print  $output;
?>