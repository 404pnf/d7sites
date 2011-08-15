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

     // print "<pre>";
 //print_r($node);
		 //  print "</pre>";

        $famous_style ='famous_list';
		$title = $node->title;        //标题
		if(isset( $node->field_famous_works['zh-hans']))
			$famous_works = $node->field_famous_works['zh-hans'][0]['value'];        //主要作品
		if(isset( $node->field_famous_pingjia['zh-hans']))
			$famous_pingjia = $node->field_famous_pingjia['zh-hans'][0]['value'];        //学术文化成就
		$publish_date= date ('Y-m-d',$node->created);        //发布日期
		$body = $node->body['zh-hans'][0]['value'];        //内容    
		$newsimages=array();
		if(isset( $node->field_famous_photo['zh-hans'])){		
		   $famous_photo = $node->field_famous_photo['zh-hans'][0]['uri'];
			$famous_photo_url = image_style_url($famous_style,$famous_photo);
			$famous_photo_pic = '<img src="'.$famous_photo_url.'"/>';
		}
       ?>
  	</div>
  	

	<!--  名人沙龙 开始 -->

          <div class="salon">
						<h4 class="salontitle"><?php print $title?></h4>
						<div class="person info">
							<?php print $famous_photo_pic ?> 
							<p><?php print render($content['body']);?>
							</p>
						</div>
						<div class="infolist">
							<h3>主要作品</h3>
							<p><?php print $famous_works?></p>
						</div>
						<div class="infolist">
							<h3>学术文化成就</h3>
							<p><p><?php print $famous_pingjia?></p></p>
						</div>
			</div>
	<!--  名人沙龙 结束-->




    <?php if (!empty($content['links']['terms'])): ?>
      <div class="terms"><?php print render($content['links']['terms']); ?></div>
    <?php endif;?>
  	
    <?php if (!empty($content['links'])): ?>
	    <div class="links"><?php print render($content['links']); ?></div>
	  <?php endif; ?>
        
	</div> <!-- /node-inner -->
</div> <!-- /node-->

<?php print render($content['comments']); ?>

