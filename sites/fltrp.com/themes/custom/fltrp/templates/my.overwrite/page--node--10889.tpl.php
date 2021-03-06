<?php
// 资讯中心列表页模版
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

      <div id="content-top">
        <?php print $breadcrumb; ?>
					<?php if ($page['content_top']): ?>
        <?php print render($page['content_top']); ?>
				<?php endif; ?>
      </div>
    
  <!------content  top----->



    <div id="content">
      <div id="content-inner" class="inner column ">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">    

            <?php if ($page['highlight']): ?>
              <div id="highlight"><?php print render($page['highlight']) ?></div>
            <?php endif; ?>
   <!--  commented by zhanglin
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

		<!--  焦点列表开始 -->
						<div id="news">
						<div class="imgnews column2">
						<?php
			             $views_name = 'news';
                        $display_id = 'block_2';
		                print views_embed_view($views_name, $display_id);
						 ?>
						 </div>
						<div class="imgnews column2 cborder">
						 <?php
			             $views_name = 'news';
                        $display_id = 'block_3';
		                print views_embed_view($views_name, $display_id);
						 ?>
						 </div>
						</div>
						<!--  焦点列表结束 -->


						<!--  外研社新闻列表开始 -->
						<?php
								$cid=$_GET["cid"];
								switch($cid){
								case 821:
									$h2class = "wysxw";
									break;
					             case 822:
									$h2class = "jxky";
									break;
					             case 823:
									$h2class = "cpzx";
									break;
					             case 824:
									$h2class = "hdss";
									break;
								}
						
						?>
						<div class="newslist">
							<h2 class="<?php print $h2class ?>">外研社新闻</h2>
						<?php
			             $views_name = 'news';
                        $display_id = 'block_4';
						$views_arg1=$cid;
                         print views_embed_view($views_name, $display_id,$views_arg1);
						 ?>
						</div>
						<!--  外研社新闻列表结束 -->
						

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