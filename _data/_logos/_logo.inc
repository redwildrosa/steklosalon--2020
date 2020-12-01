
<?php 

// ��������� �����
$_img_logo = "/_data/_logos/_logo.png";
$_link_index ="href=\"/\"";

if ($_URI == "/" OR $_URI == "")
{
$_link_index = "";
}

 ?>

<a <?php echo "$_link_index"; ?> ><img class="logo" src="<?php echo "$_img_logo"; ?>" alt="Стеклосалон логитип" /></a>

 
<style>
img.logo { 
	height: 60px;
	}
</style>