<html>
<head>
<title>Untitled Document</title>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<link href="default.css" rel="stylesheet" type="text/css">
<script language="JavaScript" type="text/JavaScript">
<!--
function MM_reloadPage(init) {  //reloads the window if Nav4 resized
  if (init==true) with (navigator) {if ((appName=="Netscape")&&(parseInt(appVersion)==4)) {
    document.MM_pgW=innerWidth; document.MM_pgH=innerHeight; onresize=MM_reloadPage; }}
  else if (innerWidth!=document.MM_pgW || innerHeight!=document.MM_pgH) location.reload();
}
MM_reloadPage(true);

function MM_findObj(n, d) { //v4.01
  var p,i,x;  if(!d) d=document; if((p=n.indexOf("?"))>0&&parent.frames.length) {
    d=parent.frames[n.substring(p+1)].document; n=n.substring(0,p);}
  if(!(x=d[n])&&d.all) x=d.all[n]; for (i=0;!x&&i<d.forms.length;i++) x=d.forms[i][n];
  for(i=0;!x&&d.layers&&i<d.layers.length;i++) x=MM_findObj(n,d.layers[i].document);
  if(!x && d.getElementById) x=d.getElementById(n); return x;
}

function MM_showHideLayers() { //v6.0
  var i,p,v,obj,args=MM_showHideLayers.arguments;
  for (i=0; i<(args.length-2); i+=3) if ((obj=MM_findObj(args[i]))!=null) { v=args[i+2];
    if (obj.style) { obj=obj.style; v=(v=='show')?'visible':(v=='hide')?'hidden':v; }
    obj.visibility=v; }
}
//-->
</script>
</head>

<body bgcolor="023F88" leftmargin="0" topmargin="0" onLoad="MM_showHideLayers('Layer1','','inherit','Layer2','','show')">
<table width="760" height="192" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <td width="141"><table width="100%" cellspacing="0" cellpadding="0">
        <tr>
          <td height="32" bgcolor="007FD8" class="up2"><div align="center" class="up1">05年辩论赛</div></td>
        </tr>
        <tr>
          <td height="32" bgcolor="2094E6">&nbsp;</td>
        </tr>
        <tr>
          <td height="32" bgcolor="38B5E8">&nbsp;</td>
        </tr>
        <tr>
          <td height="32" bgcolor="48CCED">&nbsp;</td>
        </tr>
        <tr>
          <td height="32" bgcolor="7ADAF2">&nbsp;</td>
        </tr>
        <tr>
          <td height="32" bgcolor="B8EBF8">&nbsp;</td>
        </tr>
      </table></td>
    <td><img src="img/ad001.gif" width="619" height="192"></td>
  </tr>
