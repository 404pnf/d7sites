
var $j=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js
$j(function(){ 
	
	var tid = $j.query.get('category'); 
	
	$j('#category_list .category_content .item-list li a.isactive').parents('.item-list').addClass('fore');
	
	$j('#category_list .category_content .item-list h3 a:[href=/productslist?category='+tid+']').parents('.item-list').addClass('fore');
	
	
	
	
	$j('#category_list .category_content .item-list').each(function(event){
	
		if(!$j(this).hasClass('fore')){
			
			$j(this).children('h3').hover(
				function(){
					$j('#category_list .hover_display').removeClass('hover_display');
					$j('#category_list .hover').removeClass('hover');
					$j(this).addClass('hover');
					$j(this).next().addClass('hover_display');
				},
				function(){
					//$('#category_list .hover_display').removeClass('hover_display');
					//$('#category_list .hover').removeClass('hover');
					$j(this).removeClass('hover');
					$j(this).next().removeClass('hover_display');
				}
			);
			
			$j(this).children('ul').hover(
				function(){
					$j('#category_list .hover_display').removeClass('hover_display');
					$j('#category_list .hover').removeClass('hover');
					$j(this).prev('h3').addClass('hover');
					$j(this).addClass('hover_display');
				},
				function(){
					//$('#category_list .hover_display').removeClass('hover_display');
					//$('#category_list .hover').removeClass('hover');
					$j(this).prev('h3').removeClass('hover');
					$j(this).removeClass('hover_display');
				}
			);
			
			
		}
		
	});
	
	

	
});