<?php
// 资讯中心首页模版
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
						<div class="newslist">
							<h2 class="wysxw">外研社新闻<a href="newsmore?cid=821" class="more">>>更多</a></h2>
						<?php
			             $views_name = 'news';
                        $display_id = 'block_1';
						$views_arg1=821;
                         print views_embed_view($views_name, $display_id,$views_arg1);
						 ?>
						</div>
						<!--  外研社新闻列表结束 -->
						<!--  教学科研列表开始 -->
						<div class="newslist">
							<h2 class="jxky">教学科研<a href="newsmore?cid=822" class="more">>>更多</a></h2>
								<?php
			             $views_name = 'news';
                        $display_id = 'block_1';
						$views_arg1=822;
                         print views_embed_view($views_name, $display_id,$views_arg1);
						 ?>
						</div>
						<!--  教学科研列表结束 -->
						<!--  产品咨询列表开始 -->
						<div class="newslist">
							<h2 class="cpzx">产品资讯<a href="newsmore?cid=823" class="more">>>更多</a></h2>
							<?php
			             $views_name = 'news';
                        $display_id = 'block_1';
						$views_arg1=823;
                         print views_embed_view($views_name, $display_id,$views_arg1);
						 ?>
						</div>
						<!--  产品咨询列表开始 -->
						<!--  活动赛事列表开始 -->
						<div class="newslist">
							<h2 class="hdss">活动赛事<a href="newsmore?cid=824" class="more">>>更多</a></h2>
							<?php
			             $views_name = 'news';
                        $display_id = 'block_1';
						$views_arg1=824;
                         print views_embed_view($views_name, $display_id,$views_arg1);
						 ?>
						</div>
						<!--  活动赛事列表开始 -->


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