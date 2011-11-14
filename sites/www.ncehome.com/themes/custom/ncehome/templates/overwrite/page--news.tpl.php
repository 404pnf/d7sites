<?php                                                                                                                                       
// 资讯中心列表页模版                                                                                                                       
                                                                                                                                            
  $custom_style_file ='/css/information.css';                                                                                               
    if(!empty($custom_style_file)){                                                                                                         
    $custom_style_uri = ' <style type="text/css" media="all">@import url("'.$base_url.'/'.drupal_get_path('theme','ncehome').$custom_style_file.'");</style>';                                                                                                                            
    print   $custom_style_uri ;                                                                                                             
}                                                                                                                                           
?>                                                                                                                                          
<SCRIPT type="text/javascript" src="<?php print $base_path.$directory?>/js/coin-slider/coin-slider.min.js"></SCRIPT>                        
<link href="<?php print $base_path.$directory?>/js/coin-slider/coin-slider-styles.css" media="all" rel="stylesheet" type="text/css">        
<script>                                                                                                                                    
        var $j=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js                                                                    
        $j(function(){                                                                                                                      
                 $j('#coin_slider').coinslider({                                                                                            
            width: 400,//设置的宽度等于容器的宽度                                                                                           
            height: 268,//设置的高度等于容器的高度                                                                                          
            delay: 3000,//图片切换延迟                                                                                                      
            effect: "rain",//可以选4种切换效果，'random', 'swirl', 'rain', 'straight'，不写则为随机效果                                     
            navigation: true,//是否开启数字导航                                                                                             
            links: false //是否对图片开启超链接                                                                                             
        });                                                                                                                                 
                                                                                                                                            
        $j('#coin-slider-coin_slider').width($j('#coin_slider').width());                                                                   
        });                                                                                                                                 
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
    <!-- comment 
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
       end comment -->         


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
            
            <?php print $breadcrumb; ?>

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
          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->

    <!--- comment 
    <?php if ($main_menu || $secondary_menu): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'sub-menu')))); ?>
      </div>
    <?php endif; ?>
      end  comment -->
     



    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
          <?php print render($page['sidebar_first']); ?>
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

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->
