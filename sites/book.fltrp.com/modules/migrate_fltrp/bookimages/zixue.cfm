<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
<head>
<title>Untitled Document</title>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<link href="../../%B6%F9%CD%AF%D3%A2%D3%EF/noddy/docc/font.css" rel="stylesheet" type="text/css">
<link href="default.css" rel="stylesheet" type="text/css">
</head>

<body bgcolor="023F88" leftmargin="0" topmargin="0">

<table width="760" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <td bgcolor="D6EBFF"><table width="760" border="0" cellpadding="0" cellspacing="0">
        <tr> 
          <td height="60" background="img/zx001.gif"><table width="100%" cellspacing="0" cellpadding="0">
              <tr>
                <td width="33%">&nbsp;</td>
                <td width="67%"><table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td><img src="img/zx002.gif" width="64" height="16"></td>
                      <td><img src="img/zx003.gif" width="72" height="16"></td>
                      <td colspan="2"><img src="img/zx004.gif" width="120" height="16"></td>
                      <td><img src="img/zx005.gif" width="68" height="16"></td>
                    </tr>
                    <tr> 
                      <td height="29"><img src="img/zx006.gif" width="64" height="16"></td>
                      <td><img src="img/zx007.gif" width="72" height="16"></td>
                      <td><img src="img/zx008.gif" width="57" height="16"></td>
                      <td><img src="img/zx010.gif" width="57" height="16"></td>
                      <td><img src="img/zx009.gif" width="68" height="16"></td>
                    </tr>
                  </table>
                </td>
              </tr>
            </table></td>
          <td width="224"><p>文章查询<br>
              图书查询 </p>
            </td>
        </tr>
      </table></td>
  </tr>
</table><cfinclude template="news1col_new.cfm">
<table width="760" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr> 
    <td  bgcolor="989898"><table width="760" border="0" cellpadding="0" cellspacing="1">
        <tr>
          <td width="760" bgcolor="F0F0F1"><table width="100%" border="0" align="center" cellpadding="3" cellspacing="0">
              <tr> 
                <td width="5">&nbsp;</td>
                <td width="266" valign="top"><table width="267" cellspacing="0" cellpadding="0">
                    <tr> 
                      <td><img src="img/zx011.gif" width="267" height="27"></td>
                    </tr>
                    <tr> 
                      <td>&nbsp;</td>
                    </tr>
                  </table></td>
                <td width="479"><table width="98%" align="center" cellpadding="0" cellspacing="0">
                    <tr>
                      <td class="font13">·新闻内容·新闻内容<br>
                        ·新闻内容·新闻内容 </td>
                    </tr>
                    <tr>
                      <td bgcolor="#E4E4E4"><table width="100%" cellspacing="0" cellpadding="3">
                          <tr>
                            <td><p class="font12"><span class="zx01">【专题名】</span>·专题新闻<br>
                                ·专题新闻·专题新闻<br>
                                <span class="zx01">【专题名】</span>·专题新闻<br>
                                ·专题新闻·专题新闻 <br>
                                ·专题新闻 <br>
                                ·专题新闻 <br>
                                ·专题新闻 </p>
                              </td>
                          </tr>
                        </table></td>
                    </tr>
                  </table></td>
              </tr>
            </table></td>
        </tr>
      </table></td>
  </tr>