</table>
<table width="760" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr bgcolor="#FFFFFF">
    <td valign="top"><table width="96%" align="center" cellpadding="3" cellspacing="0">
        <tr> 
          <td><img src="img/lm003.gif" width="99" height="18"></td>
        </tr>
        <tr> 
          <td><div align="left"> 
              <p class="up1"> 
                <cfinclude template="news1col.cfm">
              </p>
            </div></td>
        </tr>
        <tr> 
          <td><select name="select" size="1">
              <option>== 活动赛事 ==</option>
            </select></td>
        </tr>
        <tr> 
          <td><select name="select2" size="1">
              <option> == 专项产品 ==</option>
            </select></td>
        </tr>
      </table></td>
    <td width="1" background="img/line01.gif"></td>
    <td width="269" valign="top"><table width="100%" align="right" cellpadding="8" cellspacing="0">
        <tr> 
          <td height="26" valign="baseline"><img src="img/lm001.gif" width="93" height="18"></td>
        </tr>
        <tr> 
          <td height="84" class="up1"> <table width="100%" class="tblSec10" align="center" cellspacing="0" border="0">
              <!--- 
	<tr><td class="tdSecTitle10"><a href="index.html">#rs.sname#</a></td></tr>
	 --->
              <cfquery name="rs" datasource="#sSysDsnName#">
              select cntno,sno,sname,simage,subject,subjectsub,subject3,brief,url,imgfile,imgpage,imgpos,layout,vorder,idate 
              from qryNews_pn where iimport<>'Y' and infirst=1 and sno in(28,29,30,31,32,33) order by idate desc,cntno desc 
              </cfquery>
              <cfoutput query="rs" startrow="1" maxrows="8"> 
                <cfset sUrl="newsdetail.cfm?iCntno=#rs.cntno#">
                <cfif trim(url) neq "">
                  <cfset sUrl=url>
                </cfif>
                <cfset sImgLink="">
                <cfif trim(rs.imgfile) neq "">
                  <cfset sImgLink="data/#year(rs.idate)#/#month(rs.idate)#/#rs.imgfile#">
                  <cfif FindNoCase("http://",imgfile,1) gt 0>
                    <cfset sImgLink="#imgfile#">
                  </cfif>
                </cfif>
                <tr> 
                  <td class="tdContent" style="height:22px;"> <cfif trim(rs.imgfile) neq "" and ListFind("A,M",rs.imgpage) gt 0>
                      <a href="#sUrl#" target="_blank" class="newsLink#rs.layout#"><img src="#sImgLink#" alt="#rs.Subject#"></a> 
                    </cfif> <cfif trim(rs.Subject) neq "">
                      · &nbsp;<a href="#sUrl#" target="_blank" class="linkzxzx" style="color:000000">#rs.Subject#</a> 
                    </cfif> 
                    <!--- 最新图标 --->
					</td>
                </tr>
              </cfoutput> 
              <cfquery name="rs" datasource="#sSysDsnName#">
              select cntno,sno,sname,simage,subject,subjectsub,subject3,brief,url,imgfile,imgpage,imgpos,layout,vorder,idate 
              from qryNews_pn 
              <cfif iNewsFilter eq 0>
                where infirst=1 
                <cfelseif	iNewsFilter gt 0>
                where idate>='#DateFormat(now()-iNewsFilter,sSysDateFormat)#' 
                <cfelse>
                where infirst=1 or idate>='#DateFormat(now()+iNewsFilter,sSysDateFormat)#' 
              </cfif>
              and layout=20 and sno=10 and iimport <>'Y' order by idate desc 
              </cfquery>
              <cfoutput query="rs" startrow="1" maxrows="6"> 
                <cfset sUrl="newsdetail.cfm?iCntno=#rs.cntno#">
                <cfif trim(url) neq "">
                  <cfset sUrl=url>
                </cfif>
                <cfset sImgLink="">
                <cfif trim(rs.imgfile) neq "">
                  <cfset sImgLink="data/#year(rs.idate)#/#month(rs.idate)#/#rs.imgfile#">
                  <cfif FindNoCase("http://",imgfile,1) gt 0>
                    <cfset sImgLink="#imgfile#">
                  </cfif>
                </cfif>
              </cfoutput> 
              <!--- <tr><td class="tdButton"><a href="newsmore.cfm?iSno=#rs.sno#" target="_blank" title="更多内容">更多++</a></td></tr> --->
            </table></td>
        </tr>
      </table></td>
    <td width="1" background="img/line01.gif"></td>
    <td width="269" valign="top"><table width="96%" align="center" cellpadding="8" cellspacing="0">
        <tr> 
          <td><img src="img/lm002.gif" width="94" height="18"></td>
        </tr>
        <tr> 
          <td class="up1">·新闻内容<br> <span class="lm">·新闻内容<br>
            ·新闻内容<br>
            ·新闻内容<br>
            ·新闻内容<br>
            ·新闻内容<br>
            ·新闻内容 <br>
            ·新闻内容<br>
            ·新闻内容 </span></td>
        </tr>
      </table></td>
  </tr>
</table>
<table width="760" border="0" align="center" cellpadding="0" cellspacing="0" bgcolor="#FFFFFF">
  <tr>
    <td>
<SCRIPT language=JavaScript1.2>
var scrollerwidth=760
var scrollerheight=80
var scrollerbgcolor='white'
//3000 miliseconds=3 seconds
var pausebetweenimages=3000
var slideimages=new Array()
slideimages[0]='<img src="img/ad002.gif">'
slideimages[1]='<img src="img/ad002.gif">'
//extend this list

