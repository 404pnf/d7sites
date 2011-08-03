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
<div class="prodcuts_img">
        <?php print $fields['field_img']->content;?>
</div>


<div class="products_info">
  <ul>
          <li> <?php print $fields['title']->content; ?></li>
          <li> ISBN:  <?php print $fields['field_isbn']->content; ?></li>
          <li> 著译者: <?php print $fields['field_author']->content; ?></li>
          <li> 开本: <?php print $fields['field_format']->content; ?></li>
          <li> 页数: <?php print $fields['field_pages']->content; ?></li>
          <li> 定价: <?php print $fields['field_price']->content; ?></li>
          <li> 出版日期: <?php print $fields['field_publish_date']->content; ?></li>
  </ul>
</div>
