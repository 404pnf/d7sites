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
		//print_r($node);
	//	print ("</pre>");

		$nid = $node->nid;     
		$title = $node->title;        //图书名称
		$price = $node->field_digital_price['und'][0]['value'];        //价格
	    $img = $node->field_digital_image['und'][0]['uri'];        //封面
		$img =file_create_url($img );        //封面
		$body = $node->body['und'][0]['safe_value'];        //简介    


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
	   <div id="bookinfo">
							<h1><?php print $title?></h1>
							<div class="bookimg"><img src="<?php print $img?>" width="164" height="230" alt=""/></div>
							<p>定价：<?php print $price?></p>
							
							
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
							</p>
							<div class="bookcontent">
								<?php print $body?>

							</div>

				
							
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