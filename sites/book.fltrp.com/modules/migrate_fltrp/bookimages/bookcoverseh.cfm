<!--------------------------------------------------------------------------
  -- 目的：显示书目封面图片.该程序在图书封面图片目录中执行
  -- 输入：url.sImgFile 封面图片类型 
  -- 返回： 
  -- 日期：2002-10-26
  -- 编码：Qingze Cheng  
  -- 版权：云因信息（YunYin.com）
  -- 修改：2003-7-3 Qingze Cheng.支持使用IP地址通过非80端口号调用
---------------------------------------------------------------------------> 
<cfparam name="url.sImgFile" default="" type="string">

<cfif cgi.SERVER_PORT NEQ "80">
	<cfif ListLen(cgi.HTTP_HOST,":") LE 1>
		<cfset sPort=":" & cgi.SERVER_PORT>
    <cfelse>
		<cfset sPort="">
    </cfif>
<cfelse>
	<cfset sPort="">
</cfif>

<cfif FileExists(ExpandPath("big/#url.sImgFile#"))>
	<cfoutput><img src="http://#cgi.HTTP_HOST##sPort#/bookimages/big/#url.sImgFile#" border=0></cfoutput>
<cfelseif FileExists(ExpandPath("#url.sImgFile#"))>
	<cfoutput><img src="http://#cgi.HTTP_HOST##sPort#/bookimages/#url.sImgFile#" border=0></cfoutput>
<cfelse>
	封面不存在	
</cfif>
