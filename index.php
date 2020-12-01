
<?php

?>

<!DOCTYPE html>

<html lang="ru">
<meta charset="UTF-8">

<!-- Главная страница на которой определяются все адреса --!>

<?php 



/*Запрос адреса posteh.ru/text/text.klesch.1_0
1 часть адреса содержит название модели в папке models
2 часть адреса содержит название данных в папке data
По скриптум BD - это готовые элементы, шаблонные без заполнения текстом с параметрами для заполнения в части страницы.
*/
$_URI = $_SERVER['REQUEST_URI'];
// echo $_URI;

// По умолчанию загружается макет модели 
$_MODELS = "";
$_DATA = "";

// В зависимости от адреса страницы загружается модель и данные, модель идет в адресе
if ($_URI=="/text/_text.klesch.1_0") {$_MODELS = "_str.text"; $_DATAS = "_text.klesch.1_0";}

?>

<!-- Макет страницы по адресу --!>

	<head>
<!--  Организовать загрузку параметров стр из базы данных страниц --!>

 
<!-- <meta charset="windows-1251" content="text/html" http-equiv="Content-Type"> -->
<meta content="ru" http-equiv="Content-Language">

<title><?php echo "$meta_title"; ?></title>

<!-- Стили страниц общие типовые --!>
<link rel="stylesheet" href="/_models/_styles.css">

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
			
<?php include ($_SERVER['DOCUMENT_ROOT']."/_models/_pages/_page_index/_page_header.inc"); ?>

<?php include ($_SERVER['DOCUMENT_ROOT']."/_models/_pages/_page_index/_page_main.inc"); ?>

<?php include ($_SERVER['DOCUMENT_ROOT']."/models/$_MODELS/_part-str-footer.inc"); ?>
				
			</div> <!--str-->

	</body>

</html>