///////Do not edit pass this line///////////////////////
     

if (slideimages.length>2)
i=2
else
i=0

function move1(whichlayer){
tlayer=eval(whichlayer)
if (tlayer.top>0&&tlayer.top<=5){
tlayer.top=0
setTimeout("move1(tlayer)",pausebetweenimages)
setTimeout("move2(document.main.document.second)",pausebetweenimages)
return
}
if (tlayer.top>=tlayer.document.height*-1){
tlayer.top-=5
setTimeout("move1(tlayer)",100)
}
else{
tlayer.top=scrollerheight
tlayer.document.write(slideimages[i])
tlayer.document.close()
if (i==slideimages.length-1)
i=0
else
i++
}
}

function move2(whichlayer){
tlayer2=eval(whichlayer)
if (tlayer2.top>0&&tlayer2.top<=5){
tlayer2.top=0
setTimeout("move2(tlayer2)",pausebetweenimages)
setTimeout("move1(document.main.document.first)",pausebetweenimages)
return
}
if (tlayer2.top>=tlayer2.document.height*-1){
tlayer2.top-=5
setTimeout("move2(tlayer2)",100)
}
else{
tlayer2.top=scrollerheight
tlayer2.document.write(slideimages[i])
tlayer2.document.close()
if (i==slideimages.length-1)
i=0
else
i++
}
}

function move3(whichdiv){
tdiv=eval(whichdiv)
if (tdiv.style.pixelTop>0&&tdiv.style.pixelTop<=5){
tdiv.style.pixelTop=0
setTimeout("move3(tdiv)",pausebetweenimages)
setTimeout("move4(second2)",pausebetweenimages)
return
}
if (tdiv.style.pixelTop>=tdiv.offsetHeight*-1){
tdiv.style.pixelTop-=5
setTimeout("move3(tdiv)",100)
}
else{
tdiv.style.pixelTop=scrollerheight
tdiv.innerHTML=slideimages[i]
if (i==slideimages.length-1)
i=0
else
i++
}
}

function move4(whichdiv){
tdiv2=eval(whichdiv)
if (tdiv2.style.pixelTop>0&&tdiv2.style.pixelTop<=5){
tdiv2.style.pixelTop=0
setTimeout("move4(tdiv2)",pausebetweenimages)
setTimeout("move3(first2)",pausebetweenimages)
return
}
if (tdiv2.style.pixelTop>=tdiv2.offsetHeight*-1){
tdiv2.style.pixelTop-=5
setTimeout("move4(second2)",100)
}
else{
tdiv2.style.pixelTop=scrollerheight
tdiv2.innerHTML=slideimages[i]
if (i==slideimages.length-1)
i=0
else
i++
}
}

function startscroll(){
if (document.all){
move3(first2)
second2.style.top=scrollerheight
}
else if (document.layers){
document.main.visibility='show'
move1(document.main.document.first)
document.main.document.second.top=scrollerheight+5
document.main.document.second.visibility='show'
}
}

window.onload=startscroll

</SCRIPT>
<SCRIPT language=JavaScript1.2> 
if (document.all){ 
document.writeln('<center><span id="main2" style="position:relative;width:'+scrollerwidth+';height:'+scrollerheight+';overflow:hiden;background-color:'+scrollerbgcolor+'">') 
document.writeln('<div style="position:absolute;width:'+scrollerwidth+';height:'+scrollerheight+';clip:rect(0 '+scrollerwidth+' '+scrollerheight+' 0);left:0;top:0">') 
document.writeln('<div id="first2" style="position:absolute;width:'+scrollerwidth+';left:0;top:1;">') 
document.write(slideimages[0]) 
document.writeln('</div>') 
document.writeln('<div id="second2" style="position:absolute;width:'+scrollerwidth+';left:0;top:0">') 
document.write(slideimages[1]) 
document.writeln('</div>') 
document.writeln('</div>') 
document.writeln('</span>') 
} 
</SCRIPT></td>
  </tr>
