<?php list_css ("<link rel=\"stylesheet\" href=\"/models/_miniblk-N/_miniblk-card_v1/_miniblk-card_v1.css\">"); ?>

<?php function miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT) {

echo "
<div class=\"miniblk-card_v1v1\">
	<img src=\"/models/_miniblk-N/_miniblk-card_v1/_img-N/$_IMG\" alt=\"$_HEADER\" title=\"$_HEADER\">
	<h3 class=\"header\">$_HEADER</h3>
	<div class=\"minitext\">$_MINITEXT</div>
</div>
"; 
}
?>


<?php 
$_IMG = "tarakan.1_0.png";
$_HEADER = "��������� ���������";
$_MINITEXT = "<strong>��������� ��������, ��������� ���������, ��������� ����, ����, ��������� ������, ��������� ���, �������, ��, �������, ��������� ������, ������</strong> (�����������) ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>
			
<?php 
$_IMG = "krisa.1_0.png";
$_HEADER = "��������� ����, �����";
$_MINITEXT = "��������� ����, ����� (�����������), ��������� ������, �������, ������ �������, �������� ������������, ����������� ��������, ��������, ������� ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT);
?>
			
<?php 
$_IMG = "clining.1_0.png";
$_HEADER = "����������� � �������";
$_MINITEXT = "�������� ������ �����, �������, ������� ���������, ������������ �������, ���������� �����������, ���������� � ���������� ���������� �������, �������� ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>
			
<?php 
$_IMG = "disinfection.2_0.png";
$_HEADER = "������������� ���������";
$_MINITEXT = "�������������, ����������������� ��������� ��������� (�����������): ����������� �������� � ���������, �������� �������, ��������� ����������, ����������� ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>