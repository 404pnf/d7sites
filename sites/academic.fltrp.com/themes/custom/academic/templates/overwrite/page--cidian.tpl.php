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
		<!-- content-area 开始 -->
	        	<div id="content-area">
	        		<div class="imglist">
						<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092507.gif" alt="" /></h3>
						<div class="listcontent">
							<ul>
								<li class="column3">
									<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092508.gif" alt="" />
									<?php
									$views_name = 'zhuanti';
									$display_id = 'area1';
									print views_embed_view($views_name, $display_id);
									?>
								</li>
								<li class="column3">
									<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092509.gif" alt="" />
									<?php
									$views_name = 'zhuanti';
									$display_id = 'area2';
									print views_embed_view($views_name, $display_id);
									?>
								</li>
								<li class="column3">
									<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092510.gif" alt="" />
									<?php
									$views_name = 'zhuanti';
									$display_id = 'area3';
									print views_embed_view($views_name, $display_id);
									?>
								</li>
							</ul>							
						</div>
					</div>
					<div class="imglist">
						<h3 class="ts"><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092511.gif" alt="" /></h3>
						<div class="listcontent">
							<div class="listleft">
								<ul>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092512.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />收词面广，新词语多，例证丰富，规模最大</h3>
										<p>收录单词、短语及翻译670,000条，是规模最大的英汉汉英词典...</p>
									</li>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092513.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />依托权威语料库，确保语言地道鲜活</h3>
										<p>包含20亿词的牛津英语语料库，汉英部分的新词添加借助了香港城市大学的LIVAC共时语料库...</p>
									</li>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092514.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" /> 满足中外读者理解与表达的双重需求</h3>
										<p>内容及编排上顾及差异需求，真正满足学习英语的中国人和学习汉语的外国人理解和表达的双重需求...</p>
									</li>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092515.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />首创义项指示语，确保精准选词</h3>
										<p>借助指示语区分不同义项或同一义项下的不同对应词，帮助读者消除理解或表达选词时无所适从的困惑，更杜绝因选词错误而造成的尴尬。 </p>
									</li>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092516.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />提供常用搭配词，丰富表达</h3>
										<p>提供近70,000搭配词，包括动词与名词、形容词与名词、动词与副词、形容词与副词的搭配等等...</p>
									</li>
									<li>
										<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092517.gif" alt="" />
										<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />附录丰富实用</h3>
										<p>附录包含中英信函范例、互联网和电子邮件指南、打电话常用语、短信息缩略语、中国及英美历史文化事件年表、中国及英美节日及假期等...</p>
									</li>
								</ul>
							</div>
							<div class="listright">
								<ul>
									<li><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092518.gif" alt="" />
									<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />精选重要语用主题，辑成语用信息框，分类例解相关表达</h3>
									<p>语用信息框对表达这些主题所必须的语言结构与措词进行归纳分类，有效的帮助读者用外语准确自然地进行表达。</p>
									</li>
									<li>
									<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092519.gif" alt="" />
									<h3><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092520.gif" alt="" />特设330个文化知识框，深入讲解中国及英美文化</h3>
									<p>帮助读者深入了解语言背后的文化信息，在正文中特别插入了与正文词目相关的文化知识，又为本词典平添了文化百科词典的功能...</p>
									</li>
								</ul>
							</div>
						</div>
					</div>
	        	</div>
	        	<!-- content-area 结束 -->
		
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

    <?php // if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar first">
        <div id="sidebar-first-inner" class="inner">
		<!-- content-first 开始 -->
		<div id="sidebar-first" class="column sidebar first">
        	<div id="sidebar-first-inner" class="inner">
				<div class="videos">
					<a href=""><img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092502.gif" alt="" /></a>
				</div>
				<div class="newslist">
					<h3>发布新闻<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092503.gif" alt="" /></h3>
					<ul>
					<?php
			            $views_name = 'zhuanti';
                        $display_id = 'news';
                         print views_embed_view($views_name, $display_id);
				   ?>
					</ul>
				</div>
				<div class="newslist">
					<h3>专家点评<img src="/sites/academic.fltrp.com/themes/custom/academic/images/cidian/10092503.gif" alt="" /></h3>
					<ul>
					<?php
			            $views_name = 'zhuanti';
                        $display_id = 'zhuanjia';
                         print views_embed_view($views_name, $display_id);
				   ?>
				   </ul>
				</div>
				<div class="newslist">
					<h3>发布稿件媒体</h3>
					<b>【稿件内容】</b>
					<?php
			            $views_name = 'zhuanti';
                        $display_id = 'meiti';
                         print views_embed_view($views_name, $display_id);
				   ?>
					<b>【稿件内容】</b>
					<ul class="friendlinks">
						<li>搜狐</li>
						<li>网易</li>
						<li>有道网</li>
						<li>中国日报网</li>
						<li>光明</li>
						<li> 千龙</li>
						<li>中青在线</li>
						<li>汉网</li>
						<li>奥一网</li>
						<li>大洋网</li>
						<li>中国经济网</li>
						<li>西陆网</li>
						<li>TOM</li>
						<li>百灵网</li>
						<li>慧聪</li>
						<li>天津网</li>
						<li>中国广播网</li>
						<li>龙虎网</li>
						<li>东北新闻网</li>
					</ul>
					<b>【发布稿件报刊】</b> 	  	 
					<ul class="friendlinks">
						<li>燕赵都市报</li>
						<li>北京青年报</li>
						<li>新京报</li>
					</ul>
				</div>
        	</div>
      	</div>  
      	<!-- sidebar-first 结束-->		
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div>
    <?php // endif; ?> <!-- /sidebar-first -->

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