</table>
<table width="760" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr bgcolor="#FFFFFF">
    <td width="185" valign="top" bgcolor="#F3F3F3"><table width="98%" align="center" cellpadding="0" cellspacing="0" bgcolor="#CCCCCC">
        <tr>
          <td bgcolor="F3F3F3"><table width="94%" align="center" cellpadding="0" cellspacing="0">
              <tr> 
                <td height="3" valign="baseline"></td>
              </tr>
              <tr>
                <td valign="baseline"><img src="img/right.gif" width="17" height="16"><strong>&nbsp;<span class="fen01">综合分类</span></strong></td>
              </tr>
              <tr> 
                <td><img src="img/line02.gif" width="165" height="6"></td>
              </tr>
              <tr> 
                <td><img src="img/down.gif" width="16" height="15"><span class="fen01"><strong>&nbsp;水平分类</strong></span></td>
              </tr>
              <tr> 
                <td><img src="img/line02.gif" width="165" height="6"></td>
              </tr>
              <tr> 
                <td><div align="center"><img src="img/fen001.gif" width="152" height="66"></div></td>
              </tr>
              <tr> 
                <td valign="baseline"><img src="img/right.gif" width="17" height="16"><span class="fen01"><strong>&nbsp;图书 
                  音带 光盘</strong></span></td>
              </tr>
              <tr> 
                <td><img src="img/line02.gif" width="165" height="6"></td>
              </tr>
              <tr> 
                <td class="fen01"><img src="img/down.gif" width="16" height="15"><strong>&nbsp;常用分类</strong></td>
              </tr>
              <tr> 
                <td><img src="img/line02.gif" width="165" height="6"></td>
              </tr>
              <tr> 
                <td><table width="74%" align="center" cellpadding="0" cellspacing="0">
                    <tr> 
                      <td class="lm"><strong>英语 日语 德语 <br>
                        法语 俄语 汉语<br>
                        韩语 西语 其他</strong></td>
                    </tr>
                  </table></td>
              </tr>
            </table></td>
        </tr>
      </table></td>
    <td width="1" background="img/line01.gif"><img src="img/line01.gif" width="1" height="3"></td>
    <td width="364" valign="top"><table width="98%" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <td><table width="98%" cellspacing="0" cellpadding="0">
              <tr>
                <td><img src="img/xp_01.gif" width="76" height="25"></td>
                <td><img src="img/xp_02.gif" width="59" height="25"></td>
                <td><img src="img/xp_03.gif" width="56" height="25"></td>
                <td><img src="img/xp_04.gif" width="57" height="25"></td>
                <td><img src="img/xp_05.gif" width="57" height="25"></td>
                <td><img src="img/xp_06.gif" width="59" height="25"></td>
              </tr>
            </table></td>
        </tr>
        <tr>
          <td>      
          </td>
        </tr>
        <tr>
          <td>
		  <cfquery name="newBook" datasource="#sSysDsnName#">
		select b.bsno,b.bname,b.bnamesub,b.isbn,b.writer,b.writersub,
		b.yc,b.price,b.zs,b.publishdate,b.kb,b.fmtp,
		b.sno,b.sname,b.simage,b.vorder,substr(t.nrty,1,60) brief,b.layout
	   from qrynewsbook b,tsnrty t
 	     where b.bsno=t.bsno(+)
		  and  b.yc=t.yc(+)
		  and  b.infirst=1
		  and b.vorder=1
		   order by b.layout asc,b.vorder asc,b.showorder,b.publishdate desc
		</cfquery>
		<cfquery name="pickBook" datasource="#sSysDsnName#">
		select b.bsno,b.bname,b.bnamesub,b.isbn,b.writer,b.writersub,
		b.yc,b.price,b.zs,b.publishdate,b.kb,b.fmtp,
		b.sno,b.sname,b.simage,b.vorder,substr(t.nrty,1,60) brief,b.layout
	   from qrynewsbook b,tsnrty t
 	     where b.bsno=t.bsno(+)
		  and  b.yc=t.yc(+)
		  and  b.infirst=1
		  and b.vorder=2
		   order by b.layout asc,b.vorder asc,b.showorder,b.publishdate desc
		</cfquery>
		  <table width="100%"  border="0">
           	<tr>
            <cfoutput query="newBook" maxrows="3" startrow="1">
       	    <cfif trim(newBook.fmtp) neq "">
		 	  <cfset sCoverImg= "/bookimages/big/"&newBook.fmtp> 
  		    <cfelseif FileExists(ExpandPath("../bookimages/nocover.gif"))>	 	
		 	  <cfset sCoverImg="../bookimages/nocover.gif">
		    <cfelse>
		 	  <cfset sCoverImg="">	
		    </cfif>
		      <td valign="top">
			  		<table width="100%"  border="0">
						<tr>
							<td align="center" valign="top"><a href="scrp/bookdetail.cfm?iBookNo=#newBook.bsno#&sYc=1-1"><img src="#sCoverImg#" width="80" height="110"></a></td>
						</tr>
						<tr>
							<td align="center" valign="top"><a href="scrp/bookdetail.cfm?iBookNo=#newBook.bsno#&sYc=1-1" class="newsLink20" style="color:black;">#newBook.bnamesub#</a></td>
						</tr>
					</table>				</td>
 			</cfoutput> 
             </tr>
          </table>
		  <table width="100%" align="center" cellpadding="2" cellspacing="2" class="lm">
		  	<cfset i=1>
			<cfoutput query="newBook" maxrows="6" startrow="4">
			<cfif Len(newBook.bnamesub) mod 2 is 0>
				<cfset showNewBookLength=24>
			<cfelse>	
				<cfset showNewBookLength=23>
			</cfif>
			<cfif Len(newBook.bnamesub) GE 26>
			  	<cfset showNewBookName=#LEFT(newBook.bnamesub,showNewBookLength)#&"...">
			  <cfelse>
	  		  	<cfset showNewBookName=#newBook.bnamesub#>
			  </cfif>	
              <cfif i mod 2 is 1>
	  			  <tr> 
			  </cfif>
                <td width="50%" class="lm"><a href="scrp/bookdetail.cfm?iBookNo=#newBook.bsno#&sYc=1-1" class="newsLink20" style="color:black;" title="#newBook.bnamesub#" target="_blank">·#showNewBookName#</a></td>
              <cfif i mod 2 is 0>
	  			  </tr> 
			  </cfif>
			  <cfset i=i+1>
			</cfoutput>  
            </table></td>
        </tr>
      </table></td>
    <td width="210" valign="top"><table width="92%" border="0" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <td><img src="img/f001.gif" width="13" height="24"></td>
          <td><img src="img/f002.gif" width="178" height="24"></td>
          <td><img src="img/f003.gif" width="11" height="24"></td>
        </tr>
        <tr>
          <td background="img/f004.gif"><img src="img/f004.gif" width="13" height="8"></td>
          <td bgcolor="F5F5F5">
