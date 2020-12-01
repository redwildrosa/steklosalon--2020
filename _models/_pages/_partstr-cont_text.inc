<?php // модули
include ($_SERVER['DOCUMENT_ROOT']."/models/mods/_mod.tabcsv.1_0.inc"); 
?>

<?php // стили
list_css ("<link rel=\"stylesheet\" href=\"/models/_str.text/content.css\">"); 
?>

<div class="content">
	<div class="content1">
		<div class="boxcenter clearfix">
			<div class="column-240">Многие думают, что клещи встречаются в лесу. По статистике, всего 60% от общего числа укусов приходится на лесные зоны. Клещи могут встретиться на территориях вблизи лесной зоны, на дачных участках, на огородах, а также в городском парке и на базе отдыха. Число укусов на дачных участках, частных домовых территориях составляет около 30%. Клещи нападают с травы и низкорослого кустарника.
			</div>
			<div class="sheet">
			<?php list_css ("<link rel=\"stylesheet\" href=\"/models/_sheets/_sheet.1_0.css\">"); ?>
			<!-- контент -->
			<?php include ($_SERVER['DOCUMENT_ROOT']."/data/$_DATAS/_text.1_0.inc"); ?>
			</div>
		</div>
	</div>

	<div class="content2">
		<div class="boxcenter">
		
		</div>
	</div>
	
</div>