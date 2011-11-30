
//大选项卡切换功能
$(document).ready(function(){
	$artics = $(".artics");
	$tabli = $(".newtabs li");
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


//小内部选项卡切换功能
$(document).ready(function(){
	$oc = $(".oc");
	$tablis = $(".othertab li");
	$oc.css({"display":"none"});
	$tablis.removeClass("active");
	$oc.eq(0).css({"display":"block"});
	$tablis.eq(0).addClass("active");
	$tablis.each(function(index){
		$(this).click(function(){
			$tablis.removeClass("active");
			$(this).addClass("active");
			$oc.css({"display":"none"});
			$oc.eq(index).css({"display":"block"});
		});
	});
})
