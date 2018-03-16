<!DOCTYPE html>
<?php session_start(); ?>
<html>
<head>
	<title>Sports Ball Store</title>
	<link rel="stylesheet" type="text/css" href="styles/styles.css" media="all" />

</head>
<body>
	<div class="main_wrapper">
		<div class="header_wrapper">
			<img id="logo" src="https://www.flagshipcompany.com/wp-content/uploads/2016/05/e-commerce-integration-header-image.png">
		</div>
	</div>	
	<div class="menubar">
		<ul id="menu">
			<li><a href="index.php">Home</a></li>
			<li><a href="includes/cart.php">Cart</a></li>
						<li><a href="admin/admin.html">Admin</a></li>
			<li><a href="/logout.php"><button type="button">Logout</button></a></li>

				<div id="form"><?php if (!(isset($_SESSION['who']))) { echo '<form  action="create.php" action="login.php" method="post">
    				Username:
    				<input type="text" name="login" value="" />'; if (isset($_SESSION['wat'])) { echo '?'; }echo '
					<br />
					Password:
					<input type="password" name="passwd" value="" />
					<button type="submit" name="submit" value="Sign In">Sign In</a></button>
					<br>
					// <a href="/logout.php"><button type="button">Logout</button></a>
					<button type="submit" name="sign" value="Sign Up">Sign Up</a></button>
										</div>'; } else { echo "<h1>Welcome ". $_SESSION['who']. "</h1>";}?>	
				</form>
			</div>
		</ul>
	</div>
	<div class ="content_wrapper">
		<div id="sidebar">
			<div id="sidebar_title">
				Categories
			</div>
				<ul id="cats">
					<li><a href="includes/balls.php">Balls</a></li>
					<li><a href="includes/clothes.php">Clothes</a></li>
					<li><a href="includes/posters.php">Posters</a></li>
				</ul>
		</div>	
		<div id="content_area">
			<div class="row clearfix">
				<div class="col-1-3">
					<img src="http://www.freepngimg.com/thumb/baseball/3-2-baseball-png-picture-thumb.png">
					<br>
					<button type="button"><a href="includes/balls.php">Balls</a></button>
				</div>
				<div class="col-1-3">
					<img src="http://www.velobikes.co.uk/images/foxripleywomensjersey,fuchsia.png?height=200&width=200">
					<br>
					<button type="button"><a href="includes/clothes.php">Clothes</a></button>
				</div>
				<div class="col-1-3">
					<img src="http://rs609.pbsrc.com/albums/tt177/TheBigMatt90/Demotivational%20Posters/SoccerPlayers-demotivational-poster.png~c200">
					<br>
					<button type="button"><a href="includes/posters.php">Posters</a></button>
				</div>
			</div>
		</div>
	</div>
</body>
</html>
