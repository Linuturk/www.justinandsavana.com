<?php
// Page Template

// Include Header
// Set title of page with $title
$title = "RSVP Report";
require_once 'inc/header.inc';

// Banner pulls <body> and the banner 
require_once 'inc/banner.inc';

// Navigation 
require_once 'inc/nav.inc';

// News
// require_once 'inc/news.inc';

// Gallery Thumbnails 
// require_once 'inc/thumbnails.inc';

// Links 
// require_once 'inc/links.inc';

// Main Content
// Use the following to set the content
// $title for the title of the section
// $content for the name of the content file
// 			formatted in HTML and placed in the
//				root of the site as content.con
// $date for the date of the content
// You can add multiple articles by resetting
// the variables to the next values and pulling 
// content.inc again. 
$title = "RSVP Report";
$content = "inc/rsvp_report.inc";
$date = date("d/m/y : H:i:s", time());

// Check for form submit
$submitted = $_POST[submitted];

if ($submitted) {

// Shorten variable
$event = $_POST[event];

// Show report
require 'inc/rsvp_report.inc';

} else {

// Ask which event you want to pull a report for
echo "<p align=\"center\">For which event do you want to see the RSVP list?</p>";
echo "<form action=\"".$_SERVER['php_self']."\" method=\"POST\">";
echo "<p align=\"center\"><select name=\"event\"><option value=\"none\">Select One</option><option value=\"wedding\">Wedding/Reception</option><option value=\"shower\">Shower</option></select></p>";
echo "<p align=\"center\"><input type=\"submit\" name=\"submitted\" value=\"Show Report\" /></p></form>";

}

// Include Footer
require_once 'inc/footer.inc';
?>