</table>
<table width="760" align="center" cellpadding="0" cellspacing="0" bgcolor="#FFFFFF">
  <tr>
    <td><table width="98%" height="17" align="center" cellpadding="2" cellspacing="3">
        <tr> 
          <td width="323" valign="top"> 
            <table cellspacing="0" cellpadding="0">
              <tr>
                <td><img src="img/zx022.gif" width="309" height="69"></td>
              </tr>
              <tr>
                <td>&nbsp;</td>
              </tr>
            </table>
            <table cellspacing="0" cellpadding="0">
              <tr>
                <td><img src="img/zx014.gif" width="308" height="24"></td>
              </tr>
              <tr>
                <td><table width="100%" cellspacing="0" cellpadding="2">
                    <tr>
                      <td bgcolor="#FFEEF7"><table width="302" cellspacing="0" cellpadding="0">
                          <tr><cfquery name="rs" datasource="#sSysDsnName#">
	select cntno,sno,sname,simage,subject,subjectsub,subject3,brief,url,imgfile,imgpage,imgpos,layout,vorder,idate
	  from qryNews_pn
	  <cfif iNewsFilter eq 0>
	  		where infirst=1
	  <cfelseif	iNewsFilter gt 0>
	  		where idate>='#DateFormat(now()-iNewsFilter,sSysDateFormat)#'
	  <cfelse>		
	  		where infirst=1
			   or idate>='#DateFormat(now()+iNewsFilter,sSysDateFormat)#'
	  </cfif>
	 and layout=20 and sno=1 and iimport <>'Y'
	 order by cntno desc 
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
		<tr><td class="tdContent" style="height:22px;">
		<cfif trim(rs.imgfile) neq "" and ListFind("A,M",rs.imgpage) gt 0>
			<a href="#sUrl#" target="_blank" class="newsLink#rs.layout#"><img src="#sImgLink#" alt="#rs.Subject#"></a>
		</cfif>
		<cfif trim(rs.Subject) neq "">
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
		</cfif>	
		</td></tr>
	</cfoutput>
                            <td>&nbsp;</td>
                          </tr>
                        </table></td>
                    </tr>
                  </table></td>
              </tr>
            </table>
            <table cellspacing="0" cellpadding="0">
              <tr> 
                <td><img src="img/zx012.gif" width="308" height="24"></td>
              </tr>
              <tr> 
                <td><table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td bgcolor="#F5ECFF"><table width="302" cellspacing="0" cellpadding="0">
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
                            and layout=20 and sno=10 and iimport <>'Y' order by 
                            cntno desc 
                            </cfquery>
                          <cfoutput query="rs" startrow="1" maxrows="12"> 
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
                                </cfif>
                                <cfif trim(rs.Subject) neq "">
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
                  </table></td>
              </tr>
            </table>
            <table cellspacing="0" cellpadding="0">
              <tr> 
                <td><img src="img/zx013.gif" width="308" height="24"></td>
              </tr>
              <tr> 
                <td><table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td bgcolor="#E8E8F9"><table width="302" cellspacing="0" cellpadding="0">
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
                            and layout=20 and sno=28 and iimport <>'Y' order by 
                            cntno desc 
                            </cfquery>
                          <cfoutput query="rs" startrow="1" maxrows="4"> 
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
                  </table></td>
              </tr>
            </table>
            
          </td>
          <td width="392" valign="top"><div align="left">
              <table cellspacing="0" cellpadding="0">
                <tr> 
                  <td><img src="img/zx021.gif" width="395" height="23"></td>
                </tr>
                <tr> 
                  <td><table width="100%" cellspacing="0" cellpadding="2">
                      <tr> 
                        <td bgcolor="#F4F4DD"><table width="389" cellspacing="0" cellpadding="0">
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
                              and layout=20 and sno=29 and iimport <>'Y' order 
                              by cntno desc 
                              </cfquery>
                            <cfoutput query="rs" startrow="1" maxrows="7"> 
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
                    </table></td>
                </tr>
              </table>
              <table cellspacing="0" cellpadding="0">
                <tr> 
                  <td><img src="img/zx018.gif" width="395" height="23"></td>
                </tr>
                <tr> 
                  <td><table width="100%" cellspacing="0" cellpadding="2">
                      <tr> 
                        <td bgcolor="#FAF0EB"><table width="389" cellspacing="0" cellpadding="0">
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
                              and layout=10 and sno=30 and iimport <>'Y' order 
                              by cntno desc 
                              </cfquery>
                            <cfoutput query="rs" startrow="1" maxrows="7"> 
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
                    </table></td>
                </tr>
              </table>
              <table cellspacing="0" cellpadding="0">
                <tr> 
                  <td><img src="img/zx019.gif" width="395" height="23"></td>
                </tr>
                <tr> 
                  <td><table width="100%" cellspacing="0" cellpadding="2">
                      <tr> 
                        <td bgcolor="#F2E7DB"><table width="389" cellspacing="0" cellpadding="0">
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
                              and layout=10 and sno=31 and iimport <>'Y' order 
                              by cntno desc 
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
                    </table></td>
                </tr>
              </table>
              <table cellspacing="0" cellpadding="0">
                <tr> 
                  <td><img src="img/zx020.gif" width="395" height="23"></td>
                </tr>
                <tr> 
                  <td><table width="100%" cellspacing="0" cellpadding="2">
                      <tr> 
                        <td bgcolor="#FFEFDF"><table width="389" cellspacing="0" cellpadding="0">
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
                              and layout=10 and sno=33 and iimport <>'Y' order 
                              by cntno desc 
                              </cfquery>
                            <cfoutput query="rs" startrow="1" maxrows="2"> 
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
                    </table></td>
                </tr>
              </table>
              <p>&nbsp;</p>
              <p>&nbsp;</p>
              <p>&nbsp;</p>
            </div></td>
        </tr>
      </table></td>
  </tr>
