<SCRIPT type="text/javascript" src="<?php print $base_path.$directory?>/js/jQuery v1.6.4.js"></SCRIPT>
<script>
//小内部选项卡切换功能                                                                                                                      
$(document).ready(function(){                                                                                                    
        $oc = $(".oc");                                                                                                        
        $tablis = $(".othertab li");                                                                                            
        $oc.css({"display":"none"});                                                                                              
        $tablis.removeClass("active");                                                                                           
        $oc.eq(0).css({"display":"block"});                                                                                  
        $tablis.eq(0).addClass("active");                                                                                 
        $tablis.each(function(index){                                                                              
                $(this).click(function(){                                                                             
                        $tablis.removeClass("active");                                                                      
                        $(this).addClass("active");                                                                    
                        $oc.css({"display":"none"});                                                                  
                        $oc.eq(index).css({"display":"block"});                                                        
                });                                                                                                     
        });                                                                                                               
}) 

</script> 

<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <!-- ______________________ TOP NAVIGATION_______________________ -->
    <?php if ($page['topnav']): ?>
      	<div class="topnav">				
			<div class="topnavcontent">
	        <?php print render($page['topnav']); ?>
		  </div>
	   </div>
    <?php endif; ?>


  <!-- ______________________ HEADER _______________________ -->

  <div id="header">

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

    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

  </div> <!-- /header -->

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">

  <?php if ($page['content_top']): ?>
      <div id="content-top">
        <?php print $breadcrumb; ?>
        <?php print render($page['content_top']); ?>
      </div>
    <?php endif; ?><!-- /content_top -->


    <div id="content">
      <div id="content-inner" class="inner column center">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <!--commented <?php print $breadcrumb; ?> 屏蔽默认page.tpl.php的面包屑-->

            <?php if ($page['highlight']): ?>
              <div id="highlight"><?php print render($page['highlight']) ?></div>
            <?php endif; ?>

            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            
          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">


                                <!-- 获得当前分类下的系列 -->
                                           <?php
                                                   $category = arg(1);
                                                   $views_name = 'category';
                                                   $display_id = 'series';
                                                   print views_embed_view($views_name, $display_id,$category);
                                            ?>

                                <!-- 获得当前系列描述 -->
                                             <?php 
                                                 $category = arg(2);
                                                 $term = taxonomy_term_load($category);
                                                 print $term->description;
                                      
                                               ?>
                      <div class="productlist">     
                            <div class="product-title">
                                <!--获得当前分类名称 -->
                                 <?php
                                     $views_name = 'series_list_books';
                                     $display_id = 'current';
                                     print views_embed_view($views_name, $display_id);
                                  ?>
                             </div> 
                          
				<!-- 	产品列表 开始	 -->			
				<?php
   				        $category = arg(1);
                                        $arg2=arg(2);
                                         if($arg2==null)
                                            $arg2='all';
                                        $views_name = 'series_list_books';
                                        $display_id = 'productslist';
                                        print views_embed_view($views_name, $display_id,$category,$arg2);
                                 ?>
	   			<!-- 	//产品列表 结束	 -->		
                       </div>

          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->


    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
          <div class="wrapul">     
                  <?php print render($page['sidebar_first']); ?>
          </div>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-first -->

    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar second">
        <div id="sidebar-second-inner" class="inner">
             <?php print render($page['sidebar_second']); ?>
        </div>
      </div>
    <?php endif; ?> <!-- /sidebar-second -->


  <?php if ($page['content_bottom']): ?>
      <div id="content-bottom">
        <?php print render($page['content_bottom']); ?>
      </div>
    <?php endif; ?><!-- /content_bottom -->

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->
