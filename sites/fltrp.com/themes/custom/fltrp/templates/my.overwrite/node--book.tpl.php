<?php
// 图书产品详细页模版
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
		$series = $node->field_series['und'][0]['taxonomy_term']->name;        //图书系列名称
		$tid = $node->field_series['und'][0]['taxonomy_term']->tid;   
		$isbn = $node->field_isbn['und'][0]['value'];        //ISBN
		$author = $node->field_author['und'][0]['value'];        //作者名
		$format = $node->field_format['und'][0]['taxonomy_term']->name; ;        //开本
		$pages = $node->field_pages['und'][0]['value'];        //页数
		$zdfs = $node->field_zdfs['und'][0]['taxonomy_term']->name;;        //装订方式
		$publish_date= $node->field_publish_date['und'][0]['value'];        //发布日期
		$price = $node->field_price['und'][0]['value'];        //价格
	    $img = $node->field_img['und'][0]['uri'];        //封面
		$img =file_create_url($img );        //封面
		$body = $node->body['und'][0]['safe_value'];        //简介    
		$directory = $node->field_directory['und'][0]['safe_value'];        //目录    
		
       ?>
	   <div id="bookinfo">
							<h1><?php print $title?></h1>
							<div class="bookimg"><img src="<?php print $img?>" width="164" height="230" alt=""/></div>
							<?php if(!empty($series)){?>
							<p class="pfrist">系列名：<?php print $series?> </p>
							<?php }?>	
							<p>ISBN：<?php print $isbn?> </p>
							<p>著译者：<?php print $author?>  </p>
							<p>开本：<?php print $format?> 页数：<?php print $pages?> 页  </p>
							<p>出版日期：<?php print $publish_date?></p>
							<p>定价：<?php print $price?></p>
							
							<p class="buy fclear ">
						
								<a href=""><img src="images/b.gif" /></a>
								<a href=""><img src="images/r.gif" /></a>
							
							</p>
							
							<!--分享到----开始------>
							<div class="wrapper">
								<div id="share">
									<span>分享到:</span>
<style>
span.stico_tqq{
	background-position:0 -592px;
}
</style>

<!-- ShareTo Button BEGIN -->
<div class="shareto_toolbox">
<a class="shareto_button_tsina"></a>
<a class="shareto_button_renren"></a>
<a class="shareto_button_douban"></a>
<a class="shareto_button_kaixin001"></a>
<a class="shareto_button_tqq"></a>
</div>

<script type="text/javascript" src="http://s.shareto.com.cn/js/shareto_button.js" charset="utf-8"></script>
<!-- ShareTo Button END -->

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
							
							<!--最佳组合开始-->
							<div id="bestgroup">
								<!--
								<a href="" class="fleft"></a>
								<a href="" class="fright"></a>
								-->
								<div class="srlist">
									<h3>最佳组合</h3>
						<?php
			             $views_name = 'products';
                        $display_id = 'block_2';
						$views_parameter1=$tid ;
						$views_parameter2=$nid ;
		                print views_embed_view($views_name, $display_id,$views_parameter1,$views_parameter2);
						 ?>
								</div>
							</div>
							<!--最佳组合结束-->
							
						</div>
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