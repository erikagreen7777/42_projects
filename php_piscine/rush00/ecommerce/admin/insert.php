<?php

session_start();

if (!$_SESSION['adminlogged'])
	header("Location: ../admin/main_admin.php");

$host = 'localhost';
$username = 'root';
$password = 'root';
$dbname = $_SESSION['db_name'];

$conn = mysqli_connect(
	$host,
	$username,
	$password,
	$dbname
);

if (!$_GET)
{
	if ($_SESSION['edit_items'] === true)
	{
		mysqli_query($conn, "INSERT INTO `stock`(`item`, `price`, `count`) VALUES ('change', 'this', 2, 'text', 'cat')");
		$_SESSION['edit_items'] = false;
		header("Location: ../admin/edit_items.php");
	}
	else if ($_SESSION['edit_users'] === true)
	{
		mysqli_query($conn, "INSERT INTO `user_info`(`login`, `passwd`) VALUES ('dummy', 'dummy-pass')");
		$_SESSION['edit_users'] = false;
		header("Location: ../admin/edit_users.php");
	}
}


if ($_SESSION['edit_items'] === true)
{
	$var_id = $_GET['id'];
	$var1 = $_GET[0];
	$var1 = $_GET[1];

	if ($_GET["button"] == "update")
		mysqli_query($conn, "UPDATE `user_info` SET `name`='$var0',`hashedpass`='$var1', WHERE id = $var_id");
	else if ($_GET["button"] == "del")
		mysqli_query($conn, "DELETE FROM `items` WHERE `id`=$var_id");
	$_SESSION['edit_items'] = false;
	header("Location: ../admin/edit_items.php");
}
else if ($_SESSION['edit_users'] === true)
{
	$var_id = $_GET['id'];
	$var1 = $_GET[0];
	$var2 = hash("sha512", $_GET[1]);
	if ($_GET["button"] == "update")	
		mysqli_query($conn, "UPDATE `user_info` SET `login`='$var1',`passwd`='$var2' WHERE id = $var_id");
	else if ($_GET["button"] == "del")
		mysqli_query($conn, "DELETE FROM `user_info` WHERE `id`=$var_id");
	$_SESSION['edit_users'] = false;
	header("Location: ../admin/edit_users.php");
}
?>
