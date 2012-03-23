<?php
// 培训views覆写
?>
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
//活动赛事views行输出覆写
/**
 * 覆写该模板的目的是为了增加对于“活动火热进行中”的特殊处理支持
 */
?>

<?php
	print $fields['field_training_hot']->content;
?>

<div class="leftright">
	<div class="listleft">
		<?php print $fields['field_training_image']->content ?>
		<?php print $fields['field_training_url']->content ?>
	</div>										
	<div class="listright">
		<h2><?php print $fields['title']->content ?></h2>
		<?php print $fields['body']->content ?>
		<span class="train_time"><?php print $fields['field_training_period']->content ?></span>
		<span class="contect"><?php print $fields['field_training_contact']->content ?></span>
	</div>
</div>
