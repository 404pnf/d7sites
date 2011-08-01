
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




// 产品章节和内容切换 js
$j(function(){
	var a = $j("#bookinfo .sel span").eq(0);
	var b = $j("#bookinfo .sel span").eq(1);
	var bookcontent = $j("#bookinfo .bookcontent")
	var bookdirectory = $j("#bookinfo .bookdirectory");
	b.removeClass("active");
	a.addClass("active")
	bookcontent.css({"display":"block"});
	bookdirectory.css({"display":"none"});
	
	a.click(function(){
		b.removeClass("active");
		a.addClass("active")
		bookcontent.css({"display":"block"});
		bookdirectory.css({"display":"none"});
	})
	b.click(function(){
		a.removeClass("active");
		b.addClass("active")
		bookdirectory.css({"display":"block"});
		bookcontent.css({"display":"none"});
	})	
});

// 产品列表排序 js
$j(function(){
	$j("#booklb_title a.active").css({"color":"#FFF"}).parent().css({"background":"#BA0006","font-weight":700,"line-height":"20px"});
	$j("#booklb_title a.active").parent().append($j("<span></span>"));
});


