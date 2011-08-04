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
                   <?php
                        $views_name = 'products';
                        $display_id = 'attachment_1';
                         print views_embed_view($views_name, $display_id);
                   ?>



                   <?php
                        $category = $_GET["category"];
                        $views_name = 'chinese_category';
                        $display_id = 'page_1';
                         print views_embed_view($views_name, $display_id,$category);
                   ?>
     


  <?php  
      $url="list";
      $category = $_GET['category'];
      $path= '<a href="'.$url.'?category='.$category;
  ?>


  <?php 
      $sort_by = $_GET["sort_by"];
      $sort_order = $_GET["sort_order"];
      if($sort_order=="ASC")
         $sort_order="DESC";
      else
         $sort_order="ASC";
  ?>


  <div class="tab">
        <ul>
           <li class="strong">排序</li>
           <li><?php
                  $orderoutput = "";
                  $orderoutput = $path.'&sort_by=field_publish_date_value&sort_order='.$sort_order.'"';
                  if($sort_by == "field_publish_date_value")                             
                     $orderoutput.='  class="active" ';
                  $orderoutput.='  >出版日期</a>';
                  print  $orderoutput;
                ?></li>
            <li><?php
                  $orderoutput = "";
                  $orderoutput.=$path.'&sort_by=title&sort_order='.$sort_order.'"';
                  if($sort_by=="title")                                                
                     $orderoutput.='  class="active" ';
                  $orderoutput.='  >书名</a>';
                  print  $orderoutput;
                  ?></li>
             <li><?php
                  $orderoutput = "";
                  $orderoutput.=$path.'&sort_by=field_price_value&sort_order='.$sort_order.'"';
                  if($sort_by=="price")                                                
                     $orderoutput.='  class="active" ';
                  $orderoutput.='  >定价</a>';
                  print  $orderoutput;
                  ?></li>
        </ul>
  </div>
          <!--/产品列表排序 -->








  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
   <div class="pagenum row">
    <?php print $pager; ?>
   </div>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>




