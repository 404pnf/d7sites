<link href="/static/css/bookinfoswitch.css" media="all" rel="stylesheet" type="text/css">
<link href="/static/css/shareto.css" media="all" rel="stylesheet" type="text/css">
<indexAreaStart></indexAreaStart>
	<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">
    
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <?php print $user_picture; ?>
		    
    <!--<?php if ($display_submitted): ?>
      <span class="submitted"><?php print $date; ?> — <?php print $name; ?></span>
    <?php endif; ?> -->

  	<div class="content">
  	  <?php 
  	    // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
     //   print render($content);
		//print ("<pre>");
		//print_r($node);
	//	print ("</pre>");
       $productlistUrl ='productslist/';   //此处修改系列图书链接
       $nid = $node->nid;     
		$title = $node->title;        //图书名称
		if(!empty($node->field_series['und'])){
     		$series = $node->field_series['und'][0]['taxonomy_term']->name;        //图书系列名称
	    	$seriestid = $node->field_series['und'][0]['taxonomy_term']->tid;   
		}
		$isbn = $node->field_isbn['und'][0]['value'];        //ISBN
		$author = $node->field_author['und'][0]['value'];        //作者名
		$format = $node->field_format['und'][0]['taxonomy_term']->name;        //开本
		$pages = $node->field_pages['und'][0]['value'];        //页数
		$zdfs = $node->field_zdfs['und'][0]['taxonomy_term']->name;;        //装订方式
		$publish_date= $node->field_publish_date['und'][0]['value'];        //发布日期
		$price = $node->field_price['und'][0]['value'];        //价格
	    $img = $node->field_img['und'][0]['uri'];        //封面
		$img =file_create_url($img );        //封面
		$body = $node->body['und'][0]['safe_value'];        //简介    
		if(!empty($node->field_directory['und']))
			$directory = $node->field_directory['und'][0]['safe_value'];        //目录    
		if(!empty($node->field_read_online['und']))
         	$read_online = $node->field_read_online['und'][0]['value'];        //在线阅读地址

		$educations = $node->field_education['und'];   
		$education_tids = '';
		$i=1;
		//print_r($educations);
		foreach($educations as $education)
		{
			if($i==1)
				$education_tids.=$education['tid'];
			else
			    $education_tids.='+'.$education['tid'];
            $i++;
		}

       ?>
  	</div>
  
	 <div id="bookinfo">
							<h1><?php print $title?></h1> 
							<div class="bookimg"><img src="<?php print $img?>" width="164" height="230" alt=""/></div>
							<?php if(!empty($series)){?>
							<p class="pfrist">系列名：<?php print l($series,$productlistUrl.$seriestid)?> </p>
							<?php }?>	
							<p>ISBN：<?php print $isbn?> </p>
							<p>著译者：<?php print $author?>  </p>
							<p>开本：<?php print $format?> 页数：<?php print $pages?> 页  </p>
							<p>出版日期：<?php print $publish_date?></p>
							<p>定价：<?php print $price?></p>
							
							<p class="buy fclear ">
						
                             <?php if (!empty($read_online)) :?>
								<a class="r" href="<?php print $read_online ;?>">在线阅读</a>
							<?php endif?>
							</p>
							
							<!--分享到----开始------>
							<div class="wrapper">
								<div id="share">
									<span>分享到:</span>

<!-- JiaThis Button BEGIN -->
<div id="ckepop">
     <a class="jiathis_button_tsina"></a>
     <a class="jiathis_button_renren"></a>
     <a class="jiathis_button_douban"></a>
     <a class="jiathis_button_kaixin001"></a>
     <a class="jiathis_button_tqq"></a>
     <a href="http://www.jiathis.com/share" class="jiathis jiathis_txt jiathis_separator jtico jtico_jiathis" target="_blank"></a>
     <a class="jiathis_counter_style"></a>
</div>
<script type="text/javascript" >
var jiathis_config={
        hideMore:false
}
</script>
<script type="text/javascript" src="http://v2.jiathis.com/code_mini/jia.js" charset="utf-8"></script>
<!-- JiaThis Button END -->


								</div>
							</div>
<!--分享到----结束--->							
							<p class="sel">
							<span>内容简介</span>
								<span>章节目录</span>
								</p>
							<div class="bookcontent">
								<?php print $body?>

							</div>

							<div class="bookdirectory">
								<?php print $directory?>

							</div>
							<indexAreaEnd></indexAreaEnd>
							<!--最佳组合开始-->
							<div id="bestgroup">
								<!--
								<a href="" class="fleft"></a>
								<a href="" class="fright"></a>
								-->
								<div class="srlist">
									<h3>最佳组合</h3>
						<?php
						if (!empty($seriestid)){
							$views_name = 'products';
	                        $display_id = 'recommended_series';
							$views_parameter1=$seriestid ;
							$views_parameter2=$nid ;						
						}else{
							$views_name = 'products';
	                        $display_id = 'recommended_education';
							$views_parameter1=$education_tids ;
							$views_parameter2=$nid ;
						}

						
						print views_embed_view($views_name, $display_id,$views_parameter1,$views_parameter2);
						 ?>
								</div>
							</div>
							<!--最佳组合结束-->
							
	  	</div>


    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>

<!--内容，章节目录切换-->
<SCRIPT type="text/javascript" src="/static/js/book.js"></SCRIPT>

	<!--//内容，章节目录切换-->
