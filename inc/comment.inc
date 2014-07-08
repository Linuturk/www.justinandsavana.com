<?php
// Connect to localhost database rsvp
require_once('inc/dbc.inc');

// See if form has been submitted
$submitted = $_POST[submitted];

// If form has been submitted, add information
// 	to database and show all comments for this
// 	article.
if (isset($submitted)) {
	// reCAPTCHA variable
	$resp = recaptcha_check_answer ($privatekey, $_SERVER["REMOTE_ADDR"], $_POST["recaptcha_challenge_field"], $_POST["recaptcha_response_field"]);
	// Shorten variables
	$article_to_post = $_POST[article_to_post];
	$name = $_POST[name];
	$comment = $_POST[comment];
	// Timestamp of comment
	$timestamp = date("d/m/y : H:i:s", time());
	
	// Clean off extra spaces 
	$name = trim($name);
	$comment = trim($comment);
	
	// If no name has been entered, set $name to anonymous
	if (!$name) {
		$name = 'Anonymous';
	}
	
	// If no comment has been made, ask for comment again 
	if (!$comment) {
		// Show the fact they didn't fill anything in
		require('inc/show_comments.inc');
		// Comment Form so they can try again
		$message = 'try_again';
		require('inc/comment_form.inc');
	} elseif (!$resp->is_valid) {
		// if reCAPTCHA says they failed, send them to the fail house
		$message = 'reCAPTCHA';
		// Show them the comment wasn't posted 
		require('inc/show_comments.inc');
		// Form again with message
		require('inc/comment_form.inc');
	} else {
		// Prepare data for the database
		if (!get_magic_quotes_gpc()) {
			$name = addslashes($name);
			$comment = addslashes($comment);
		}
		
		if ($article_to_post == $article_id) {
			// Insert new comment into the database 
			mysql_query("INSERT INTO comment
			(article_id, name, comment, timestamp) VALUES ('$article_id', '$name', '$comment', '$timestamp') ")
			or die (mysql_error());
		}
	
		// Does what it says 
		require('inc/show_comments.inc');
	
		// Comment form again with success message
		$message = 'success';
		require('inc/comment_form.inc');
	}
} else {

// Query and show all comments for this article
require('inc/show_comments.inc');

// Show comment form because the form has not been submitted
	if ($comment_system != 2) {
	require('inc/comment_form.inc');
	}
}
?>