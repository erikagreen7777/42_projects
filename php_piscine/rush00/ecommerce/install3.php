<?php

$servername = "localhost";
$username = "root";
$password = "root";

// Create connection
$conn = mysqli_connect($servername, $username, $password);
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

// Create database
$sql = "CREATE DATABASE rush00";
if (mysqli_query($conn, $sql)) {
    echo "Database created successfully";
} else {
    echo "Error creating database: " . mysqli_error($conn);
}


$sql_user_info = "CREATE TABLE `user_info` (
  `id` int(11) NOT NULL,
  `login` varchar(255) NOT NULL,
  `passwd` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8";

$sql_cart = "CREATE TABLE `cart` (
  `login` varchar(255) NOT NULL,
  `item` varchar(255) NOT NULL,
  `count` int(11) NOT NULL,
  `price` int(11) NOT NULL,
  `id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8";

$sql_stock = "CREATE TABLE `stock` (
  `id` int(11) NOT NULL,
  `item` varchar(255) NOT NULL,
  `price` int(11) NOT NULL,
  `count` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8";

if (mysqli_query($conn, $sql_user_info)
  && mysqli_query($conn, $sql_cart)
  && mysqli_query($conn, $sql_stock)
  ) {
	  echo "Table MyGuests created successfully";
} else {
  echo "Error creating table: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
