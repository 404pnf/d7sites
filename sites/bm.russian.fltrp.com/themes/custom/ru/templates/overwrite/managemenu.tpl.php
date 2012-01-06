			<?php 
					global $user;
					$uid = $user->uid;

					$current_user_roles = $user->roles;

											
					if(in_array("学校",$current_user_roles)&&count ($current_user_roles)>1){
								$modulename = "menu";
								$delta ="menu-schoolmenu";
								$schoomenu_block = block_load($modulename ,$delta );
								$renderable_schoolmenu=  _block_get_renderable_array(_block_render_blocks(array($schoomenu_block)));
								print render($renderable_schoolmenu);
				
							}

					if(in_array("authenticated user",$current_user_roles)&&count ($current_user_roles)==1){
								$modulename = "menu";
								$delta ="menu-applicant-menu";
								$applicant_block = block_load($modulename ,$delta );
								$renderable_applicantmenu=  _block_get_renderable_array(_block_render_blocks(array($applicant_block)));
								print render($renderable_applicantmenu);
				
							}


				?>