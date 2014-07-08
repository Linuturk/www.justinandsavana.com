<!-- Main Content -->

 <div id="container">
 	<!--[if IE  ]> <p>Firefox is recommended for viewing this website. <a href="http://www.getfirefox.com" target="_blank"><strong>Get Firefox</strong></a></p> <![endif]-->
	<?php
	echo "<p id=\"$article_id\" class=\"news\">$title</p>\n";	require $content;
	echo "<p class=\"meta\">posted: $date</p>";
	// Comment System
	if ($comment_system != 0) {
		require('inc/comment.inc');
	}	
	?>	

	<!-- Google Ads -->
<script type="text/javascript"><!--
google_ad_client = "";
/* 468x60, created 2/5/08 */
google_ad_slot = "";
google_ad_width = 468;
google_ad_height = 60;
//-->
</script>
<script type="text/javascript"
src="http://pagead2.googlesyndication.com/pagead/show_ads.js">
</script>
	<!-- End Google Ads -->
 </div>
 
<!-- End Main Content -->

