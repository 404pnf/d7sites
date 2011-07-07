$(function() {
   //return;
   if (1)
   {
       $('.shadow_light, .shadow_dark, .alignnone, .alignleft, .alignright, .aligncenter, .media_video').each(function() {
           if ( $.browser.msie && PIE && PIE.attach ) PIE.attach(this);
       });
   }
   else
   {
       if ( $.browser.msie ) $('.shadow_light, .shadow_dark, .alignnone, .alignleft, .alignright, .aligncenter, .media_video').css({
         'filter': "progid:DXImageTransform.Microsoft.Shadow(color='#cecfd0', Direction=45, Strength=2) progid:DXImageTransform.Microsoft.Shadow(color='#cecfd0', Direction=135, Strength=2) progid:DXImageTransform.Microsoft.Shadow(color='#cecfd0', Direction=225, Strength=2 progid:DXImageTransform.Microsoft.Shadow(color='#cecfd0', Direction=315, Strength=2)"
       });
   }
});

/*
   Image loading for portfolio
*/

var images   = new Array();
var im_count = 0;

function load_next()
{

   if (1)
   {
      //alert($.prettyPhoto)
      if ($.prettyPhoto && $(".gallery_item").length)
      {
         $(".gallery_item a.shadow_light").unbind();
         $(".gallery_item a.shadow_light").each(function () {
            $(this).unbind().attr("rel", "gal[g]")
               .attr("title",  $(this).parent().find("h4").children("a").text() );
         });
         $("a[rel=gal\\[g\\]]").prettyPhoto();
      }
   }

   if (!images[im_count])
   {
      return;
   }
   images[im_count].css({
      visibility: 'hidden',
      display: 'block'
   });
   im_count++;
}

function upd_photo()
{
   if ($.prettyPhoto && $(".gallery_item").length)
   {
      $(".gallery_item a.shadow_light").each(function () {
         //alert("!");
         $(this).unbind().prettyPhoto();
      });
   }
}

function loading(p) {
   $(p).each(function () {
   
      $(this).parent().click(function () {
         return false;
      });
   
      upd_photo();
   
      //if (e.get(0).complete) return;
      
      var e = $(this).clone();
      var e2 = $(this).clone();
      
      var w = 280;
      var h = 150;
      
      var n = $("<div></div>");
      var ee = $("<div></div>");
      n.css({
         'width':    w+"px",
         'height':   h+"px"
      });
      
      n.addClass('gallery_img');

      ee.css({
         'width':    w+"px",
         'height':   h+"px",
         position:  'absolute',
         top: 0,
         left: 0,
         background: "transparent url("+e.attr("src")+")"
      });

      e.css({
         position:  'absolute',
         top: 0,
         left: 0,
         //visibility: 'hidden',
         display: 'none'
      });
      
      images[images.length] = e;
      
      e.bind('load', function () {
         $(this).css('visibility', 'visible');
         $(this).parent().replaceWith(e2);
         e2.hide();
         e2.fadeIn(500);
         load_next();
      });
      
      var l = $("<div></div>");
      n.css({
         'width':    w+"px",
         'height':   h+"px",
         display:    'inline-block',
         background: '#fff url(data:image/gif;base64,R0lGODlhEAAQAOMIAAAAABoaGjMzM0xMTGZmZoCAgJmZmbKysv///////////////////////////////yH/C05FVFNDQVBFMi4wAwEAAAAh+QQBCgAIACwAAAAAEAAQAAAESBDJiQCgmFqbZwjVhhwH9n3hSJbeSa1sm5GUIHSTYSC2jeu63q0D3PlwCB1lMMgUChgmk/J8LqUIAgFRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+UKgmFqbpxDV9gAA9n3hSJbeSa1sm5HUMHTTcTy2jeu63q0D3PlwDx2FQMgYDBgmk/J8LqWPQuFRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+YSgmFqb5xjV9gQB9n3hSJbeSa1sm5EUQXQTADy2jeu63q0D3PlwDx2lUMgcDhgmk/J8LqUPg+FRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+cagmFqbJyHV9ggC9n3hSJbeSa1sm5FUUXRTEDy2jeu63q0D3PlwDx3FYMgAABgmk/J8LqWPw+FRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+QihmFqbZynV9gwD9n3hSJbeSa1sm5GUYXSTIDy2jeu63q0D3PlwDx3lcMgEAhgmk/J8LqUPAOBRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+UqhmFqbpzHV9hAE9n3hSJbeSa1sm5HUcXTTMDy2jeu63q0D3PlwDx0FAMgIBBgmk/J8LqWPQOBRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+YyhmFqb5znV9hQF9n3hSJbeSa1sm5EUAHQTQTy2jeu63q0D3PlwDx0lEMgMBhgmk/J8LqUPgeBRhV6z2q0VF94iJ9pOBAAh+QQBCgAPACwAAAAAEAAQAAAESPDJ+c6hmFqbJwDV9hgG9n3hSJbeSa1sm5FUEHRTUTy2jeu63q0D3PlwDx1FIMgQCBgmk/J8LqWPweBRhV6z2q0VF94iJ9pOBAA7) no-repeat '+((w-16)/2)+'px '+((h-16)/2)+'px'
      });
      
      n.append(l);
      n.append(e);
      //n.append(ee);
      
      $(this).replaceWith(n);
      
      upd_photo();
      
   });
   
   load_next();
}

