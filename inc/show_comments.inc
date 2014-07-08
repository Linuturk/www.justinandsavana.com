<?php
// Query all comments for this article_id
$query = "SELECT * FROM comment WHERE article_id = '$article_id' ORDER BY timestamp";
$result = mysql_query($query) or die(mysql_error());

// Display all comments for this article including the one just added
while ($row = mysql_fetch_array($result)) {
	echo "<p align='right'><em>".htmlspecialchars(stripslashes($row[comment]))."</em></p>";
	echo "<p class=\"meta\">Comment by: ".htmlspecialchars(stripslashes($row[name]))." on ".$row[timestamp]."</p>";
}
?>
