<div id="page">
		<div id="header">
			<div id="header-region">
				<div class="headerone">
				
					    <?php if ($logo): ?>
							<div id="logo" class="grid5">
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
      </a></div>
    <?php endif; ?>
					
					<div id="search" class="grid4">
	<?php 
	$block8 = block_load('block',8);
	$renderable_block8=  _block_get_renderable_array(_block_render_blocks(array($block8)));
	print render($renderable_block8);
?>
<div class="search">
	<?php 
	$search_block = block_load('search','form');
	$renderable_search_block=  _block_get_renderable_array(_block_render_blocks(array($search_block)));
	print render($renderable_search_block);
?>
	</div>					
					</div>
				</div>
				<div id="nav" class="">
   <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
    

				</div>
			</div>
		</div>
		<div id="main" class="srow">
			<div id="content">
				<div id="content-inner" class="inner column center">				
					<div id="content-area">
						<div id="main_container">
							<div class="srow">
								<?php 

	print views_embed_view('post','block');
?>
							</div>
						</div>
					</div>
					<div id="content-bottom">
							<?php 
	$block3 = block_load('block',3);
	$renderable_block3=  _block_get_renderable_array(_block_render_blocks(array($block3)));
	print render($renderable_block3);
?>
	<?php 
	$block2 = block_load('block',2);
	$renderable_block2=  _block_get_renderable_array(_block_render_blocks(array($block2)));
	print render($renderable_block2);
?>

					</div>
				</div>
			</div>      					
		
</div>

		  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>
</div>