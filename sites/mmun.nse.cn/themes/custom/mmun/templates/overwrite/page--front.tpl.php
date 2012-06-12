<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<!-- ______________________ TOP NAVIGATION BEGINING_______________________ -->
	<div class="topnav">				
		<div class="topnavcontent">
			<div class="region region-topnav"></div>
		</div>
	</div>
	<!-- /TOP NAVIGATION ENDING -->

	<!-- ______________________ HEADER BEGINING_______________________ -->
	<div id="header">
		<a id="logo"></a>
		<div id="name-and-slogan"><div id="site-name"><a href=""   rel="home"></a></div>
		<div id="site-slogan"></div></div>
		<!-- ****HEADER-REGION BEGINING**** -->
		<div id="header-region">
			
		</div>
		<!-- ****HEADER-REGION ENDING**** -->
	</div> 
	<!-- /HEADER ENDING -->
	
	<!-- ______________________ MAIN-TOP BEGINING_______________________ -->
    <div id="main-top">
		<div class="region region-main-top">
		<?php print render($page['main_top']); ?>	
         </div>
    </div>
	<!-- /MAIN-TOP ENDING -->

	<!-- __________________ MAIN  BEGINING_______________________ -->
	<div id="main" class="">
		<!-- ****CONTENT BEGINING**** -->
		<div id="content">
			<div id="content-inner" class="inner column center">
				<!-- ****CONTENT-HEADER BEGINING **** -->
				<div id="content-header"><div id="highlight"></div><h1 class="title"></h1></div> 
				<!-- ****CONTENT-HEADER ENDING ****-->
				<!-- ****CONTENT-AREA BEGINING**** -->
				<div id="content-area">
					<div class="main fleft">
						<div class="info sec">
								
							<?php
			                  $views_name = 'index_text';
                              $display_id = 'indextext';
											print views_embed_view($views_name, $display_id);
							?>			

						</div>	
				<div class="focus sec">
					<div class="fleft flash">
							<?php
			                  $views_name = 'indexinfo';
                              $display_id = 'index_image';
											print views_embed_view($views_name, $display_id);
							?>
							</div>
							<h3><a href="http://mmun.nse.cn/newslist" class="fright more">更多>></a></h3>
							
							<?php
			                  $views_name = 'indexinfo';
                              $display_id = 'index_newslist';
									print views_embed_view($views_name, $display_id);
							?>
							</div>
				
				<div class="picnews imglist sec">
						
						<?php
			                  $views_name = 'indexinfo';
                              $display_id = 'index_album';
											print views_embed_view($views_name, $display_id);
							?>	
				</div>
							
				
				<div class="sence sec">
					<h3><a href="http://mmun.nse.cn/lijiefenghui" class="more">更多学生代表感言>></a></h3>		
						<?php
			                  $views_name = 'indexinfo';
                              $display_id = 'thoughts';
											print views_embed_view($views_name, $display_id);
							?>		
				</div>			
							
							
							
							
						
					</div>
				</div>
				<!-- **** CONTENT-AREA ENDING **** -->
			</div>
		</div>
		<!-- ****CONTEN ENDING **** -->		
		<div id="navigation" ></div>
		<!-- ****SIDEBAR-FIRST BEGINING **** -->
		<div id="sidebar-first" class="column sidebar first">
			<div id="sidebar-first-inner" class="inner"></div>
		</div>
		<!-- ****SIDEBAR-FIRST ENDING ****-->		
		<!-- ****SIDEBAR-SECOND BEGINING **** -->
		<div id="sidebar-second" class="column sidebar second">
			<div id="sidebar-second-inner" class="inner">
				<?php print render($page['sidebar_second']); ?>	
			</div>
		</div>
		<!-- ****SIDEBAR-SECOND ENDING ****-->
	</div> 
	<!-- /MAIN ENDING-->

	<!-- ______________ MAIN BOTTOM BEGINING ________________-->
    <div id="main-bottom">
    	 <div class="region region-main-bottom">
			<?php print render($page['main-bottom']); ?>
         </div>	
	</div>
	<!-- /MAIN BOTTOM ENDING-->

	<!-- _______________ FOOTER  BEGINING______________________-->
    <div id="footer">
		<?php print render($page['footer']); ?>
	</div> 
	<!-- /FOOTER ENDING-->
</div>