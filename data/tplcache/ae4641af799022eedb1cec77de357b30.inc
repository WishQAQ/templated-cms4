<div class="list_item">
          <div class="list_text">
            <p class="time_1">[field:pubdate function="MyDate('Y-m-d',@me)"/]</p>
            <a href="[field:arcurl/]">
            <p class="list_title">[field:title/]</p>
            </a>
            <div class="list_brief">
              <p>[field:description function='cn_substr(Html2text("@me")."...",260)'/] 
            </div>
            <div class="more_2"><a href="[field:arcurl/]">了解详细</a></div>
          </div>
          <div class="list_img"><a href="[field:arcurl/]"><img src="[field:picname/]"></a></div>
        </div>
        <!-- item-end -->