<?php
// Page Template

// Include Header
// Set title of page with $title
$title = "Downloads";
require_once 'inc/header.inc';

// Banner pulls <body> and the banner 
require_once 'inc/banner.inc';

// Navigation 
require_once 'inc/nav.inc';

// News
require_once 'inc/news.inc';

// Gallery Thumbnails 
require_once 'inc/thumbnails.inc';

// Links 
require_once 'inc/links.inc';

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
$title = "Useful Downloads";
$content = "con/downloads.con";
$date = "1/28/2008";
$article_id = 'downloads';
$comment_system = 0;
require 'inc/content.inc';

// Include Footer
require_once 'inc/footer.inc';
?>