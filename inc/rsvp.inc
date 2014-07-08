<?php
// Connect to localhost rsvp database 
require_once('inc/dbc.inc');

// Query User for information
$submitted = $_POST[submitted];
if (isset($submitted)) {
// Pull POST array values
$event = $_POST[event];
$name = $_POST[name];
$email = $_POST[email];
$attending = $_POST[attending];

// Cleanup input from user 
$name = trim($name);
$email = trim($email);
$attending = trim($attending);
$timestamp = date("d/m/y : H:i:s", time());

// Check for duplicate entries		
$query = "SELECT * FROM rsvp WHERE email LIKE '$email'";
$result = mysql_query($query) or die(mysql_error());
$row = mysql_fetch_array($result);

	// if a duplicate entry is returned, set $duplicate to 1 to show user message
	if ($row) {
		$duplicate = 1;
	}

	// Set $coming to yes or no based on number attending 
	if ($attending == 0) {
		$coming = 'NO';
	} else {
		$coming = 'YES';
	}

	// Data validation. If no name or attending value is submitted, ask for it again.
	if (!$name || $attending == '' || !$email || $event == 'none') {
	
			// Ask for info again 
			echo "<p><strong>Please fill out the required fields.</strong></p>";

			// Show rsvp form
			require('inc/rsvp_form.inc');

		} elseif ($duplicate == 1){
			echo "<p><strong>You have already used that email address to RSVP or we manually entered your information when we received your RSVP in the mail. Thank you!</strong></p>";
		} else {
			// Make incoming data safe for database 
			if (!get_magic_quotes_gpc()) {
				$name = addslashes($name);
				$email = addslashes($email);
				$attending = addslashes($attending);
			}
			// Insert data into 'name' table
			mysql_query("INSERT INTO rsvp
			(event, name, email, attending, coming, timestamp) VALUES ('$event', '$name', '$email', '$attending', '$coming', '$timestamp') ")
			or die (mysql_error());
			echo "<p align='center'><strong>You have submitted your RSVP successfully</strong></p>";
		}
} else { 

// Show rsvp form
require('inc/rsvp_form.inc');

}
?>
