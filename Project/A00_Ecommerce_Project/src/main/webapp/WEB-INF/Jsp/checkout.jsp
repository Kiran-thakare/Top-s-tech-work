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
<title>Amado - Furniture Ecommerce Template | Checkout</title>

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
			<jsp:include page="header.jsp"></jsp:include>
		</header>
		<!-- Header Area End -->

		<div class="cart-table-area section-padding-100">
			<div class="container-fluid">
				<div class="row">
					<div class="col-12 col-lg-8">
						<div class="checkout_details_area mt-50 clearfix">

							<div class="cart-title">
								<h2>Checkout</h2>
							</div>

							<form action="#" method="post">
								<div class="row">
									<c:forEach items="${cart }" var="dt" begin="0" end="0">
										<div class="col-12 mb-3">
											<input type="text" class="form-control" id="first_name"
												value="${dt.getUser().getName()}" placeholder="First Name"
												required>
										</div>

										<div class="col-12 mb-3">
											<input type="email" class="form-control" id="email"
												placeholder="Email" value="${dt.getUser().getEmail()}">
										</div>

										<div class="col-md-12 mb-3">
											<input type="number" class="form-control" id="phone_number"
												min="0" placeholder="Phone No"
												value="${dt.getUser().getPhone()}">
										</div>

										<div class="col-12 mb-3">
											<input type="text" class="form-control" id="product"
												placeholder="Product Name"
												value="${dt.getProduct().getProductName()}">
										</div>

										<div class="col-12 mb-3">
											<input type="text" class="form-control" id="qty"
												placeholder="Product Qty"
												value="${dt.getProduct().getProductQty()}">
										</div>



										<div class="col-12 mb-3">
											<input type="text" class="form-control" id="price"
												placeholder="Product Price"
												value="${dt.getProduct().getProductPrice()}">
										</div>

										<!-- <div class="col-12 mb-3">
											<select class="w-100" id="country">
												<option value="usa">United States</option>
												<option value="uk">United Kingdom</option>
												<option value="ger">Germany</option>
												<option value="fra">France</option>
												<option value="ind">India</option>
												<option value="aus">Australia</option>
												<option value="bra">Brazil</option>
												<option value="cana">Canada</option>
											</select>
										</div> -->
										<div class="col-12 mb-3">
											<input type="text" class="form-control mb-3"
												id="street_address" placeholder="Address"
												value="${dt.getUser().getAddress()}">
										</div>

										<div class="col-md-12 mb-3">
											<input type="text" class="form-control" id="zipCode"
												placeholder="Zip Code" value="${dt.getUser().getPincode() }">
										</div>


									</c:forEach>
								</div>
							</form>
						</div>
					</div>
					<div class="col-12 col-lg-4">
						<div class="cart-summary">
							<h5>Cart Total</h5>
							<ul class="summary-table">
								<li><span>subtotal:</span> <span>$140.00</span></li>
								<li><span>delivery:</span> <span>Free</span></li>
								<li><span>total:</span> <span>$140.00</span></li>
							</ul>

							<div class="payment-method">
								<!-- Payment Form -->
								<form action="payment" method="post">
									<div class="custom-control custom-radio mr-sm-2">
										<input type="radio" class="custom-control-input" id="cod"
											name="paymentMethod" value="COD" checked> <label
											class="custom-control-label" for="cod">Cash on
											Delivery</label>
									</div>

									<div class="custom-control custom-radio mr-sm-2">
										<input type="radio" class="custom-control-input" id="paypal"
											name="paymentMethod" value="PayPal"> <label
											class="custom-control-label" for="paypal">PayPal <img
											class="ml-15" src="img/core-img/paypal.png" alt="">
										</label>
									</div>

									<div class="cart-btn mt-4">
										<button type="submit" class="btn amado-btn w-100">Pay
											Now</button>
									</div>
								</form>
							</div>


							<div class="cart-btn mt-100">
								<a href="#" class="btn amado-btn w-100">Checkout</a>
							</div>


						</div>
					</div>
				</div>
			</div>
		</div>
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