<indexAreaStart><!--  索引内容 开始 --></indexAreaStart>
	
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

   //   debug($content,null,TRUE);


		$title = $node->title;        //新闻标题
		if(isset( $node->field_news_author['und']))
			$author = $node->field_news_author['und'][0]['value'];        //作者名
		if(isset( $node->field_news_from['und']))
			$from = $node->field_news_from['und'][0]['value'];        //来源
		$publish_date= date ('Y-m-d',$node->created);        //发布日期
		$body = $node->body['zh-hans'][0]['value'];        //内容    
		$newsimages=array();
		if(isset( $node->field_news_image['zh-hans']))
		     $newsimages=$node->field_news_image['zh-hans'];

		if(isset( $node-> field_resource_attachments['zh-hans']))
		     $resources=$node->field_resource_attachments;

			
       ?>
  	</div>
  	
	
	<!--  文章内容 开始 -->
		<div class="article">
			<h1 class="articletitle"><?php print $title?></h1>
			<div class="articlecontent">
				<center>
					<?php // print str_replace('taxonomy/term/','newsmore?cid=',render($content));?>
					<?php // print str_replace('taxonomy/term/','newsmore?cid=',render($content));?>
					<?php 
					if(count($newsimages)>0)
					{
						$newsimages_output = '';
						$newsimages_output .='<div class="coin_slider_container">';
						$newsimages_output .='<div id="coin_slider">';
						
						foreach ($newsimages as $newsimage)
						{
								$newsimage_title = $newsimage["title"];
								$newsimage_url= file_create_url($newsimage["uri"]);
								$newsimage_pic = '<img src="'.$newsimage_url.'"/>';
								
								$newsimages_output .='<a href="javascript:void(0);return false;">';
								$newsimages_output .=$newsimage_pic;
								$newsimages_output .='<span>'.$newsimage_title.'</span>';
								$newsimages_output .='</a>';
		
						} 
						$newsimages_output .='</div>';
						$newsimages_output .='</div>';
						print  $newsimages_output;
				
				}
				?>
			</center>
			<?php print render($content['body']);?>

			<?php print render($content['field_resource_attachments']);?>

		</div>							
	</div>
	<!--  文章内容 结束-->
	
<indexAreaEnd><!--  索引内容 结束 --></indexAreaEnd>

    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->
		

<?php print render($content['comments']); ?>