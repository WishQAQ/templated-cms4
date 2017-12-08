<?php
$z[0]=Array("field","",379,398);
$z[0][4]['name']="title";
$z[1]=Array("global","",399,425);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",469,521);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("field","",556,578);
$z[3][4]['name']="keywords";
$z[4]=Array("include","",1957,1992);
$z[4][4]['filename']="head.htm";
$z[5]=Array("type","\r\n          <p>[field:typename/]</p>\r\n          ",2210,2292);
$z[5][4]['typeid']="2";
$z[6]=Array("channel"," <a href=\"[field:typelink/]\" [field:rel/]>[field:typename/]</a> ",2333,2520);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<a class='on' href='~typelink~' ~rel~><span>~typename~</span></a>";
$z[7]=Array("include","",2549,2596);
$z[7][4]['filename']="left_nav_contact.htm";
$z[8]=Array("field","",2662,2711);
$z[8][4]['name']="pubdate";
$z[8][4]['function']="GetDateMk('@me')";
$z[9]=Array("field","",2746,2765);
$z[9][4]['name']="title";
$z[10]=Array("field","",2805,2823);
$z[10][4]['name']="body";
$z[11]=Array("type","[field:typelink/]",2889,2935);
$z[11][4]['row']="1";
$z[12]=Array("prenext","   \r\npreg_match_all('/<a.*?(?: |\\\\t|\\\\r|\\\\n)?href=[\\'\"]?(.+?)[\\'\"]?(?:(?: |\\\\t|\\\\r|\\\\n)+.*?)?>(.+?)<\\/a.*?>/sim', @me, \$strResult, PREG_PATTERN_ORDER);   \r\n        @me=\$strResult[1][0];   \r\n        ",2975,3226);
$z[12][4]['get']="next";
$z[12][4]['runphp']="yes";
$z[13]=Array("prenext","   \r\npreg_match_all('/<a.*?(?: |\\\\t|\\\\r|\\\\n)?href=[\\'\"]?(.+?)[\\'\"]?(?:(?: |\\\\t|\\\\r|\\\\n)+.*?)?>(.+?)<\\/a.*?>/sim', @me, \$strResult, PREG_PATTERN_ORDER);   \r\n        @me=\$strResult[1][0];   \r\n        ",3266,3516);
$z[13][4]['get']="pro";
$z[13][4]['runphp']="yes";
$z[14]=Array("include","",3659,3696);
$z[14][4]['filename']="footer.htm";

?>