</table>
<table width="760" align="center" cellpadding="0" cellspacing="0" bgcolor="#FFFFFF">
  <tr> 
    <td><table width="98%" height="17" align="center" cellpadding="2" cellspacing="3">
        <tr> 
          <td width="323" valign="top"> 
            <table cellspacing="0" cellpadding="0">
              <tr> 
                <td><img src="img/zx015.gif" width="308" height="24"></td>
              </tr>
              <tr> 
                <td><table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td bgcolor="#F4FFFA">
			<cfquery name="rsZT" datasource="#sSysDsnName#">
			<!--- 产品专题信息 --->
				select 
s.sno,s.SNAME,s.ishow,s.url zturl,s.BELONGSNO,s.SHOWCHAR,s.SHOWORDER vorder,s.simage,s.brief ztbrief,n.state,substr(n.subject,1,showchar) subjectsub,n.viewnum, n.cntno, 
n.imgfile,n.imgpage,n.subject,subject3, n.url, n.brief, n.showorder, n.idate, n.itime, 
n.infirst,n.relnewsid,n.subject2,n.writer,n.imgpos,n.op ,n.fromw,n.sno 
from sectionzt_pn s,news_pn n 
where s.sno=n.sno_zt and s.STATE='N' and n.SSHOW_ZT='Y' and s.ishow='Y' and n.sno='30' order by vorder asc

			</cfquery>
			<cfset iNewNewsIcnDays=GetProfileString(sNewsIniFile, rs.sno,"iNewNewsIcnDays")>
			<cfset sLayout=rs.layout>
<!---<cfif iNewNewsIcnDays eq "">
	<cfset iNewNewsIcnDays=igNewNewsIcnDays>
</cfif>
--->
<table>
<cfloop query="rsZT">
<cfoutput>
<tr>
   <td class="tdSecCnt#sLayout#">
    <cfset iSno=rs.sno>
	<cfset sZturl="newsztmore.cfm?iSno=#iSno#&iZtsno=#rsZt.sno#">
	<cfif rsZt.zturl neq "">
		<cfset sZturl=rsZt.zturl>
	</cfif>	
	<cfset sSubject=rsZT.Subject>
	<cfset sUrl="newsdetail.cfm?iCntno=#rsZT.cntno#">
	<cfif rsZT.url neq "">
		<cfset sUrl=rsZt.url>
	</cfif>
         #sSubjectChar#<a href="#sZturl#" target="_blank" class="aNL#sLayout#" style="color:FF9640;">【#rsZt.sname#】</a>&nbsp;<a href="#sUrl#" target="_blank" class="aNL#sLayout#" title="#rsZt.subject#">#sSubject#</a>
	<!--- 最新图标 --->
	<cfif iNewNewsIcnDays GT 0>
		<cfset sShowNewIcnDate=DateFormat(now()-iNewNewsIcnDays,sSysDateFormat)>
	        <cfif rsZT.idate GE sShowNewIcnDate>
			<cfif FileExists(ExpandPath("images/newnews.gif"))>
				<img src="images/newnews.gif">
			</cfif>
		</cfif>	
	</cfif>
  </td>
