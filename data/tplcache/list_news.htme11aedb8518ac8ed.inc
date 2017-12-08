<?php
$z[0]=Array("field","",379,398);
$z[0][4]['name']="title";
$z[1]=Array("global","",399,425);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",469,528);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("field","",563,592);
$z[3][4]['name']="keywords";
$z[4]=Array("include","",1989,2024);
$z[4][4]['filename']="head.htm";
$z[5]=Array("type","\r\n            <p>[field:typename/]</p>\r\n",2183,2257);
$z[5][4]['typeid']="2";
$z[6]=Array("arclist","                           \r\n          <div class=\"gallery_box\">\r\n            <img src=\"[field:picname/]\">\r\n            <span>[field:title/]</span>\r\n            <a href=\"[field:arcurl/]\"></a>\r\n          </div>\r\n",2301,2583);
$z[6][4]['typeid']="2";
$z[6][4]['row']="4";
$z[6][4]['orderby']="rand";
$z[7]=Array("type","\r\n          <a href=\"[field:typelink/]\" class=\"btn_contact\">查看更多</a>",2585,2695);
$z[7][4]['typeid']="2";
$z[8]=Array("include","",2717,2764);
$z[8][4]['filename']="left_nav_contact.htm";
$z[9]=Array("type","<p>[field:typename/]</p>",2869,2927);
$z[9][4]['typeid']="1";
$z[10]=Array("list","\r\n        <div class=\"list_item\">\r\n          <div class=\"list_text\">\r\n            <p class=\"time_1\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</p>\r\n            <a href=\"[field:arcurl/]\"><p class=\"list_title\">[field:title/]</p></a>\r\n            <div class=\"list_brief\">\r\n              <p>[field:description function='cn_substr(Html2text(\"@me\").\"...\",300)'/]</p>\r\n            </div>\r\n            <div class=\"more_2\"><a href=\"[field:arcurl/]\">了解详细</a></div>\r\n          </div>\r\n          <div class=\"list_img\"><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\"></a></div>\r\n          \r\n        </div><!-- item-end -->\r\n\r\n",3028,3697);
$z[10][4]['pagesize']="6";
$z[11]=Array("pagelist","",3814,3870);
$z[11][4]['listitem']="pre,next,pageno";
$z[11][4]['listsize']="1";
$z[12]=Array("include","",4008,4045);
$z[12][4]['filename']="footer.htm";

?>