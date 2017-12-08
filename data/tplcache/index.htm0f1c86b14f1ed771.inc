<?php
$z[0]=Array("global","",743,769);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",813,843);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",878,905);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("arclist","\r\n  <div class=\"item\" style=\"background-image: url([field:picname/])\"><a target=\"_blank\" href=\"[field:arcurl/]\"></a></div>\r\n  ",2275,2442);
$z[3][4]['typeid']="7";
$z[4]=Array("include","",2501,2536);
$z[4][4]['filename']="head.htm";
$z[5]=Array("type","\r\n      <p>[field:typename/]</p>\r\n      ",2644,2718);
$z[5][4]['typeid']="8";
$z[6]=Array("arclist","\r\n    <div class=\"service_box\" data-scroll-reveal> <img src=\"[field:picname/]\">\r\n      <div class=\"service_box_text\">\r\n        <h4>[field:title/]</h4>\r\n        <p>[field:description function='cn_substr(Html2text(\"@me\").\"...\",260)'/] <a href=\"[field:arcurl/]\">了解更多</a></p>\r\n      </div>\r\n    </div>\r\n    ",2792,3155);
$z[6][4]['typeid']="8";
$z[6][4]['row']="3";
$z[7]=Array("type","\r\n          <p>[field:typename/]</p>\r\n          ",3508,3590);
$z[7][4]['typeid']="3";
$z[8]=Array("sql","[field:content function=\"htmlspecialchars(cn_substr(Html2text(@me),1100))\"/]...\r\n            ",3726,3890);
$z[8][4]['sql']="Select content from dede_arctype where id=3";
$z[9]=Array("type","<a href=\"[field:typelink/]\">了解详细</a>",3941,4019);
$z[9][4]['typeid']="3";
$z[10]=Array("type","\r\n      <p>[field:typename/]</p>\r\n      ",4303,4377);
$z[10][4]['typeid']="2";
$z[11]=Array("arclist","\r\n      <div class=\"gallery_box\"> <img src=\"[field:picname/]\"> <span>[field:typename/]</span> <a href=\"[field:arcurl/]\"></a> </div>\r\n      ",4590,4781);
$z[11][4]['typeid']="2";
$z[11][4]['row']="6";
$z[12]=Array("type","<a href=\"[field:typelink/]\">查看更多</a>",4813,4891);
$z[12][4]['typeid']="2";
$z[13]=Array("type","\r\n        <p>[field:typename/]</p>\r\n        ",5184,5262);
$z[13][4]['typeid']="1";
$z[14]=Array("arclist","\r\n        <div class=\"list_item\">\r\n          <div class=\"list_text\">\r\n            <p class=\"time_1\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</p>\r\n            <a href=\"[field:arcurl/]\">\r\n            <p class=\"list_title\">[field:title/]</p>\r\n            </a>\r\n            <div class=\"list_brief\">\r\n              <p>[field:description function='cn_substr(Html2text(\"@me\").\"...\",260)'/] \r\n            </div>\r\n            <div class=\"more_2\"><a href=\"[field:arcurl/]\">了解详细</a></div>\r\n          </div>\r\n          <div class=\"list_img\"><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\"></a></div>\r\n        </div>\r\n        <!-- item-end --> \r\n        \r\n        ",5400,6114);
$z[14][4]['typeid']="1";
$z[15]=Array("type","<a href=\"[field:typelink/]\">查看更多</a>",6148,6226);
$z[15][4]['typeid']="1";
$z[16]=Array("include","",6311,6348);
$z[16][4]['filename']="footer.htm";

?>