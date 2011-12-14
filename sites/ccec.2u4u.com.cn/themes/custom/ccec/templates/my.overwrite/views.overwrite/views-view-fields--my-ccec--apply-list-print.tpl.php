<?php
// $Id: views-view-fields.tpl.php,v 1.6.6.1 2010/12/04 07:39:35 dereine Exp $
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
//	print("<pre>");
	//print_r($row);
//print("</pre>");

?>

<div style="background: url('/sites/ccec.2u4u.com.cn/themes/custom/ccec/images/certificate.jpg');width:540px;height:370px;float:left;position: relative;">
<?php
	$photo_style = 'candidate_photo_2inch';
    $photo_uri = $row->field_field_pic[0]['raw']['uri'] ;
	//print $photo_uri;
	$photo_url = image_style_url($photo_style,$photo_uri);
	//print $photo_url ;
	$photo = '<img src="'.$photo_url.'"/>';
	$name = $row->node_title;
	$candidate_id = $row->field_field_candidate_id[0]['raw']['value'];
	$degree = $row->field_field_baoming[0]['raw']['taxonomy_term']->name;
?>
<div id="photo"><?php print $photo;?></div>
<div id="candidate-id" class="rows"><?php print $candidate_id;?></div>
<div id="name" class="rows"><?php print $name;?></div>
<div id="degree" class="rows"><?php print $degree;?></div>
<div id="date" class="rows">□2012-1-7/□2012-1-8</div>
</div>