<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">
    <indexAreaStart><!--  索引内容 开始 --></indexAreaStart>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <?php print $user_picture; ?>
		    
    <?php if ($display_submitted): ?>
     <!-- <span class="submitted"><?php print $date; ?> — <?php print $name; ?></span> -->
    <?php endif; ?>

  	<div class="content">
  	  <?php 
  	    // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        //print render($content);
             $title = $node->title;        //标题
             if(isset( $node->body['zh-hans']))
                    $body = $node->body['zh-hans'][0]['value'];        //内容
             if(isset( $node-> field_jiaoxue_attach['zh-hans']))
                    $resources=$node->field_jiaoxue_attach;

       ?>
  	</div>

        <!--  文章内容 开始 -->
            <div class="jiaoxue">
                          <h1><?php print $title?></h1>
                          <div class="details">
                                         <?php print render($content['body']);?>                                       
                                         <?php print render($content['field_jiaoxue_attach']);?>
                                       
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
