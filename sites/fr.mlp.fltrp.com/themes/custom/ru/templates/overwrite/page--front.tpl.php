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
		
			
			
			<!-- 首页内容左侧开始 -->
			<div class="conleft fleft">
						<!-- 教学资讯 -->
						<div class="textlist">
							<div class="commontitle"><a href="news" class="more"><img src="/sites/fr.mlp.fltrp.com/themes/custom/fr/images/more.gif" alt="" /></a></div>
					  <?php
			             $views_name = 'news';
                        $display_id = 'home';
                         print views_embed_view($views_name, $display_id);
					 ?>
						</div>
						<!-- //教学资讯 -->
					
					<!-- 首页内容左侧资源分类  开始 -->
					<div class="recenter">
							<div class="commontitle"><a href="resources" class="more"><img src="/sites/fr.mlp.fltrp.com/themes/custom/fr/images/more.gif" alt="" /></a></div>

							<!-- 首页内容左侧资源分类-- 教师资源 -- 开始 -->
							<div class="column2">
								<span>老师</span>
								  <?php
										  $views_name = 'resources_category';
										   $display_id = 'home_teacher';
									       print views_embed_view($views_name, $display_id);
									?>
							</div>
						<!-- //首页内容左侧资源分类-- 教师资源 -- 结束-->


				<!-- 首页内容左侧资源分类-- 学生资源 -- 开始 -->
							<div class="column2">
								<span>学生</span>
								 <?php
										  $views_name = 'resources_category';
										   $display_id = 'home_student';
									       print views_embed_view($views_name, $display_id);
									?>
							</div>
					<!-- //首页内容左侧资源分类-- 学生资源 -- 结束 -->


						</div>
		<!-- //首页内容左侧资源分类  结束 -->

					</div>
			<!-- //首页内容左侧  结束 -->

	<!--精品推荐  开始 -->
			<div class="conright fright">
						<div class="imgcontent">
							<div class="commontitle"><a href="products" class="more"><img src="/sites/fr.mlp.fltrp.com/themes/custom/fr/images/more.gif" alt="" /></a></div>
									<?php
										  $views_name = 'products';
										   $display_id = 'home_competitive';
									       print views_embed_view($views_name, $display_id);
									?>
						</div>
					</div>
	<!-- //精品推荐  结束 -->

          <?php print render($page['content']) ?>
        </div>

        <?php print $feed_icons; ?>

      </div>
    </div> <!-- /content-inner /content -->

    <?php if ($main_menu || $secondary_menu): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'sub-menu')))); ?>
      </div>
    <?php endif; ?>

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
