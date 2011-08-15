
(function($){
$.fn.left_category=function(options){
	var settings=$.extend({
		a:'',
		b:'0'
	},options||{});
	var that=this;	
	
	
	//wrap_id = this.id;
	//alert(this.id);
	
	var active_tag = $(that).find('a.active');
	//
	if(active_tag.parent('h3').length>0)
		active_tag.parent('h3').next('ul.outul').attr('style','display:block');
	
	if(active_tag.parent('li').length>0)
		active_tag.parent('li').parent('ul.outul').attr('style','display:block');
}
	
})(jQuery);