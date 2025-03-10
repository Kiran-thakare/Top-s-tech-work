package com.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;

import com.model.User;
import com.service.CategoryService;
import com.service.UserService;

@Controller
public class HomeController {

	@Autowired
	CategoryService service;

	@GetMapping("/")
	public String index() {
		return "index";

	}

	@GetMapping("/shop")
	public String shop(Model model) {
		model.addAttribute("allCategory", service.allCategory());
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

}
