<!DOCTYPE html>
<?php 
session_start(); 

include("../functions/functions.php");

include("/db.php");
?>
<html>
<head>
	<title>Cart</title>
	<link rel="stylesheet" type="text/css" href="../styles/carts.css" media="all" />
</head>
<body>
	<div class="main_wrapper">
		<div class="header_wrapper">
			<img id="logo" src="https://www.flagshipcompany.com/wp-content/uploads/2016/05/e-commerce-integration-header-image.png">
		</div>
	</div>	
	<div class="menubar">
		<ul id="menu">
			<li><a href="../index.php">Home</a></li>
			<li><a href="cart.php">Cart</a></li>
<li><a href="../admin/admin.html">Admin</a></li>
			<div id="form">
				<form action="login.php" method="post">
    				Username:
    				<input type="text" name="login" value="" />
          <br />
          Password:
          <input type="password" name="passwd" value="" />
          <input type="submit" name="submit" value="Sign In" />
          <br>
          <a href="../logout.php"><button type="button">Logout</button></a>
          <button type="button">Sign Up</a></button>
          			</div>
		</ul>
	</div>
	<div class ="content_wrapper">
		<div id="sidebar">
			<div id="sidebar_title">
				Categories
			</div>
				<ul id="cats">
					<li><a href="balls.php">Balls</a></li>
					<li><a href="clothes.php">Clothes</a></li>
					<li><a href="posters.php">Posters</a></li>
				</ul>
		</div>	
		<div id="content_area">
			 <div id="w">
    <header id="title">
      <h1>Shopping Cart</h1>
    </header>
    <div id="page">
      
      <table id="cart">
        <thead>
          <tr>
            <th class="first">Photo</th>
            <th class="second">Qty</th>
            <th class="third">Product</th>
            <th class="fourth">Line Total</th>
            <th class="fifth">&nbsp;</th>
          </tr>
        </thead>
        <tbody>
          <tr class="">
            <td><img src="http://rs609.pbsrc.com/albums/tt177/TheBigMatt90/Demotivational%20Posters/SoccerPlayers-demotivational-poster.png~c200" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Design Bundle Package</td>
            <td>$79.00</td>
          </tr>
          <tr class="productitm">
            <td><img src="https://images.cdn3.stockunlimited.net/clipart/american-football-poster-design_1491289.jpg" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>
            <tr class="productitm">
            <td><img src="https://images.lookhuman.com/render/thumbnail/4640068224064000/poster8x-whi-z1-t-hockey-love.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>

          <tr class="productitm">
            <td><img src="http://www.freepngimg.com/thumb/baseball/3-2-baseball-png-picture-thumb.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>

          <tr class="productitm">
            <td><img src="http://www.freepngimg.com/thumb/football/36635-3-football-soccer-ball-thumb.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>

          <tr class="productitm">
            <td><img src="http://www.freepngimg.com/thumb/basketball/2-basketball-ball-png-image-thumb.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>

          <tr class="productitm">
            <td><img src="https://i.imgur.com/RkzoXzZ.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>

          <tr class="productitm">
            <td><img src="https://i.imgur.com/RkzoXzZ.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>Stuff on my Cat: The Book</td>
            <td>$8.95</td>
          </tr>


          <tr class="productitm">
            <td><img src="https://i.imgur.com/vZ26Uwy.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>SpongeBob's First 100 Episodes</td>
            <td>$75.00</td>
          </tr>
          <tr class="productitm">
            <td><img src="https://i.imgur.com/tEdRnz4.png" class="thumb"></td>
            <td><input type="number" value="1" min="0" max="99" class="qtyinput"></td>
            <td>JavaScript &amp; jQuery: The Missing Manual</td>
            <td>$27.50</td>
          </tr>
          
          <tr class="extracosts">
            <td class="light">Shipping &amp; Tax</td>
            <td colspan="2" class="light"></td>
            <td>$35.00</td>
            <td>&nbsp;</td>
          </tr>
          <tr class="totalprice">
            <td class="light">Total:</td>
            <td colspan="2">&nbsp;</td>
            <td colspan="2"><span class="thick">$225.45</span></td>
          </tr>
          
          <tr class="checkoutrow">
            <td colspan="5" class="checkout"><button id="submitbtn">Checkout Now!</button></td>
          </tr>
        </tbody>
      </table>
    </div>
  </div>


	</div>
	<div id="footer">footer</div>










</body>
</html>
