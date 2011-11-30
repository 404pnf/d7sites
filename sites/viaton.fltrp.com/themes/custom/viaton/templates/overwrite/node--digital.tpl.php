<link href="/static/css/shareto.css" media="all" rel="stylesheet" type="text/css">
<?php
// 数字产品详细页模版
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
//	print_r($node);
//	print ("</pre>");

		$nid = $node->nid;     
		$title = $node->title;        //图书名称
		$price = $node->field_digital_price['und'][0]['value'];        //价格
		//$eprice = $node->field_digital_dollar['und'][0]['value'];        //价格
	    $img = $node->field_digital_image['und'][0]['uri'];        //封面
		$img =file_create_url($img );        //封面
		$body = render($content['body']);     //简介    
       	$parameters = render($content['field_digital_parameters']);      //产品参数
		if(!empty($eprice))
		   $price =	'$'.$eprice;

		//$educations = $node->field_digital_education['und'];   

       ?>

<div class="products">		
						<div class="bookinfo">
							<img src="<?php print $img?>"   height="170" alt=""   class="fleft" />
							<h4><?php print $title?></h4>	
							<p>定价：￥<?php print $price?>	</p>
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
						</div><!-- /bookinfo -->



						<div id="con">
							<ul id="tags">
								<li class="selectTag"><a href="javascript:void(0)" onclick="selectTag('tagContent0',this)">产品简介</a></li>
								<li class=""><a href="javascript:void(0)" onclick="selectTag('tagContent1',this)">产品参数</a></li>
							</ul>
							<div id="tagContent">
								<div id="tagContent0" class="tagContent selectTag" style="display: block;"><?php print $body?></div>
								<div id="tagContent1" class="tagContent " style="display: none;"><?php print $parameters?></div>
							</div>
						</div> 	<!-- /con -->



   	</div><!-- /products-->
 	</div>	<!-- /content -->
    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>

<SCRIPT type="text/javascript" src="/static/js/contentSwitch.js"></SCRIPT>