		   <!--产品分类 -->

			<div class="row eborder">
				<h2>图书</h2>
				<div class="row">
					<?php
			             $views_name = 'category';
                        $display_id = 'block_1';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
				<h2>期刊杂志</h2>
				<div class="row">
					<?php
			             $views_name = 'category';
                        $display_id = 'block';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
				<h2>数字产品</h2>
				<div class="row">
					<?php
			             $views_name = 'category';
                        $display_id = 'block_2';
                         print views_embed_view($views_name, $display_id);
                        ?>
			 
				 </div>
			  </div>
				  <!--/产品分类 -->	