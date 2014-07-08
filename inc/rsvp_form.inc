<?php
echo "<form method=\"POST\" action=\"".$_SERVER['php_self']."#news3\">";
echo "<table align='center' border='0'>";
echo "<tr><td align='right'>*Event:</td><td align='center'><select name=\"event\"><option value=\"none\">Select One</option><option value=\"wedding\">Wedding/Reception</option><option value=\"shower\">Shower</option></select></td></tr>";
echo "<tr><td align='right'>*Name:</td><td align='center'><input type=\"text\" name=\"name\" value=\"\" /></td></tr>";
echo "<tr><td align='right'>*Email:</td><td align='center'><input type=\"text\" name=\"email\" value=\"\" /></td></tr>";
echo "<tr><td align='right'>*Total Guests Attending:</td><td align='center'><input type=\"text\" name=\"attending\" value=\"0\" /></td></tr>";
echo "<tr><td colspan='2' align='right'><em>* Required Fields</em> <input type=\"submit\" name=\"submitted\" value=\"RSVP\"></form></td></tr>";
echo "<tr><td colspan='2' align='center'><strong>If you are unable to attend, please leave 0 in the Attending field.</strong></td></tr></table>";
?>
