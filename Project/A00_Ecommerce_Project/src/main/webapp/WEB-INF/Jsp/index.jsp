<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<!DOCTYPE html>
<html lang="en">

<head>
<meta charset="UTF-8">
<meta name="description" content="">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport"
	content="width=device-width, initial-scale=1, shrink-to-fit=no">
<!-- The above 4 meta tags *must* come first in the head; any other head content must come *after* these tags -->

<!-- Title  -->
<title>Amado - Furniture Ecommerce Template | Home</title>

<!-- Favicon  -->
<link rel="icon" href="img/core-img/favicon.ico">

<!-- Core Style CSS -->
<link rel="stylesheet" href="css/core-style.css">
<link rel="stylesheet" href="style.css">

</head>

<body>
	<!-- Search Wrapper Area Start -->
	<div class="search-wrapper section-padding-100">
		<div class="search-close">
			<i class="fa fa-close" aria-hidden="true"></i>
		</div>
		<div class="container">
			<div class="row">
				<div class="col-12">
					<div class="search-content">
						<form action="#" method="get">
							<input type="search" name="search" id="search"
								placeholder="Type your keyword...">
							<button type="submit">
								<img src="img/core-img/search.png" alt="">
							</button>
						</form>
					</div>
				</div>
			</div>
		</div>
	</div>
	<!-- Search Wrapper Area End -->

	<!-- ##### Main Content Wrapper Start ##### -->
	<div class="main-content-wrapper d-flex clearfix">

		<!-- Mobile Nav (max width 767px)-->
		<div class="mobile-nav">
			<!-- Navbar Brand -->
			<div class="amado-navbar-brand">
				<a href="/"><img src="img/core-img/logo.png" alt=""></a>
			</div>
			<!-- Navbar Toggler -->
			<div class="amado-navbar-toggler">
				<span></span><span></span><span></span>
			</div>
		</div>

		<!-- Header Area Start -->
		<header class="header-area clearfix">
			<!-- Close Icon -->
			<jsp:include page="header.jsp"></jsp:include>

		</header>
		<!-- Header Area End -->

		<!-- Product Catagories Area Start -->
		<div class="products-catagories-area clearfix">
			<div class="amado-pro-catagory clearfix">

				<c:forEach items="${products}" var="p">
					<!-- Single Catagory -->
					<div class="single-products-catagory clearfix">
						<a href="productDetails?id=${p.getPid()}"> <img
							src="img/${p.getProductImage()}" alt=""> <!-- Hover Content -->
							<div class="hover-content">
								<div class="line"></div>
								<p>${p.getProductPrice()}</p>
								<h4>${p.getProductName()}</h4>
							</div>
						</a>
					</div>
				</c:forEach>
				<!-- Single Catagory -->
				<!--	<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/2.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $180</p>
							<h4>Minimalistic Plant Pot</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/3.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $180</p>
							<h4>Modern Chair</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/4.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $180</p>
							<h4>Night Stand</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/5.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $18</p>
							<h4>Plant Pot</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/6.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $320</p>
							<h4>Small Table</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/7.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $318</p>
							<h4>Metallic Chair</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/8.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $318</p>
							<h4>Modern Rocking Chair</h4>
						</div>
					</a>
				</div>

				Single Catagory
				<div class="single-products-catagory clearfix">
					<a href="shop.html"> <img src="img/bg-img/9.jpg" alt="">
						Hover Content
						<div class="hover-content">
							<div class="line"></div>
							<p>From $318</p>
							<h4>Home Deco</h4>
						</div>
					</a>
				</div> -->
			</div>
		</div>
		<!-- Product Catagories Area End -->
	</div>
	<!-- ##### Main Content Wrapper End ##### -->

	<!-- ##### Newsletter Area Start ##### -->
	<section class="newsletter-area section-padding-100-0">
		<div class="container">
			<div class="row align-items-center">
				<!-- Newsletter Text -->
				<div class="col-12 col-lg-6 col-xl-7">
					<div class="newsletter-text mb-100">
						<h2>
							Subscribe for a <span>25% Discount</span>
						</h2>
						<p>Nulla ac convallis lorem, eget euismod nisl. Donec in
							libero sit amet mi vulputate consectetur. Donec auctor interdum
							purus, ac finibus massa bibendum nec.</p>
					</div>
				</div>
				<!-- Newsletter Form -->
				<div class="col-12 col-lg-6 col-xl-5">
					<div class="newsletter-form mb-100">
						<form action="#" method="post">
							<input type="email" name="email" class="nl-email"
								placeholder="Your E-mail"> <input type="submit"
								value="Subscribe">
						</form>
					</div>
				</div>
			</div>
		</div>
	</section>
	<!-- ##### Newsletter Area End ##### -->

	<!-- ##### Footer Area Start ##### -->
	<footer class="footer_area clearfix">
		<jsp:include page="footer.jsp"></jsp:include>
	</footer>
	<!-- ##### Footer Area End ##### -->

	<!-- ##### jQuery (Necessary for All JavaScript Plugins) ##### -->
	<script src="js/jquery/jquery-2.2.4.min.js"></script>
	<!-- Popper js -->
	<script src="js/popper.min.js"></script>
	<!-- Bootstrap js -->
	<script src="js/bootstrap.min.js"></script>
	<!-- Plugins js -->
	<script src="js/plugins.js"></script>
	<!-- Active js -->
	<script src="js/active.js"></script>

</body>

</html>