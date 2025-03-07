package com.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller

public class AdminController {

	@GetMapping("/admin")
	public String adminLogin() {
		return "adminLogin";

	}

	@GetMapping("/dashboard")
	public String adminDashboard() {
		return "adminDashboard";

	}
	
	@GetMapping("/users")
	public String users() {
		return "users";
		
	}
	
	
	
	@GetMapping("/product")
	public String Product() {
		return "product";
		
	}
	
	@GetMapping("/order")
	public String Order() {
		return "order";
		
	}
	
	

	@PostMapping("/adminLogin")
	public String processAdminLogin(@RequestParam String username, @RequestParam String password) {
		if ("admin@gmail.com".equals(username) && "admin123".equals(password)) {
			return "redirect:/dashboard";
		}
		return "redirect:/admin";
	}

}
