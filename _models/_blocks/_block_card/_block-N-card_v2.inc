<?php list_css ("<link rel=\"stylesheet\" href=\"/models/_block-N/_block-card_v1/_block-card_v1.css\">"); ?>


<?php 

$_LINKBLOCK = "";
$_IMG = "";
$_CAPTION = "";
$_MINITEXT = "";

blockcard_v1v1 (
"#1",
"_img-zerkalo_v1.png", 
"������� �������", 
"������������ �� ������������ ������ ��� � ����������� �������"
); 

blockcard_v1v1 (
"#2",
"_img-zerkalo-cvetnoe_v1.png", 
"������� �������", 
"������������ ������� � �������� �� �������, ������, ������, �����"
); 

blockcard_v1v1 (
"#3",
"_img-zerkalo-satin_v1.png", 
"�������������� �������", 
"������������ �������� ������� ������� ����������� ���������"
); 

blockcard_v1v1 (
"#4",
"_img-zerkalo-baget_v1.png", 
"���������� �������", 
"������������ ��� ��� ������ �� ������� �� �����, ��������, ������"
);

blockcard_v1v1 (
"#5",
"_img-zerkalo_v1.png", 
"������ �������", 
"�������� ������: �������, ������, ������, ������, ������� RAL"
); 

blockcard_v1v1 (
"#6",
"_img-zerkalo_v1.png", 
"������� �������", 
"������������ �� ������������ ������ ��� � ����������� �������"
); 

?>

<?php 


function blockcard_v1v1 ($_LINKBLOCK, $_IMG, $_CAPTION, $_MINITEXT) {
echo "
<a class=\"linkblock\" href=\"$_LINKBLOCK\" title=\"$_CAPTION\">
	<div class=\"block-card_v1v1\">
		<img src=\"/models/_block-N/_block-card_v1/_img-N/$_IMG\" alt=\"$_CAPTION\">
		<div class=\"container\">
			<h3>$_CAPTION</h3>
			<p>$_MINITEXT</p>
		</div>
	</div>
</a>
"; 

}
?>

