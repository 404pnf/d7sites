<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">
    
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <?php print $user_picture; ?>
		    
   <!-- <?php if ($display_submitted): ?>
      <span class="submitted"><?php print $date; ?> — <?php print $name; ?></span>
    <?php endif; ?> -->

  	<div class="content">
  	  <?php 
  	    // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        //print render($content);

   //   debug($content,null,TRUE);


		$title = $node->title;        //新闻标题
		if(isset( $node->field_news_author['und']))
			$author = $node->field_news_author['und'][0]['value'];        //作者名
		if(isset( $node->field_news_from['und']))
			$from = $node->field_news_from['und'][0]['value'];        //来源
		$publish_date= date ('Y-m-d',$node->created);        //发布日期
		
		if(isset( $node->body['zh-hans']))
		    $body = $node->body['zh-hans'][0]['value'];        //内容    
		
		$newsimages=array();
		if(isset( $node->field_news_image['zh-hans']))
		     $newsimages=$node->field_news_image['zh-hans'];

		if(isset( $node-> field_resource_attachments['zh-hans']))
		     $resources=$node->field_resource_attachments;

			
       ?>
  	</div>
  	

	<!--  文章内容 开始 -->
	  		<div class="video">
						<h1><?php print $title?></h1>
						<div class="mov">
								<?php print render($content['body']);?>
								<?php print render($content['field_resource_attachments']);?>
						</div>
					</div>
	<!--  文章内容 结束-->

	


    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>
