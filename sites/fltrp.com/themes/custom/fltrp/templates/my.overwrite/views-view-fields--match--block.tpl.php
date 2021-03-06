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
//活动赛事views行输出覆写
/**
 * 覆写该模板的目的是为了增加对于“活动火热进行中”的特殊处理支持
 */
?>
<?php
	print $fields['field_match_hot']->content;
	 
?>


<div class="huodongbox">
<?php
     print $fields['field_match_image']->content;
?>

<?php
     print $fields['body']->content;
?>
<div class="huodong_time">
<?php
     print $fields['field_match_period']->content;
?>

<?php
     print $fields['field_match_url']->content;
?>
</div>
</div>