<table width="100%" cellspacing="0" cellpadding="0">
              <tr>
                <td></td>
              </tr>
              <tr> 
                <td>
                   <cfinclude template="searchNewsForm.cfm">
                  </td>
              </tr>
              <tr> 
                <td><img src="img/f007.gif" width="178" height="19"></td>
              </tr>
              <tr> 
                <td>
<cfinclude template="comm/booksehbottom.html"></td>
              </tr>
            </table>
            
          </td>
          <td background="img/f006.gif"><img src="img/f006.gif" width="11" height="24"></td>
        </tr>
        <tr>
          <td height="10"><img src="img/f009.gif" width="13" height="10"></td>
          <td background="img/f010.gif"><img src="img/f010.gif" width="9" height="10"></td>
          <td><img src="img/f011.gif" width="11" height="10"></td>
        </tr>
      </table>
      <table width="84%" align="center" cellpadding="0" cellspacing="0">
        <tr> 
          <td><img src="img/kf_01.gif" width="101" height="20"></td>
          <td><img src="img/kf_02.gif" width="100" height="20"></td>
        </tr>
        <tr> 
          <td><img src="img/kf_03.gif" width="101" height="24"></td>
          <td><img src="img/kf_04.gif" width="100" height="24"></td>
        </tr>
        <tr> 
          <td><img src="img/kf_05.gif" width="101" height="24"></td>
          <td><img src="img/kf_06.gif" width="100" height="24"></td>
        </tr>
        <tr> 
          <td><img src="img/kf_07.gif" width="101" height="22"></td>
          <td><img src="img/kf_08.gif" width="100" height="22"></td>
        </tr>
        <tr>
          <td><img src="img/kf_09.gif" width="101" height="23"></td>
          <td><img src="img/kf_10.gif" width="100" height="23"></td>
        </tr>
      </table></td>
  </tr>
