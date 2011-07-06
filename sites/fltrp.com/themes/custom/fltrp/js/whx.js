var $j=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js
$j(function(){ 
	//alert('123');
	
	$j('#category_list .category_content .item-list h3').hover(
		function(){
			//$j('#category_list .hover_display').removeClass('hover_display');
			//$j('#category_list .hover').removeClass('hover');
			$j(this).addClass('hover');
			$j(this).next().addClass('hover_display');
		},
		function(){
			//$('#category_list .hover_display').removeClass('hover_display');
			//$('#category_list .hover').removeClass('hover');
			$j(this).removeClass('hover');
			$j(this).next().removeClass('hover_display');
		}
	);/**/
});