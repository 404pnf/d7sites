<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">                                                                 
        <div class="node-inner">                                                                                                            
    <indexAreaStart><!--  索引内容 开始 --></indexAreaStart>                                                                                                                                        
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
           ?>
           <div class="expert_part1">
                
              <?php $img=$node->field_expert_image['zh-hans'][0]['uri'] ;?>
              <?php print theme('image',array('path'=> $img,));?>
              
           </div>
           <div class="expert_part2">
              <p><?php print $node->body['zh-hans'][0]['value']; ?></p>              
           </div>
        </div>                                                                                                                              
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