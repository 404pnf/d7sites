


<?php
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<ul class="outul">
 <li>
  <?php if ($header): ?>
      <?php print $header; ?>
  <?php endif; ?>

  <p>
  <?php if ($rows): ?>
      <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>
  </p>
 </li>
 
 <li>
     <span>数字出版</span>
 </li>
 <li>
     <span>网络学习</span>

 </li>
 <li>
                   <?php
                        $views_name = 'training';
                        $display_id = 'block_1';
                         print views_embed_view($views_name, $display_id);
                   ?>

 </li>

</ul>