/*
   Update events
*/

function upd_ev()
{
   $("[placeholder]").each(function () {
      $(this).val( $(this).val().replace( $(this).attr("placeholder"), '' ) );
      $(this).unbind().placeholder();
   });
   $("form .go_submit, form .go_add_comment").unbind().click(function () {
      $(".do_clear").click();
      var e=$(this).parents("form");
      e.find("input, textarea").each(function () {
         $(this).unbind();
         $(this).val( $(this).val().replace( $(this).attr("placeholder"), "" ) );
      });
      if (!e.attr("valed")) e.validationEngine();
      e.attr("valed", "1");
      e.submit(); 
      e.find("input, textarea").each(function () {
         $(this).placeholder();
      });      
      return false;
   });
   $("form .do_clear").unbind().click(function () {
      $(this).parents("form").find("input, textarea").each(function () {
         $(this).val("").unbind().placeholder();
      });
      $(".formError").remove();
      
      if ($(this).attr("remove") && !$(this).parents("#form_prev_holder").length) 
      {
         move_form_to( $("#form_prev_holder") );
         $("#form_holder .do_clear").removeAttr('remove');
      }
      
      return false;
   });
}

/*
   Move comments form
*/

function move_form_to(ee)
{
      var e = $("#form_holder").html();
      var tt = $("#form_holder .header").text();
      $("#form_holder").slideUp(500, function () {
         $("#form_holder").remove();
         
         ee.append('<div id="form_holder">'+e+'</div>');
         $("#form_holder .header").html(tt);
         $("#form_holder [valed]").removeAttr('valed');
         $("#form_holder .do_clear").attr('remove', 1);
         
         if (is_day)
         {
            Cufon('#form_holder .header', {
	            color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
            });
         }
         else
         {
            Cufon('#form_holder .header', {
	            color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
            });
         }
         
         $(".formError").remove();
         
         $("#form_holder").hide().slideDown(500);
         
         upd_ev();
      });
}

