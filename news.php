<?php
// Page Template

// Include Header
// Set title of page with $title
$title = "News";
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

$title = "Site restored from backup";
$article_id = "news15";
$content = "con/news15.con";
$date = "1/25/2009";
$comment_system = 0;
require 'inc/content.inc';

$title = "Support the Heart Walk";
$article_id = "news14";
$content = "con/news14.con";
$date = "7/28/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Lots of New Photos";
$article_id = "news13";
$content = "con/news13.con";
$date = "6/4/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "15 Minutes of Fame";
$article_id = "news12";
$content = "con/news12.con";
$date = "5/25/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "All jokes aside . . .";
$article_id = "news11";
$content = "con/news11.con";
$date = "5/8/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Bundle of Joy!";
$article_id = "news10";
$content = "con/news10.con";
$date = "4/1/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Countdown to the big day!";
$article_id = "news9";
$content = "con/news9.con";
$date = "3/31/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Wedding Shower";
$article_id = "news8";
$content = "con/news8.con";
$date = "3/15/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "New Server and AMV";
$article_id = "news7";
$content = "con/news7.con";
$date = "2/20/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "New Pictures and Comment System";
$article_id = "news6";
$content = "con/news6.con";
$date = "2/10/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "So much to do, so little time . . .";
$article_id = "news5";
$content = "con/news5.con";
$date = "2/8/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Music and Gallery";
$article_id = "news4";
$content = "con/news4.con";
$date = "2/5/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Invitations & RSVP";
$article_id = "news3";
$content = "con/news3.con";
$date = "2/4/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Major Updates";
$article_id = "news2";
$content = "con/news2.con";
$date = "1/28/2008";
$comment_system = 0;
require 'inc/content.inc';

$title = "Recent News";
$article_id = "news1";
$content = "con/news1.con";
$date = "12/18/2007";
$comment_system = 0;
require 'inc/content.inc';

// Include Footer
require_once 'inc/footer.inc';
?>
