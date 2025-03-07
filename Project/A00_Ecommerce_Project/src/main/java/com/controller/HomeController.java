package com.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class HomeController {

	@GetMapping("/")
	public String index() {
		return "index";

	}
	
	@GetMapping("/shop")
	public String shop() {
		return "shop";

	}
	
	@GetMapping("/productDetails")
	public String product_details() {
		return "product_details";

	}
	
	@GetMapping("/cart")
	public String cart() {
		return "cart";

	}
	
	@GetMapping("/checkout")
	public String checkout() {
		return "checkout";
		
	}
	
	@GetMapping("/login")
	public String userLogin() {
		return "userLogin";
		
	}
	
	@GetMapping("/registration")
	public String reg()
	{
		return "registration";
	}
	
}
