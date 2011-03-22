<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>
 
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

    <div id="content">
      <div id="content-inner" class="inner column center">
                
        <div id="content-area">
	    	<div class="content-top clearfix">
<div id="block-block_8" class="block block-block" >
		<?php
			$block =  module_invoke('block', 'block_view', '8');
			//print '<h2 class="block-title">'.$block['subject'].'</h2>';
			print '<div class="content">'.$block['content'].'</div>';
		?>
</div>
<div id="block-block_9" class="block block-block" >
		<?php
			$block =  module_invoke('block', 'block_view', '9');
			//print '<h2 class="block-title">'.$block['subject'].'</h2>';
			print '<div class="content">'.$block['content'].'</div>';
		?>
</div>
	     	</div>

		<div class="content-bottom clearfix">

<div id="views-block-news-block_1" class="block views-block" >

		<?php
			//$block =  module_invoke('views', 'block_view', 'news-block_1');
			$block = module_invoke('views', 'block_view', 'news-block_1');

			print '<h2 class="block-title">大赛通知</h2>';
			print '<div class="content">'.$block['content'].'</div>';
		?>
</div>
<div id="block-block-7" class="block block-block" >
		<?php
			$block =  module_invoke('block', 'block_view', '7');
			print '<h2 class="block-title">大赛加油站</h2>';
			print '<div class="content">'.$block['content'].'</div>';
		?>
</div>
		</div>
        </div>

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

  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer']): ?>
    <div id="footer">
      <?php print render($page['footer']); ?>
    </div> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->
