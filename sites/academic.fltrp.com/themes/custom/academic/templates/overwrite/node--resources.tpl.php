<link href="/static/js/coin-slider/coin-slider-styles.css" media="all" rel="stylesheet" type="text/css">
<link href="/static/css/shareto.css" media="all" rel="stylesheet" type="text/css">
<indexAreaStart></indexAreaStart>
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

       //  print "<pre>";
	///	 print_r($node);
		 //  print "</pre>";


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
			
		if(isset( $node->field_resource_attachments['zh-hans']))
			 $attachments=$node->field_resource_attachments;
			

       ?>
  	</div>
  	

	<!--  文章内容 开始 -->
		<div class="article">
			<h1 class="articletitle"><?php print $title?></h1>
			<span class="articledate"><?php print $publish_date?></span>
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
						$news_image_style="news";
						foreach ($newsimages as $newsimage)
						{
								$newsimage_title = $newsimage["title"];
								//$newsimage_url= file_create_url($newsimage["uri"]);
								$newsimage_url = image_style_url($news_image_style, $newsimage["uri"]);
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
	<indexAreaEnd></indexAreaEnd>



    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>

<SCRIPT type="text/javascript" src="/static/js/coin-slider/coin-slider.min.js"></SCRIPT>
<script>
	var $j=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js
	$j(function(){
		 $j('#coin_slider').coinslider({
            width: 400,//设置的宽度等于容器的宽度
            height: 268,//设置的高度等于容器的高度
            delay: 3000,//图片切换延迟
            effect: "rain",//可以选4种切换效果，'random', 'swirl', 'rain', 'straight'，不写则为随机效果
            navigation: true,//是否开启数字导航
            links: false //是否对图片开启超链接
        });
        
        $j('#coin-slider-coin_slider').width($j('#coin_slider').width());
	});
</script>