<?php
// Page Template

// Include Header
// Set title of page with $title
$title = "Template";
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
//				con folder content.con
// $date for the date of the content
// You can add multiple articles by resetting
// the variables to the next values and pulling 
// content.inc again. 
$title = "Template Article Title";
// $article_id does two things. 
// 	a) Used as anchor tag to jump to section 
// 	b) Used in comment system to identify comments to this article 
$article_id = "template1";
$content = "con/template.con";
$date = "1/25/2008";
// Set to 1 to enable comment system on this page 
$comment_system = 0;
require 'inc/content.inc';

// Include Footer
require_once 'inc/footer.inc';
?>