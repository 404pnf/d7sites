<style media="all" type="text/css">@import url("http://new.fltrp.com/sites/fltrp.com/themes/custom/fltrp/css/whx.css");</style>
<script src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/js/whx.js" type="text/javascript"></script>
<script src="http://new.fltrp.com/sites/new.fltrp.com/themes/custom/fltrp/js/jquery.getURLparam.js" type="text/javascript"></script>




		   <!--产品分类 -->

			<div id="category_list" class="row eborder">
				<h2>图书</h2>
				<div class="category_content">
					<?php
			             $views_name = 'category';
                        $display_id = 'block_1';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
				<h2>期刊杂志</h2>
				<div class="category_content">
					<?php
			             $views_name = 'category';
                        $display_id = 'block';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
				<h2>数字产品</h2>
				<div class="category_content">
					<?php
			             $views_name = 'category';
                        $display_id = 'block_2';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
			  </div>
				  <!--/产品分类 -->	