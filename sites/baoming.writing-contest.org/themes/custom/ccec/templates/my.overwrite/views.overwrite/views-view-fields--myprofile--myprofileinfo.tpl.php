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
	//print("<pre>");
	//print_r($row);
	//print("</pre>");

?>
<style>

#schoolinfo{ border:2px solid #333;padding:10px 0;}
#school_cname,#school_cname{float:left;margin-left:10px;margin-right:10px;font-weight:bold;}
</style>
<div id="schoolinfo">
<?php
	$school_cname = $row->field_field_school_cname[0]['raw']['value'];
	$school_ename = $row->field_field_school_ename[0]['raw']['value'];
	//$degree = $row->field_field_baoming[0]['raw']['taxonomy_term']->name;
?>
<div id="school_cname"><?php print $school_cname;?></div>
<div id="school_ename"><?php print $school_ename;?></div>
（请务必提供学校准确的中、英文名称，以便打印证书。）
</div>