$(document).ready(function() {

   loading(".gallery_item .gallery_img");

   $(".comment .comments").click(function () {
   
      move_form_to( $(this).parent().parent() );
      
      return false;
   });

   /* 
      Form validation
   */
   
   upd_ev();
   
   /* 
      Cufon hover color fix
   */
   
   var tout = new Array();
   var the_elem;
   var the_elem2;
   var n=0;
   $("#nav > li").each(function () {
      $(this).find("a:eq(0)").attr("id", "m"+(++n));
   });
   $("#nav > li").mouseover(function () {
      var dd = $(this).find("a:eq(0)").attr("id");
      if (is_day)
      {
         Cufon.replace('#'+dd, {
		       color: '-linear-gradient(#414141, #606060)', textShadow: '1px 1px #fff'
         });
      }
      else
      {
         Cufon.replace('#'+dd, {
		       color: '-linear-gradient(#b0b5b8, 0.4=#b0b5b8, 0.6=#e8eaeb, #fff)', textShadow: '1px 1px #000'
         });
      }
      if ( tout[dd] ) clearTimeout( tout[dd] );
      the_elem = $(this);
      tout[dd] = setTimeout(function () {
         if (the_elem.find("div").is(":visible")) return;
         //window.console.log("show");
         $("#nav > li > div").hide();
         if ($.browser.msie)
         {
            the_elem.find("div").css({
               display: 'block',
               opacity: 1,
               top: '20px'
            });   
            the_elem.find("div")[0].style.removeAttribute('filter');
            return;
         }
         the_elem.find("div").css({
            display: 'block',
            opacity: 0,
            top: '30px'
         }).animate({
            opacity: 1,
            top: '20px'
         }, {
            duration: 200,
            queue: false,
            complete: function () {
               if ($.browser.msie) this.style.removeAttribute('filter');               
            }
         });
      }, 200);
   });
   $("#nav > li").mouseout(function () {
      if (is_day)
      {
         Cufon.replace('#'+$(this).find("a:eq(0)").attr("id"), {
	         color: '-linear-gradient(#272727, #1d1d1d)', textShadow: '1px 1px #fff'
         });
      }
      else
      {
         Cufon.replace('#'+$(this).find("a:eq(0)").attr("id"), {
	         color: '-linear-gradient(#fff, 0.4=#e8eaeb, 0.6=#b0b5b8, #b0b5b8)', textShadow: '1px 1px #000'
         });
      }
      //window.console.log("hide");
      the_elem2 = $(this);
      var dd = $(this).find("a:eq(0)").attr("id");
      if ( tout[dd] ) clearTimeout( tout[dd] );
      tout[dd] = setTimeout(function () {
         the_elem2.find("div:eq(0)").hide();
      }, 100);
   });
      
   /*
      End: Ñ†Ð²ÐµÑ‚ Ð¼ÐµÐ½ÑŽ
   */

});

if (is_day)
{
   Cufon('#nav > li > a', {
	   color: '-linear-gradient(#272727, #1d1d1d)', textShadow: '1px 1px #fff'/*,
	   hover: {
		   color: '-linear-gradient(#414141, #606060)', textShadow: '1px 1px #fff'
	   }
	   */
   });

   Cufon('#about', {
	   color: '-linear-gradient(#272727, #1d1d1d)', textShadow: '1px 1px #fff'
   });

   Cufon('h1, h2, h3, h4, h5, h6, .quote_author', {
	   color: '-linear-gradient(#282828, #1d1d1d)', textShadow: '1px 1px #fff'
   });

   Cufon('.post_type div, .post_type span, .header', {
	   color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
   });

   Cufon('#footer .header', {
	   color: '-linear-gradient(#3f3f3f, #707375)', textShadow: '-1px -1px #000'
   });

   Cufon('.slot ul li a h4', {
	   color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
   });
}
else
{
   Cufon('#nav > li > a', {
	   color: '-linear-gradient(#fff, 0.4=#e8eaeb, 0.6=#b0b5b8, #b0b5b8)', textShadow: '1px 1px #000'
	   /*,
	   hover: {
		   color: '-linear-gradient(#b0b5b8, 0.4=#b0b5b8, 0.6=#e8eaeb, #fff)', textShadow: '1px 1px #000'
	   }
	   */
   });

   Cufon('#about', {
	   color: '-linear-gradient(#fff, 0.4=#e8eaeb, 0.6=#b0b5b8, #b0b5b8)', textShadow: '1px 1px #000'
   });

   Cufon('h1, h2, h3, h4, h5, h6, .quote_author', {
	   color: '-linear-gradient(#282828, #1d1d1d)', textShadow: '1px 1px #fff'
   });

   Cufon('.post_type div, .post_type span, .header', {
	   color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
   });

   Cufon('#footer .header', {
	   color: '-linear-gradient(#3f3f3f, #707375)', textShadow: '-1px -1px #000'
   });
}

/*
   Slider for main page
*/

