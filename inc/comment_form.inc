<?php
if ($article_to_post == $article_id) {
	switch ($message) {
		case 'try_again':
			echo "<p><strong>You didn't enter a comment. Please try again.</strong></p>";
			break;	
	
		case 'success':
			echo "<p><strong>Your comment has been posted.</strong></p>";
			break;
			
		// reCAPTCHA error message 
		case 'reCAPTCHA':
			echo "<p><strong>The reCAPTCHA wasn't entered correctly. Please try again.</strong></p><p>(reCAPTCHA said: ".$resp->error.")</p>";
			break;
	}
}
echo "<form method=\"POST\" action=\"".$_SERVER['php_self']."#".$article_id."\">";
echo "<input type=\"hidden\" name=\"article_to_post\" value=\"".$article_id."\" />";
echo "<table align='center' border='0'>";
echo "<tr><td align='right'>Name:</td><td><input type=\"text\" name=\"name\" value=\"\" /></td></tr>";
echo "<tr><td align='right'>Comments:</td><td><textarea name=\"comment\" cols=\"40\" rows=\"3\"></textarea></td></tr>";
echo "<tr><td colspan='2' align='center'>";
echo recaptcha_get_html($publickey);
echo "</td></tr>";
echo "<tr><td colspan='2' align='right'><input type=\"submit\" name=\"submitted\" value=\"Comment\"></td></tr></table></form>";
echo "<hr align='center' />";
?>
