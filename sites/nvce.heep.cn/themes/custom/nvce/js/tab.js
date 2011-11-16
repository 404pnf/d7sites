
//选项卡切换功能
$(document).ready(function(){
	$artics = $(".artics");
	$tabli = $(".tab li");
	$artics.css({"display":"none"});
	$tabli.removeClass("active");
	$artics.eq(0).css({"display":"block"});
	$tabli.eq(0).addClass("active");
	$tabli.each(function(index){
		$(this).click(function(){
			$tabli.removeClass("active");
			$(this).addClass("active");
			$artics.css({"display":"none"});
			$artics.eq(index).css({"display":"block"});
		});
	});
})