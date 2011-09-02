<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">

    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

       <div class="content">
         <div class="english">
              <div class="fenlei fenlei_english">English</div>
			  <div class="book_content">
				  <div class="bookpart1">
					  <div class="bookpic">               
						<?php print render($content['field_img']); ?>
						<div class="largerpic"><a href="#">See Larger Image</a></div>
										<?php $add_to_cart =drupal_get_form('uc_product_add_to_cart_form_' . $node->nid, $node);print  drupal_render($add_to_cart) ?>
					  </div>
					  <div class="bookinfo">
						<strong>Book name:<?php print $node->field_ebname['und'][0]['value']; ?></strong><br>
						<strong>ISBN: </strong><?php print $node->field_isbn['und'][0]['value'];?><br>
						<strong>CP No:</strong><?php ?><?php print $node->field_materielno['und'][0]['value'];?><br>
						<strong>Author:</strong><?php print $node->field_english_author['und'][0]['value'];?><br>
						<strong>Dimensions:</strong><?php print $node->field_english_dimensions['und'][0]['value'];?><br>
						<strong>Pages:</strong><?php print $node->field_pages['und'][0]['value'];?><br>
						<strong>Weight:</strong><?php print $node->field_weight['und'][0]['value'];?><br>
						<strong>Publishing Date:</strong><?php print $node->field_publish_date['und'][0]['value'];?><br>
						<strong>Components:</strong><?php print $node->field_components['und'][0]['value'];?><br>
						<div class="notice"></div>
					  </div>  
				  </div>     
				  <div class="bookpart2">
					 <div class="english_content">
							<div class="english_contents_title">CONTENTS:</div>
								  <div class="engliash_none"></div>       
					 </div>
					 <div class="english_des">
							<div class="english_des_title">DESRIPTION:</div>
							<div class="english_des_content"><?php print $node->field_features['und'][0]['value'];?></div>
					 </div>
					 <div class="engliash_preview">
							<div class="engliash_preview_title"> SAMPLE PREVIEW:</div>
							<?php if (strlen($node->field_sample['und'][0]['value'])>0): ?>
								  <?php print $node->field_sample['und'][0]['value'];?>
							<?php else: ?>
								  <div class="engliash_none"><?php print "none"; ?></div>
							<?php endif; ?>                  
					 </div>
					 <div class="english_about_author">
							<div class="english_about_author_title">ABOUT THE AUTHOR:</div>
							<?php if (strlen($node->field_english_author_info['und'][0]['value'])>0): ?>
								  <?php print $node->field_english_author_info['und'][0]['value'];?>
							<?php else: ?>
								  <div class="engliash_none"><?php print "none"; ?></div>
							<?php endif; ?>
					 </div>
				 <div class="enlish_consider">
							<div class="english_consider_title">CONSIDER THESE TITLE:</div>
							<?php    
								   $output= $node->field_series['und'][0]['tid'];
					   
								   $relate_series =views_embed_view('book_recommendation','block_4',$output);
								   $relate_series= '<div class="book_none_mrelate">'.$relate_series.'</div>'; 
								   print $relate_series;
					?>
				 </div>
					 <div class="enlish_other_recommendation">
							<div class="english_other_recommendation_title">OTHER RECOMMENDATION:</div>
							  <?php  
									 $output=$node->field_en_fenlei['und'][0]['tid'];
									 $relate_book =views_embed_view('book_recommendation','block_3',$output);
									 $relate_book= '<div class="book_none_mrelate">'.$relate_book.'</div>'; 
									 print $relate_book;
					?>
				 </div>
						   
		
				  </div> 
			</div>
         </div>
	
	 
         <div class="chinese">
			  <div class="fenlei fenlei_chinese">中文</div>
			  <div class="book_content">
				  <div class="bookpart1">
					  <div class="bookpic">               
						<?php print render($content['field_img']); ?>
						<div class="largerpic"><a href="#">See Larger Image</a></div>
					  </div>
					  <div class="bookinfo">
						<strong>图书:<?php print $node->title; ?></strong><br>
						<strong>ISBN: </strong><?php print $node->field_isbn['und'][0]['value'];?><br>
						<strong>CP No:</strong><?php ?><?php print $node->field_materielno['und'][0]['value'];?><br>
						<strong>作者:</strong><?php print $node->field_author['und'][0]['value'];?><br>
						<strong>尺寸:</strong><?php print $node->field_english_dimensions['und'][0]['value'];?><br>
						<strong>页数:</strong><?php print $node->field_pages['und'][0]['value'];?><br>
						<strong>重量:</strong><?php print $node->field_weight['und'][0]['value'];?><br>
						<strong>出版日期:</strong><?php print $node->field_publish_date['und'][0]['value'];?><br>
						<strong>配套产品:</strong><?php print $node->field_components['und'][0]['value'];?><br>
						<div class="notice"></div>
					  </div>  
				  </div>     
				  <div class="bookpart2">
					 <div class="english_content">
							<div class="english_contents_title">目录:</div>
							<?php if (strlen($node->field_directory['und'][0]['value'])>0): ?>
								  <?php print $node->field_directory['und'][0]['value'];?>
							<?php else: ?>
								  <div class="engliash_none"><?php print "暂时没有相关目录"; ?></div>       
							<?php endif; ?>
					 </div>
					 <div class="english_des">
							<div class="english_des_title">图书简介：</div>
							<div class="english_des_content"><?php print $node->body['und'][0]['value'];?></div>
					 </div>
					 <div class="engliash_preview">
							<div class="engliash_preview_title">精彩样张:</div>
							<?php if (strlen($node->field_sample['und'][0]['value'])>0): ?>
								  <?php print $node->field_sample['und'][0]['value'];?>
							<?php else: ?>
								  <div class="english_none"><?php print "none"; ?></div>
							<?php endif; ?>                  
					 </div>
					 <div class="english_about_author">
							<div class="english_about_author_title">关于作者:</div>
							<?php if (strlen($node->field_author_info['und'][0]['value'])>0): ?>
								  <?php print $node->field_author_info['und'][0]['value'];?>
							<?php else: ?>
								  <div class="engliash_none"><?php print "none"; ?></div>
							<?php endif; ?>
					 </div>
				 <div class="enlish_consider">
							<div class="english_consider_title">相关图书:</div>
							<?php    
								   $output= $node->field_series['und'][0]['tid'];			   
								   $relate_series =views_embed_view('book_recommendation','block_2',$output);
								   $relate_series= '<div class="book_none_mrelate">'.$relate_series.'</div>'; 
								   print $relate_series;
					?>
				 </div>
					 <div class="enlish_other_recommendation">
							<div class="english_other_recommendation_title">推荐图书:</div>
							   <?php          
									 $output=$node->field_en_fenlei['und'][0]['tid'];
									 $relate_book =views_embed_view('book_recommendation','block_1',$output);
									 $relate_book= '<div class="book_relate">'.$relate_book.'</div>'; 
									 print $relate_book;
					?>
						   
		
				  </div> 
				 </div>
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

<!--专为切换效果，写的js,css放在了enfltrp.css中-->
<script>
	$j = jQuery.noConflict();
	$j(function(){
		$j('.fenlei').click(function(){
			$j('.on').removeClass('on');
			$j(this).addClass('on');
			$j('.display_this').removeClass('display_this');
			$j(this).next('.book_content').addClass('display_this');
		});
		$j('.english .fenlei').click();
	});

</script>
