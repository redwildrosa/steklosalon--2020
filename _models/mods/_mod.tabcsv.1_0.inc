<?php

function csvtotab($csvfilename) 
{ $table = "<table class=\"$_GET[tabstyle]\">"; 
$filep = fopen($csvfilename, 'r'); 
while (($row = fgetcsv($filep, 0, ";")) !== FALSE) 
{ $table .= "<tr>"; foreach($row as &$cell) 
{ $table .= "<td>$cell</td>"; } 
$table .= "</tr>"; } 
fclose($csvfilename); 
$table .= "</table>"; 
return $table; }

?>