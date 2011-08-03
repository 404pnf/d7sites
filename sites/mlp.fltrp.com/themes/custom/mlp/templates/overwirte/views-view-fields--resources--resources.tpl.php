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
	print("<pre>");
	print_r($fields);
	print("</pre>");
?>
<?php
	$resources_title=$fields['title']->raw;
	$resources_id=$fields['nid']->content;
	$resources_url=$fields['field_url']->content;
	$resources_term=$fields['term']->content;
	$resources_real_url="";
	
	if (!empty($resources_url)){	
		$resources_real_url=$resources_url;
	}
	else
	{
		 $resources_base_url ='resource/';
		 $resources_real_url = $resources_base_url.$resources_id; 
	}
		
    print $resources_term;
	print  l($resources_title,$resources_real_url);
?>
