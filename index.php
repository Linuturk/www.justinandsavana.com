<?php
// Page Template

// Include Header
// Set title of page with $title
$title = "Home";
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
$title = "Welcome to Justin and Savana.com";
$content = "con/index.con";
$date = "1/28/2007";
require_once 'inc/content.inc';

// Include Footer
require_once 'inc/footer.inc';
?>