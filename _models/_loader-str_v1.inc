
	<head>
<!--  Организовать загрузку параметров стр из базы данных страниц --!>

<meta name="description" content="<?php echo "$meta_desc"; ?>"> 
<meta name="keywords" content="<?php echo "$meta_key"; ?>"> 
<meta charset="windows-1251" content="text/html" http-equiv="Content-Type">
<meta content="ru" http-equiv="Content-Language">

<title><?php echo "$meta_title"; ?></title>

<!-- Стили страниц общие типовые --!>
<link rel="stylesheet" href="/models/_styles-str_v1.css">

<!-- Функция по печати стилей элементов и модели в месте их нахождения --!>
<?php 
function list_css($_CSS) 
{
echo "$_CSS"; 
}



?>

	</head>

	<body>

			<div class="str">
			
<!-- Функция определяет содержание файлов в папке модели страницы по адресам (части страницы), модель содержит только сетку, данные загружаются в сетке, разделение на части позволяет отделить повторяющиеся в каждой странице части и часть с изменяемыми данными, который зависит от адреса--!>
			
<?php include ($_SERVER['DOCUMENT_ROOT']."/models/_modelstr-N/_partstr-top_index.inc"); ?>

<?php include ($_SERVER['DOCUMENT_ROOT']."/models/_modelstr-N/_partstr-cont_index.inc"); ?>

<?php include ($_SERVER['DOCUMENT_ROOT']."/models/$_MODELS/_part-str-footer.inc"); ?>
				
			</div> <!--str-->

	</body>
