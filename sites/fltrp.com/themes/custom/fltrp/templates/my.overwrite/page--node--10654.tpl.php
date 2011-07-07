<?php
// 产品列表页模版
?>
<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  <div id="header">


   <!--  commented by zhanglin
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
      </a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div id="name-and-slogan">

        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
            </div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>

      </div>
    <?php endif; ?>
     commented by zhanglin-->


    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

  </div> <!-- /header -->
	

  <!-- ______________________ MAIN _______________________ -->

  <div id="main"  class="srow">
	
	<!------content  top----->
	<?php if ($page['content_top']): ?>
      <div id="content-top">
        <?php print $breadcrumb; ?>
        <?php print render($page['content_top']); ?>
      </div>
    <?php endif; ?>
  <!------content  top----->



    <div id="content">
      <div id="content-inner" class="inner column ">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">    

            <?php if ($page['highlight']): ?>
              <div id="highlight"><?php print render($page['highlight']) ?></div>
            <?php endif; ?>

  <!--- commented by zhanglin
            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>
commented by zhanglin-->
            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            
          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">

  <!--属性筛选条件 -->		
<div id="teach" class="row">
	<h2>
			<?php
			             $category = $_GET["category"];
						 $views_name = 'cate';
                        $display_id = 'block';
                         print views_embed_view($views_name, $display_id,$category);
              ?>
	
	</h2>
	
	<?php
             $category = $_GET["category"];
			 if($category<698||$category>709) {
      ?>
		<div class="sfrow">
			<span>教育阶段:</span>
				<?php
			             $views_name = 'product_features_education';
                        $display_id = 'block_1';
                         print views_embed_view($views_name, $display_id);
              ?>
		</div>
		<?php
			 }	  
		 ?>
		
		<div class="sfrow">
			<span>语种:</span>
			<?php
			             $views_name = 'product_features_language';
                        $display_id = 'block';
                         print views_embed_view($views_name, $display_id);
                ?>
		</div>
</div>
  <!--/属性筛选条件 -->		



   <!--产品列表 排序-->
   <?php

			$output ="";
			$url = "productslist";
			$category = $_GET["category"];
			$education = $_GET["education"];
			$language = $_GET["language"];

			if(empty($category))
				$category="All";			
			if(empty($education))
				$education="All";
		   if(empty($language))
				$language="All";

			$sort_by = $_GET["sort_by"];
			$sort_order = $_GET["sort_order"];

			if($sort_order=="ASC")
					$sort_order="DESC";
			else
					$sort_order="ASC";


			$output.='<a href="'.$url.'?category='.$category.'&education='.$education.'&language='.$language;

   ?>
						<div id="booklb_title">
							<ul>
								<li class="strong">排序</li>
								<li >
								<?php
									$orderoutput = "";
              						$orderoutput=$output.'&sort_by=field_publish_date_value&sort_order='.$sort_order.'"';	
									if($sort_by=="field_publish_date_value")										
									    $orderoutput.='  class="active" ';		
									$orderoutput.='  >出版日期</a>';
									print  $orderoutput;
								?>
								</li>
								<li>
								<?php
   								    $orderoutput = "";
              						$orderoutput.=$output.'&sort_by=title&sort_order='.$sort_order.'"';	
									if($sort_by=="title")										
									    $orderoutput.='  class="active" ';		
									$orderoutput.='  >书名</a>';
									print  $orderoutput;
								?>								
								</li>
								<li>
								<?php
 								    $orderoutput = "";
              						$orderoutput.=$output.'&sort_by=field_price_value&sort_order='.$sort_order.'"';	
									if($sort_by=="price")										
									    $orderoutput.='  class="active" ';		
									$orderoutput.='  >定价</a>';
									print  $orderoutput;
								?>
								</li>
							</ul>
						</div>
	  <!--/产品列表排序 -->		


       		   <!--产品列表 -->
			 <div class="row" id="booklb">
 	
					<?php
			             $views_name = 'products';
                        $display_id = 'page_1';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
			 </div>
				  <!--/产品列表 -->			

          <?php print render($page['content']) ?>

        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->

<!--- commented by zhanglin
    <?php if ($main_menu || $secondary_menu): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'sub-menu')))); ?>
      </div>
    <?php endif; ?>
commented by zhanglin-->

     <!-- sidebar-first -->
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
           
				<!-- 产品左侧公共调用栏 -->
			<?php include 'products_left.tpl.php';?>	
             <!-- 产品左侧公共调用栏 -->			

	          <?php print render($page['sidebar_first']); ?>
        </div>
      </div>
    <!-- /sidebar-first -->

    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar second">
        <div id="sidebar-second-inner" class="inner">
          <?php print render($page['sidebar_second']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-second -->

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->