$(document).ready(function() {

   if (!$(".slot").length) return;

   // 320x190
   // 260x155
   //return;
   //var sl_speed=500;
   //var sl_speed=800;
   var sl_speed=slider_settings.speed;
   var sl_timeout=60000;
   var sl_speed_fout=300;
   
   var first_run=true;

   var n = 1;
   $(".slot ul").each(function () {
      $(this).attr("id", "k"+(n++)).addClass('cycle');
   });

   /*
   n = 1;
   $(".slot").each(function () {
      $(this).attr("id", "s"+(n++));
   });
   */

   $("#k1, #k2, #k3").each(function () {
      $(this).html("");
   });
   
   var nn = 1;
   
   $("#slides").children().each(function () {
      $(this).attr("id", "for_sl_"+nn);
      var e=$(this).clone();
      e.find("a").hide();
      e.find("a").html('');
      
      e.attr("id", 'sl_'+nn);
      
      nn++;
      
      e.find("img").attr("width", 320);
      e.find("img").attr("height", 190);
      $("#k2").append(e.clone());
      e.find("img").attr("width", 260);
      e.find("img").attr("height", 155);
      e.find("img").attr("src", e.find("img").attr("src").replace('320x190', '260x155'));
      $("#k1").append(e);
      $("#k3").append(e.clone());
   });

   $("#k1, #k2, #k3").each(function () {
      var n=parseInt($(this).attr('id').substring(1));
      var e=$("#k"+n).children();
      $(e[n-1]).css({
         'z-index': '999',
         'position': 'absolute',
         'left': 0
      });
   });
   
   //alert("?");
   
   //return;
   
   $(".slot .desc").each(function () {
      $(this).css({
         opacity: 0,
         visibility: 'visible'
      });
      $(this).hover(function () {
         if ($.browser.msie)
         {
            $(this).css('opacity', 1);
            this.style.removeAttribute('filter');
            return;
         }
         $(this).animate({
            opacity: 1
         }, {
            duration: 300,
            queue: false,
            complete: function () {
               if ($.browser.msie) this.style.removeAttribute('filter');
            }
         });
      }, function () {
         if ($.browser.msie)
         {
            $(this).css('opacity', 0); return;
         }
         $(this).animate({
            opacity: 0
         }, {
            duration: 300,
            queue: false,
            complete: function () {
               //if ($.browser.msie) this.style.removeAttribute('filter');
            }
         });
      });
   });
   
   //return;
   
   //return;
   
   /*
   alert($("#k1").html());
   alert($("#k2").html());
   alert($("#k3").html());
   */

   //return;

   if ($("#slides").children().length == 1)
   {
      //return;
   }

   //return;
   
   var f_run = 0;

   $(".cycle").each(function () {
      var n=parseInt($(this).attr('id').substring(1));
      //alert(n);
      var st=0;
      if (n==2) st=0;
      if (n==3) st=$(this).find("a").length-1;
      if (n==1) st=1;
      //st++;
      var o={
       w:      320,
       startZindex: 10,
       fx:     'scrollHorz', 
       speed:   sl_speed,
       timeout: 0,
       startingSlide: st,
       //easing: 'easeOutExpo',
       easing: slider_settings.easing,
       selector: '',
       oneAfterAnother: slider_settings.oneAfterAnother,
       //continuous: true,
       fit: false,
       pager: '#slider_dots',
       next: ".right",
       prev: ".left",
       cssAfter: {
         left: 0
       },
       after: function (currSlideElement, nextSlideElement, options) {
         var a=$(nextSlideElement);
         var b=$(currSlideElement);
         a.css({left: 0});
         b.css({left: 0});
       },
       before: function (currSlideElement, nextSlideElement, options, forwardFlag) {
          if (options.nextSlide==options.currSlide && $("#slides").children().length!=1) return;
          var ee = "slot_";
          if (o.second) ee+="center";
          else if (o.third) ee+="right";
          else ee += "left";
          //alert( $(nextSlideElement).attr("id") );
          var hh = $("#for_" + $(nextSlideElement).attr("id")).find("a").html();
          var hhh = $("#for_" + $(nextSlideElement).attr("id")).find("a").attr("href");
          var hht = $("#for_" + $(nextSlideElement).attr("id")).find("h4").text();
          //alert(hh);
          f_run++;
          if (f_run == 4) return;
          //alert(ee+": "+hht);
          $("#"+ee).children(".desc").attr( "href", hhh );
          $("#"+ee).children(".desc").html( hh );
          $("#"+ee).children(".desc").find("h4").html( hht );
          
          if (is_day)
          {
            Cufon('.desc h4', {
               color: '-linear-gradient(#fff, 0.4=#e8eaeb, #b0b5b8)', textShadow: '1px 1px #000'
            });
          }
          else
          {
            Cufon('.desc h4', {
               color: '-linear-gradient(#282828, #1d1d1d)', textShadow: '1px 1px #f0f0f0'
            });
          }
       }
      };
      if (n==2) o.second=1;
      if (n==3) o.third=1;
      $(this).cycle(o);
   });
   $(".cycle:eq(0)").cycle('pager');
   $(".desc").click(function () {
      window.location.href = $(this).attr("href");
      return false;
   });

});
