CREATE TABLE IF NOT EXISTS `cart` (
  `id` int(8) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  `code` varchar(255) NOT NULL,
  `image` text NOT NULL,
  `price` double(10,2) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `product_code` (`code`)
)

-- CREATE TABLE IF NOT EXISTS `products` (
--   `id` int(11) NOT NULL AUTO_INCREMENT,
--   `name` varchar(512) NOT NULL,
--   `description` text NOT NULL,
--   `price` decimal(10,2) NOT NULL,
--   `created` datetime NOT NULL,
--   `modified` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
--   PRIMARY KEY (`id`)
-- ) ENGINE=MyISAM  DEFAULT CHARSET=latin1 COMMENT='products that can be added to cart' AUTO_INCREMENT=41 ;

-- CREATE TABLE IF NOT EXISTS `product_images` (
--   `id` int(11) NOT NULL AUTO_INCREMENT,
--   `product_id` int(11) NOT NULL,
--   `name` varchar(512) NOT NULL,
--   `created` datetime NOT NULL,
--   `modified` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
--   PRIMARY KEY (`id`)
-- ) ENGINE=MyISAM  DEFAULT CHARSET=utf8 COMMENT='image files related to a product' AUTO_INCREMENT=105 ;

-- CREATE TABLE IF NOT EXISTS `cart_items` (
--   `id` int(11) NOT NULL AUTO_INCREMENT,
--   `product_id` int(11) NOT NULL,
--   `quantity` double NOT NULL,
--   `user_id` int(11) NOT NULL,
--   `created` datetime NOT NULL,
--   `modified` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
--   PRIMARY KEY (`id`)
-- ) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=40 ;


INSERT INTO `tblproduct` (`id`, `name`, `code`, `image`, `price`) VALUES
(1, '3D Camera', '3DcAM01', 'product-images/camera.jpg', 1500.00),
(2, 'External Hard Drive', 'USB02', 'product-images/external-hard-drive.jpg', 800.00),
(3, 'Wrist Watch', 'wristWear03', 'product-images/watch.jpg', 300.00);
