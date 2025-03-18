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

import com.model.Cart;
import com.model.Product;
import com.model.User;
import com.service.CartService;
import com.service.CategoryService;
import com.service.ProductService;
import com.service.UserService;

import jakarta.servlet.http.HttpSession;

@Controller
public class HomeController {

	@Autowired
	CategoryService service;

	@Autowired
	ProductService productService;

	@Autowired
	UserService userService;

	@Autowired
	CartService cartService;

	@GetMapping("/")
	public String index(Model model, HttpSession session) {

		String userEmail = (String) session.getAttribute("email");
		if (userEmail == null) {
			model.addAttribute("error", "Do You Not Acceess Without Login Homepage");
			return "redirect:/login";
		}

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
	public String cart(Model model) {

		model.addAttribute("cart", cartService.allCartItems());

		return "cart";

	}

	@GetMapping("/remove")
	public String removeCart(@RequestParam("cid") int id) {

		cartService.deleteById(id);

		return "redirect:/cart";

	}
	

	@PostMapping("/addcart")
	public String addCart(@RequestParam("pid") int id, @RequestParam("quantity") int qty, HttpSession session,
			@ModelAttribute("cart") Cart c) {
		String email = (String) session.getAttribute("email");
		String pass = (String) session.getAttribute("pass");
		User u = (User) userService.findByEmail(email, pass);

		c.setProduct(productService.productById(id));
		c.setUser(userService.getUserById(u.getId()));
		c.setQty(qty);

		cartService.addOrUpdateCart(c);

		System.out.println(id + "   " + qty + "    " + email + " " + u.getId());

		return "redirect:/cart";
	}

	@GetMapping("/checkout")
	public String checkout() {
		return "checkout";

	}

	@GetMapping("/login")
	public String userLogin() {
		return "userLogin";

	}

	@GetMapping("/logout")
	public String logout(HttpSession session) {

		session.invalidate();
		return "redirect:/";

	}

	/*
	 * Product productById = productService.productById(pid); String email =
	 * (String) session.getAttribute("email"); String pass = (String)
	 * session.getAttribute("pass"); System.out.println(email); User byEmail =
	 * (User) userService.findByEmail(email, pass);
	 * 
	 * List<Product> list = new ArrayList<>(); list.add(productById);
	 * model.addAttribute("productbyid", list); model.addAttribute("qty", qty);
	 * model.addAttribute("byEmail", byEmail);
	 */

}
