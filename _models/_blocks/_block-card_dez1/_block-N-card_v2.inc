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
$_HEADER = "¬ыведение насекомых";
$_MINITEXT = "<strong>¬ыведение муравьев, выведение тараканов, выведение блох, вшей, выведение клещей, выведение мух, комаров, ос, шершней, выведение клопов, пауков</strong> (дезинсекци€) ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>
			
<?php 
$_IMG = "krisa.1_0.png";
$_HEADER = "¬ыведение крыс, мышей";
$_MINITEXT = "¬ыведение крыс, мышей (дератизаци€), выведение кротов, капканы, липкие ловушки, звуковые отпугиватели, отравленные приманки, опыление, газаци€ ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT);
?>
			
<?php 
$_IMG = "clining.1_0.png";
$_HEADER = "ƒезодораци€ и клининг";
$_MINITEXT = "”даление запаха гнили, фекалий, горелых предметов, озонирование воздуха, распыление дезодоранта, физическа€ и химическа€ обработкой отходов, нечистот ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>
			
<?php 
$_IMG = "disinfection.2_0.png";
$_HEADER = "јнтимикробна€ обработка";
$_MINITEXT = "јнтимикробна€, антибактериальна€ обработка помещений (дезинфекци€): уничтожение микробов в помещении, удаление плесени, обработка вентил€ции, кварцевание ...";
miniblkcard_v2v1 ($_IMG, $_HEADER, $_MINITEXT); 
?>