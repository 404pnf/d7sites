<!--------------------------------------------------------------------------
  -- Ŀ�ģ���ʾ��Ŀ����ͼƬ.�ó�����ͼ�����ͼƬĿ¼��ִ��
  -- ���룺url.sImgFile ����ͼƬ���� 
  -- ���أ� 
  -- ���ڣ�2002-10-26
  -- ���룺Qingze Cheng  
  -- ��Ȩ��������Ϣ��YunYin.com��
  -- �޸ģ�2003-7-3 Qingze Cheng.֧��ʹ��IP��ַͨ����80�˿ںŵ���
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
	���治����	
</cfif>
