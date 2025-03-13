package com.controller;

import java.util.ArrayList;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import com.model.Product;
import com.model.User;
import com.service.CategoryService;
import com.service.ProductService;
import com.service.UserService;

@Controller
public class HomeController {

	@Autowired
	CategoryService service;

	@Autowired
	ProductService productService;

	@GetMapping("/")
	public String index(Model model) {
		model.addAttribute("products", productService.allProducts());
		return "index";

	}

	@GetMapping("/shop")
	public String shop(Model model) {
		model.addAttribute("allCategory", service.allCategory());
		model.addAttribute("products", productService.allProducts());
		return "shop";

	}

	@GetMapping("/productDetails")
	public String product_details(@RequestParam("id") int pid, Model model) {
		Product productById = productService.productById(pid);

		System.out.println(productById);
		List<Product> list = new ArrayList<>();
		list.add(productById);
		model.addAttribute("productbyid", list);
		return "product_details";

	}

	@GetMapping("/cart")
	public String cart(@RequestParam("pid") int pid, Model model) {
		Product productById = productService.productById(pid);

		System.out.println(productById);
		List<Product> list = new ArrayList<>();
		list.add(productById);
		model.addAttribute("productbyid", list);
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
