<indexAreaStart><!--  索引内容 开始 --></indexAreaStart>

<link href="/static/js/coin-slider/coin-slider-styles.css" media="all" rel="stylesheet" type="text/css">
<link href="/static/css/shareto.css" media="all" rel="stylesheet" type="text/css">
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
	//	 print_r($node);
		//   print "</pre>";


		$title = $node->title;        //新闻标题
		if(isset( $node->field_news_author['und']))
			$author = $node->field_news_author['und'][0]['value'];        //作者名
		if(isset( $node->field_news_from['und']))
			$from = $node->field_news_from['und'][0]['value'];        //来源
		$publish_date= date ('Y-m-d',$node->created);        //发布日期
		if(isset( $node->body['zh-hans']))
			$body = $node->body['zh-hans'][0]['value'];        //内容    
	       ?>
  	</div>
  	

	<!--  文章内容 开始 -->
		<div class="artics">
			<h1 ><?php print $title?></h1>
			<div class="ptext">
				
			<?php print render($content['body']);?>
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