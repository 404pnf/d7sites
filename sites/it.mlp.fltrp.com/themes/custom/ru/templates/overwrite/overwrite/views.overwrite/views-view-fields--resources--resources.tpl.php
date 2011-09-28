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
    global $base_url;
	$resources_title=$fields['title']->raw;
	$resources_body=$fields['body']->content;
	$resources_id=$fields['nid']->content;
	$resources_url=$fields['field_url']->content;
	$resources_term=$fields['term_node_tid']->content;
	$resources_real_url="";
	$resources_attachments=$fields['field_resource_attachments']->content;

	if (!empty($resources_body)){	
			 $resources_base_url ='resource/';
			 $resources_real_url = $resources_base_url.$resources_id; 
	}else{
	
		if (!empty($resources_url)){	
			$resources_real_url=$resources_url;
		}
		else
		{
		     if(count (explode(',',$resources_attachments))>1){
				 $resources_base_url ='resource/';
				 $resources_real_url = $resources_base_url.$resources_id; 
			 }else
			{
				$resources_real_url=$resources_attachments;
			 }
		
		}
	}

  $dlimage = '<a href="'.$resources_real_url.'" class="dlimg"><img src="'.$base_url.'/'.drupal_get_path('theme',variable_get('theme_default')).'/images/dl.gif" /></a>' ;
 

     print $dlimage;
	print  l($resources_title,$resources_real_url);
?>
