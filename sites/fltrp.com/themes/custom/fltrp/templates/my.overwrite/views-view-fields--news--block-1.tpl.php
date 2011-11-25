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
    $diffDay = 3  ;//几天内的新闻显示最新
	$newIcon = '<img src="static/images/new.gif"/>';
	$news_title=$fields['title']->content;
	$news_id=$fields['nid']->content;
	$news_publishdate=$fields['created']->content;
	$news_publishdate_raw=$fields['created']->raw;
	$news_base_url ='node/';
    $news_real_url = $news_base_url.$news_id; 
	$current_date =date("Y-m-d");
	$datediff = (strtotime($current_date)-$news_publishdate_raw)/3600/24;



	print $news_title;
	if($datediff <=$diffDay)
		print  $newIcon;
	print $news_publishdate;

?>
