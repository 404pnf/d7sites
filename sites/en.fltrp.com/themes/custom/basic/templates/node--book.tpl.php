<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
	<div class="node-inner">


    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

       <div class="content">
         <div class="english">
          <div class="fenlei_english">English</div>
          <div class="en_bookpart1">
              <div class="bookpic">               
                <?php print render($content['field_img']); ?>
                <div class="largerpic"><a href="#">See Larger Image</a></div>
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
                <div class="notice">Not for sale out the territory of the People's Republic of China. Any<br>
                                    requestof purchase please visit <a href="#">Links</a> 
                </div>
              </div>  
          </div>     
          <div class="en_bookpart2">
             <div class="english_content">
                    <div class="english_contents_title">CONTENTS:</div>
                    <?php if (strlen($node->field_directory['und'][0]['value'])>0): ?>
                          <?php print $node->field_directory['und'][0]['value'];?>
                    <?php else: ?>
                          <div class="engliash_none"><?php print "none"; ?></div>       
                    <?php endif; ?>
             </div>
             <div class="english_des">
                    <div class="english_des_title">DESRIPTION:</div>
                    <?php print $node->field_features['und'][0]['value'];?>
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
                          <div class="engliash_none"><?php //print "none"; ?></div>
                    <?php endif; ?>
             </div>       
             <div class="enlish_other_recommendation">
                    <div class="english_other_recommendation_title">OTHER RECOMMENDATION:</div>
                        <?php           
                             $output="";
                             $node_terms=taxonomy_node_get_terms($node , $key = 'tid');  
                             foreach($node_terms as $tid => $tmp_term){
                                  $output .= $tid.",";
                             }
                             $output=substr($output,0,strlen($output)-1);
                             $relate_ebook ='';
                             $relate_ebook =views_embed_view('book_recommendation','block_1',$node->nid,$output);
                             $relate_ebook = '<div class="ebook_none_mrelate">'.$relate_ebook.'</div>'; 
                        ?>
                   

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
