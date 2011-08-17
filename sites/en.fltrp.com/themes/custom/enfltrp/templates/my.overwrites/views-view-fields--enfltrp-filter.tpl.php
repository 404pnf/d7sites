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
<div class="enfilter_img">
  <?php print $fields['field_img']->content; ?>
  <?php print $fields['nid']->content; ?>
  
</div>

<div class="enfilter_other">
 <ul>
  <li><strong>Title: <?php 
                         $url=$fields['path']->content;
                         $content = "<a href='$url'>".$fields['field_ebname']->content."</a>";
                         print $content; ?>
      </strong></li>
  <li><strong>ISBN:</strong><?php print $fields['field_isbn']->content; ?></li>
  <li><strong>Dimensions:</strong> <?php print $fields['field_english_dimensions']->content; ?></li>
  <li><strong>Price:</strong><?php print $fields['sell_price']->content; ?></li>
  <li><strong>Pages:</strong><?php print $fields['field_pages']->content; ?></li>
  <li><strong>Components:</strong><?php print $fields['field_components']->content; ?></li>
 </ul> 
</div>

<div class="enfilter_des">
    <div class="enfilter_des_title">Description:</div>
    <div class="enfilter_des_content"><?php print $fields['field_features']->content;?></div>
</div>

