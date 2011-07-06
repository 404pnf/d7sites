<?php
// 资讯详细页模版
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">
    
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <?php print $user_picture; ?>
		    
    <?php if ($display_submitted): ?>
      <span class="submitted"><?php print $date; ?> — <?php print $name; ?></span>
    <?php endif; ?>

  	<div class="content">
  	  <?php 
  	    // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        //print render($content);
		//print ("<pre>");
		//print_r($node);
		//print ("</pre>");

		$title = $node->title;        //新闻标题
		$isbn = $node->field_isbn['und'][0]['value'];        //ISBN
		$author = $node->field_author['und'][0]['value'];        //作者名
		$format = $node->field_format['und'][0]['value'];        //开本
		$pages = $node->field_pages['und'][0]['value'];        //页数
		$zdfs = $node->field_zdfs['und'][0]['value'];        //装订方式
		$publish_date= $node->field_publish_date['und'][0]['value'];        //发布日期
		$price = $node->field_price['und'][0]['value'];        //价格
	    $img = $node->field_img['und'][0]['uri'];        //封面
		$img =file_create_url($img );        //封面
		$body = $node->body['und'][0]['value'];        //简介    
		$directory = $node->field_directory['und'][0]['value'];        //目录    
		
       ?>
	  

  	
    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>