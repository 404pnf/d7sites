var $j=jQuery.noConflict();  //将变量$的控制权让渡给prototype.js
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


