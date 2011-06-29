<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  <div id="header"  class="lrow">

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

 <!-- nav -->	
	<?php if ($page['nav']): ?>

      <div id="nav"  class="lrow <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">

		<?php print render($page['nav']); ?>
      </div>

   <?php endif; ?>
<!-- /nav -->


<!-- breadcrumb -->	
	<?php if ($page['breadcrumb']): ?>
      <div id="breadcrumb"  class="srow">
        <?php print render($page['breadcrumb']); ?>
      </div>
    <?php endif; ?>
<!-- /breadcrumb -->

<!-- content_top -->	
	<?php if ($page['content_top']): ?>
      <div id="content_top"  class="srow">
        <?php print render($page['content_top']); ?>
      </div>
    <?php endif; ?>
<!-- /content_top -->



  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">

    <div id="content" class="srow">
      <div id="content-inner" class="inner column center">
    <!--
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
            //-->

        <div id="content-area"   >
          <?php print render($page['content']) ?>
		  	<div class="lrow" id="main_container">
		<div class="srow">
			<p id="fltrp_info">
				外语教学与研究出版社（简称外研社）成立于1979年，是北京外国语大学创办和领导的大学出版社。外研社每年出版5000多种出版物，其中新书1200多种，有200多种获国际和国内的优秀图书奖...<a href="" class="more">更多>></a>
			</p>
			<div id="important_info">
				<div class="infobox">
					<ul>
						<li><a href="">法语2》修订本1-7课答案下载  </a></li>
						<li><a href="">2011高校外语学科学术骨干研修班报名中  </a></li>
						<li><a href="">外语教学与研究中的统计方法报名通知  </a></li>
						<li><a href="">第二届外研社区域教师培训师培训   </a></li>
						<li><a href="">外研社青少年英语教学趋势研讨会邀请函外研社青少年英语教学趋势研讨会邀请函  </a></li>
					</ul>
				</div>
			</div>			
			<img src="images/fltrp20110621_07.png"  class="fltrp_img" alt=""/>
		</div>
	</div>
        </div>

       <!--
		<?php print $feed_icons; ?>
      //-->
      </div>
    </div> <!-- /content-inner /content -->



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
    <div id="footer" class="lrow">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->