</table>
<table width="760" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr bgcolor="#FFFFFF"> 
    <td width="185" bgcolor="#f3f3f3"><table width="98%" align="center" cellpadding="0" cellspacing="0" bgcolor="#CCCCCC">
        <tr> 
          <td bgcolor="F3F3F3"><table width="100%" cellspacing="0" cellpadding="3">
              <tr> 
                <td><table width="74%" align="center" cellpadding="0" cellspacing="0">
                    <tr> 
                      <td class="lm"> <span class="fen">英英词典| 汉语词典 <br>
                        英汉词典| 汉英词典</span><br>
                        少儿教育 / 小学教材 <br>
                        初中教材 / 高中教材 <br>
                        中职中专 / 高职高专 <br>
                        大学英语 / 英语专业 <br>
                        综合教程| 实用英语<br>
                        语法/词汇| 听力/口语<br>
                        阅读训练| 翻译/写作<br>
                        中、高考| 四六级 <br>
                        考研| PETS| IELTS <br>
                        TOEFL/GRE/GMAT<br>
                        学术专著 / 对外汉语<br>
                        英语读物 | 期刊 </td>
                    </tr>
                  </table></td>
              </tr>
              <tr> 
                <td>&nbsp;</td>
              </tr>
            </table></td>
        </tr>
      </table></td>
    <td width="1" background="img/line01.gif"><img src="img/line01.gif" width="1" height="3"></td>
    <td width="364" valign="top" class="fen"><table width="98%" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <td><div align="center"><img src="img/line03.gif" width="333" height="3"></div></td>
        </tr>
      </table>
      <table width="98%" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <td><table width="98%" height="3" cellpadding="0" cellspacing="0">
              <tr> 
                <td></td>
              </tr>
            </table>
            <table width="95%" cellspacing="0" cellpadding="0">
              <tr>
                <td><img src="img/jinpin_01.gif" width="74" height="20"></td>
                <td><img src="img/jinpin_02.gif" width="46" height="20"></td>
                <td><img src="img/jinpin_03.gif" width="45" height="20"></td>
                <td><img src="img/jinpin_04.gif" width="45" height="20"></td>
                <td><img src="img/jinpin_05.gif" width="46" height="20"></td>
                <td><img src="img/jinpin_06.gif" width="45" height="20"></td>
              </tr>
            </table></td>
        </tr>
        <tr>
          <td><table width="98%" align="center" cellpadding="2" cellspacing="2" class="lm">
 			<cfset j=1>
			<cfoutput query="pickBook" maxrows="10" startrow="1">
			<cfif Len(pickBook.bnamesub) mod 2 is 0>
				<cfset showPickBookLength=24>
			<cfelse>	
				<cfset showPickBookLength=23>
			</cfif>
   		    <cfif Len(pickBook.bnamesub) GE 26>
			  	<cfset showPickBookName=#LEFT(pickBook.bnamesub,showPickBookLength)#&"...">
			  <cfelse>
	  		  	<cfset showPickBookName=#pickBook.bnamesub#>
			  </cfif>	
              <cfif j mod 2 is 1>
	  			  <tr> 
			  </cfif>
                <td width="50%" class="lm"><a href="scrp/bookdetail.cfm?iBookNo=#pickBook.bsno#&sYc=1-1" class="newsLink20" style="color:black;" target="_blank" title="#pickBook.bnamesub#" >·#showPickBookName#</a></td>
              <cfif j mod 2 is 0>
	  			  </tr> 
			  </cfif>
			  <cfset j=j+1>
			</cfoutput>  
            </table></td>
        </tr>
      </table>
      <table width="93%" align="center" cellpadding="0" cellspacing="0">
        <tr> 
          <td><img src="img/yq00.gif" width="111" height="23"></td>
          <td><img src="img/yq01.gif" width="105" height="23"></td>
          <td><img src="img/yq03.gif" width="117" height="23"></td>
          <td><img src="img/yq04.gif" width="9" height="23"></td>
        </tr>
        <tr> 
          <td colspan="3" valign="top" background="img/yq05.gif"><table width="95%" align="right" cellpadding="0" cellspacing="0">
              <tr>
                <td class="lm"><div id="Layer1" style="position:absolute; width:290px; height:70px; z-index:1; visibility: hidden;">外研书店 
                    外研社儿童英语乐园 “新标准”基础教育网<br>中国外语教育网 中国英语教学研究会 新视野大学英语<br>北京外国语大学外研培训中心 NOODY<br>北京外国语大学网络教育学院 北京银盘公司</div>
                  <div id="Layer2" style="position:absolute; width:266px; height:68px; z-index:2; visibility: visible; left: 213px; top: 864px;">教学网</div></td>
              </tr>
            </table></td>
          <td valign="top" background="img/yq06-1.gif"><img src="img/yq06.gif" width="9" height="71"></td>
        </tr>
        <tr> 
          <td><img src="img/yq07.gif" width="111" height="11"></td>
          <td background="img/yq08.gif"></td>
          <td background="img/yq08.gif"></td>
          <td><img src="img/yq09.gif" width="9" height="11"></td>
        </tr>
      </table>
      <p>&nbsp;</p></td>
    <td width="210" valign="top"><table width="100%" cellspacing="0" cellpadding="0">
        <tr> 
          <td><img src="img/ss01.gif" width="201" height="31"></td>
        </tr>
      </table>
      <table width="100%" cellspacing="0" cellpadding="0">
        <tr>
          <cfquery name="rs" datasource="#sSysDsnName#">
          select cntno,sno,sname,simage,subject,subjectsub,subject3,brief,url,imgfile,imgpage,imgpos,layout,vorder,idate 
          from qryNews_pn 
          <cfif iNewsFilter eq 0>
            where infirst=1 
            <cfelseif	iNewsFilter gt 0>
            where idate>='#DateFormat(now()-iNewsFilter,sSysDateFormat)#' 
            <cfelse>
            where infirst=1 or idate>='#DateFormat(now()+iNewsFilter,sSysDateFormat)#' 
          </cfif>
          and layout=10 and sno=40 and iimport <>'Y' order by showorder asc 
          </cfquery>
        <cfoutput query="rs" startrow="1" maxrows="5"> 
          <cfset sUrl="newsdetail.cfm?iCntno=#rs.cntno#">
          <cfif trim(url) neq "">
            <cfset sUrl=url>
          </cfif>
          <cfset sImgLink="">
          <cfif trim(rs.imgfile) neq "">
            <cfset sImgLink="data/#year(rs.idate)#/#month(rs.idate)#/#rs.imgfile#">
            <cfif FindNoCase("http://",imgfile,1) gt 0>
              <cfset sImgLink="#imgfile#">
            </cfif>
          </cfif>
          <tr>
            <td class="tdContent" style="height:22px;"> <cfif trim(rs.imgfile) neq "" and ListFind("A,M",rs.imgpage) gt 0>
                <a href="#sUrl#" target="_blank" class="newsLink#rs.layout#"><img src="#sImgLink#" alt="#rs.Subject#"></a> 
              </cfif> <cfif trim(rs.Subject) neq "">
                · <a href="#sUrl#" target="_blank" class="linkzxzx" style="color:000000">#rs.Subject#</a> 
              </cfif> 
              <!--- 最新图标 --->
              <cfif iNewNewsIcnDays GT 0>
                <cfset sShowNewIcnDate=DateFormat(now()-iNewNewsIcnDays,sSysDateFormat)>
                <cfif rs.idate GE sShowNewIcnDate>
                  <cfif FileExists(ExpandPath("images/newnews.gif"))>
                    <img src="images/newnews.gif"> 
                  </cfif>
                </cfif>
              </cfif> </td>
          </tr>
        </cfoutput> 
        <td>&nbsp;</td>
        </tr>
      </table></td>
  </tr>
</table>
</body>
</html>
