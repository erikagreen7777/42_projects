<?php
session_start();
function get_line(string $login) {
	global $conn;
	$user_fetch_sql = 'SELECT * FROM stock WHERE item=?';
	$user_fetch_stm = mysqli_prepare($conn, $user_fetch_sql);
	mysqli_stmt_bind_param($user_fetch_stm, "s", $login);
	mysqli_stmt_execute($user_fetch_stm);
	$result = mysqli_stmt_get_result($user_fetch_stm);
	return (mysqli_fetch_assoc($result));
}
function get_info() {
	global $conn;
	$user_fetch_sql = "SELECT * FROM stock";
	$user_fetch_stm = mysqli_prepare($conn, $user_fetch_sql);
	mysqli_stmt_execute($user_fetch_stm);
	$result = mysqli_stmt_get_result($user_fetch_stm);
	return (mysqli_fetch_all($result, MYSQLI_ASSOC));
}

function insert($login, $item, $count, $price) {
	global $conn;
	$my_sql = "INSERT INTO `Cart` (`login`, `item`, `count`, `price`) VALUES ('$login','$item',$count,$price)";
	if (!mysqli_query($conn, $my_sql))
		echo "Error: " . $my_sql . "<br>" . mysqli_error($conn);
	return $my_sql;
}

/* function action($a, $b, $c, $d) { */
/* 	insert($a, $b, (int)$c, (int)$d); */
/* 	header("Location: /includes/balls.php"); */
/* } */

$user		= 'root';
$password 	= 'root';
$db 		= 'rush00';
$host 		= 'localhost';
$port 		= 3306;

$conn = mysqli_connect(
	$host,
	$user,
	$password,
	$db,
	$port
);
if (!$conn)
	die("Connection failed: " . mysqli_connect_error());
$table = get_info();
	if (!isset($_SESSION['who']))
				$who_is = "tmpuser";
			else
				$who_is = $_SESSION['who'];
if ((isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base']) || isset($_POST['count_base'])) && isset($_POST['buy']) && $_POST['buy'] == "ok")
{
	foreach ($table as $val)
	{
		if ($val['item'] == "baseball" && isset($_POST['count_base']))
		{
			insert($who_is, $val['item'], (int)$_POST['count_base'], $val['price']);
		//	header("Location: includes/balls.php");

		}
		else if ($val['item'] == "basketball" && isset($_POST['count_bask']))
		{
			insert($who_is, $val['item'], (int)$_POST['count_bask'], $val['price']);
			header("Location: includes/balls.php");

		}
		else if ($val['item'] == "soccerball" && isset($_POST['count_soc']))
		{
		
			insert($who_is, $val['item'], (int)$_POST['count_soc'], $val['price']);
			header("Location: /includes/balls.php");

		}
		else if ($val['item'] == "poster1" && isset($_POST['count_pos1']))
		{
		
			insert($who_is, $val['item'], (int)$_POST['count_pos1'], $val['price']);
			header("Location: ecommerce/includes/posters.php");

		}
		else if ($val['item'] == "poster2" && isset($_POST['count_pos2']))
		{
		
			insert($who_is, $val['item'], (int)$_POST['count_pos2'], $val['price']);
			header("Location: ecommerce/includes/posters.php");

		}
		else if ($val['item'] == "poster3" && isset($_POST['count_pos3']))
		{
			insert($who_is, $val['item'], (int)$_POST['count_pos3'], $val['price']);
			header("Location: ecommerce/includes/posters.php");

		}
		else if ($val['item'] == "boots" && isset($_POST['count_boots']))
		{
		
			insert($who_is, $val['item'], (int)$_POST['count_boots'], $val['price']);
			header("Location: ecommerce/includes/clothes.php");

		}
		else if ($val['item'] == "hat" && isset($_POST['count_hat']))
		{
			insert($who_is, $val['item'], (int)$_POST['count_hat'], $val['price']);
			header("Location: ecommerce/includes/clothes.php");

		}
		else if ($val['item'] == "jersey" && isset($_POST['count_jer']))
		{
			insert($who_is, $val['item'], (int)$_POST['count_jer'], $val['price']);
			header("Location: ecommerce/includes/clothes.php");

		}
	}
}
mysqli_close($conn);

?>