</tr>
</cfoutput>
</cfloop>
</table>
					  
					  
					  </td>
                    </tr>
                  </table></td>
              </tr>
            </table>
            <table cellspacing="0" cellpadding="0">
              <tr> 
                <td><img src="img/zx016.gif" width="308" height="24"></td>
              </tr>
              <tr> 
                <td><table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td bgcolor="#FDFFFE">
					  <cfquery name="cfqrySpecialFocus" datasource="#sSysDsnName#">
							select sname,sno,url zturl,simage,brief ztbrief from sectionzt_pn where state='N' and belongsno='4' and ishow='Y'
					 </cfquery>
					 <cfset iSno=rs.sno>
  	        		<cfset sLayout=rs.layout>
					  <table width="100%"  border="0">
					  <cfoutput query="cfqrySpecialFocus">
					  <cfset sZTUrl="newsztmore.cfm?iSno=#iSno#&iZtsno=#cfqrySpecialFocus.sno#">
					  <cfif cfqrySpecialFocus.zturl neq "">
						<cfset sZTUrl=cfqrySpecialFocus.zturl>
					  </cfif>
  						<tr>
    						<td>
							<cfif cfqrySpecialFocus.simage neq "">
								<a href="#sZTUrl#" target="_blank"><img src="images/#cfqrySpecialFocus.simage#" align="right" style="border:1px solid black;"></a>
							</cfif>
							</td>
	    					<td><a href="#sZTUrl#"  class="aNL#sLayout#" target="_blank" style="color:FF9640;font-weight:bold;">【#cfqrySpecialFocus.sname#】</a></td>
  						</tr>
					</cfoutput>
					</table>

					  
					  
					  </td>
                    </tr>
                  </table></td>
              </tr>
            </table>
            
          </td>
          <td width="392" valign="top"><div align="left">
              <table cellspacing="0" cellpadding="0">
                <tr> 
                  <td><img src="img/zx023.gif" width="395" height="23"></td>
                </tr>
                <tr> 
                  <td><table width="100%" cellspacing="0" cellpadding="2">
                      <tr> 
                        <td bgcolor="#FCEEEB">
						<table width="100%" cellspacing="0" cellpadding="2">
                    <tr> 
                      <td bgcolor="#FDFFFE">
					  <cfquery name="cfqryMatch" datasource="#sSysDsnName#">
							select sname,sno,url zturl,simage,brief ztbrief from sectionzt_pn where state='N' and belongsno='32' and ishow='Y'
					 </cfquery>
					 <cfset iSno=rs.sno>
  	        		<cfset sLayout=rs.layout>
					  <table width="100%"  border="0">
					  <cfoutput query="cfqryMatch">
					  <cfset sZTUrl="newsztmore.cfm?iSno=#iSno#&iZtsno=#cfqryMatch.sno#">
					  <cfif cfqryMatch.zturl neq "">
						<cfset sZTUrl=cfqryMatch.zturl>
					  </cfif>
  						<tr>
    						<td>
							<cfif cfqryMatch.simage neq "">
								<a href="#sZTUrl#" target="_blank"><img src="images/#cfqryMatch.simage#" align="right" style="border:1px solid black;"></a>
							</cfif>
							</td>
	    					<td>
								<table width="100%"  border="0">
								    <tr>
    									<td><a href="#sZTUrl#"  class="aNL#sLayout#" target="_blank" style="color:FF9640;font-weight:bold;">【#cfqryMatch.sname#】</a></td>
	  								</tr>
									<cfquery name="cfqryMatchNews" datasource="#sSysDsnName#">
										<!--- 活动赛事具体新闻 --->
										select s.sno,s.SNAME,s.ishow,s.url zturl,s.BELONGSNO,s.SHOWCHAR,s.SHOWORDER vorder,s.simage,s.brief ztbrief,n.state,n.subject,substr(n.subject,1,showchar) subjectsub,n.viewnum, n.cntno, 
										n.imgfile,n.imgpage,n.subject,subject3, n.url, n.brief, n.showorder, n.idate, n.itime, 
										n.infirst,n.relnewsid,n.subject2,n.writer,n.imgpos,n.op ,n.fromw,n.sno 
										from sectionzt_pn s,news_pn n 
										where s.sno=n.sno_zt and s.STATE='N'  and s.ishow='Y' and n.sno='32'  and  s.sno='#cfqryMatch.sno#'  order by vorder asc
									</cfquery>
									<cfloop query="cfqryMatchNews">
									<tr>
										<td><a href="newsdetail.cfm?iCntno=#cfqryMatchNews.cntno#" target="_blank">#cfqryMatchNews.subject#</a></td>
									</tr>
									</cfloop>
								</table>							
							</td>
  						</tr>
					</cfoutput>
					</table>
						
						
						</td>
                      </tr>
                    </table></td>
                </tr>
              </table>
            </div></td>
        </tr>
      </table></td>
  </tr>
</table>
</body>
</html>
