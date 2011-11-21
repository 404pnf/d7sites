<!-- ______________________ PAGE BEGINING_______________________ -->
<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>
<!-- ______________________ TOP NAVIGATION BEGINING_______________________ -->
    <?php if ($page['topnav']): ?>
      	<div class="topnav">				
			<div class="topnavcontent">
	        <?php print render($page['topnav']); ?>
		  </div>
	   </div>
    <?php endif; ?>


<!-- ______________________ HEADER BEGINING_______________________ -->

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
		<!-- ****HEADER-REGION BEGINING**** -->
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
	<!-- ****HEADER-REGION ENDING**** -->
    <?php endif; ?>

  </div> <!-- /header -->

  <!-- ______________________ MAIN-TOP BEGINING_______________________ -->
    <?php if ($page['main_top']): ?>
      <div id="main-top">
        <?php print render($page['main_top']); ?>
      </div>
    <?php endif; ?>
	<!-- /MAIN-TOP ENDING -->


<!-- __________________ MAIN  BEGINING_______________________ -->

  <div id="main" class="clearfix">
    <indexAreaStart></indexAreaStart>

	<!-- ****CONTENT BEGINING**** -->
    <div id="content">
      <div id="content-inner" class="inner column center">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>

			<!-- ****CONTENT-HEADER BEGINING **** -->
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
            
          </div> 
	<!-- ****CONTENT-HEADER ENDING ****-->

        <?php endif; ?>

	<!-- ****CONTENT-AREA BEGINING**** -->
        <div id="content-area">
          <?php print render($page['content']) ?>

<!-- 首页flash导航 -->
<div class="flash"> 
          <div class="fleft"> 
              <object width="737" height="342" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,28,0" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000">
                <param value="/sites/viaton.fltrp.com/themes/custom/viaton/images/def1.swf" name="movie">
                <param value="high" name="quality">
                <param value="transparent" name="wmode">
                <param value="opaque" name="wmode"><embed width="737" height="342" wmode="transparent" type="application/x-shockwave-flash" pluginspage="http://www.adobe.com/shockwave/download/download.cgi?P1_Prod_Version=ShockwaveFlash" quality="high" src="/sites/viaton.fltrp.com/themes/custom/viaton/images/def1.swf"> 
              </object>
		  </div>
         <div class="fright"> 
              <object width="248" height="342" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,28,0" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000">
                <param value="/sites/viaton.fltrp.com/themes/custom/viaton/images/pan.swf" name="movie">
                <param value="high" name="quality">
                <param value="transparent" name="wmode">
                <param value="opaque" name="wmode"><embed width="248" height="342" wmode="transparent" type="application/x-shockwave-flash" pluginspage="http://www.adobe.com/shockwave/download/download.cgi?P1_Prod_Version=ShockwaveFlash" quality="high" src="/sites/viaton.fltrp.com/themes/custom/viaton/images/pan.swf"> 
              </object>
         </div>
 </div>
<!-- //首页flash导航 -->

<!-- 首页下方 新闻及 全国咨询电话等图片 -->
 <div class="mainsecond"> 
            <div class="col3 fir"> 
			     <div class="newslist"> 
                 <h3 class="title"><a href="#" class="more fright" target="_blank">更多>></a><img src="/sites/viaton.fltrp.com/themes/custom/viaton/images/zxnews.jpg" alt="" /></h3>
             
						<?php
			             $views_name = 'news';
                        $display_id = 'home';
                         print views_embed_view($views_name, $display_id);
					 ?>

              </div>
            </div>

		<div class="col3 sec"><img src="/sites/viaton.fltrp.com/themes/custom/viaton/images/qgtel.jpg" alt="" /><img src="/sites/viaton.fltrp.com/themes/custom/viaton/images/qgxs.jpg" alt="" /></div>
          <div class="col3 thr"><img width="208" height="115" border="0" src="/sites/viaton.fltrp.com/themes/custom/viaton/images/tv.gif"></div>
 </div>
<!-- //首页下方 新闻及 全国咨询电话等图片 -->

     </div>
   <!-- **** CONTENT-AREA ENDING **** -->
        <?php print $feed_icons; ?>

      </div>
    </div> 
	<!-- ****CONTEN ENDING **** -->		
<indexAreaEnd></indexAreaEnd>


    <?php if ($main_menu || $secondary_menu): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'sub-menu')))); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
	<!-- ****SIDEBAR-FIRST BEGINING **** -->
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div>
	  <!-- ****SIDEBAR-FIRST ENDING ****-->	
    <?php endif; ?> 

    <?php if ($page['sidebar_second']): ?>
	<!-- ****SIDEBAR-SECOND BEGINING **** -->
      <div id="sidebar-second" class="column sidebar second">
        <div id="sidebar-second-inner" class="inner">
          <?php print render($page['sidebar_second']); ?>
        </div>
      </div>
	  	<!-- ****SIDEBAR-SECOND ENDING ****-->
    <?php endif; ?>

  </div>
  <!-- /MAIN ENDING-->

 <!-- ______________ MAIN BOTTOM BEGINING ________________-->
  <?php if ($page['main_bottom']): ?>
      <div id="main-bottom">
        <?php print render($page['main_bottom']); ?>
      </div>
    <?php endif; ?>
		<!-- /MAIN BOTTOM ENDING-->


  	<!-- _______________ FOOTER  BEGINING______________________-->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div>
<!-- /FOOTER ENDING-->
  <?php endif; ?>

</div> 
<!-- ______________________ PAGE ENDING_______________________ -->