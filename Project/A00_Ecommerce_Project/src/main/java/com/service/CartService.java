package com.service;

import java.util.List;

import com.model.Cart;

public interface CartService {

	public void addOrUpdateCart(Cart cart);

	public List<Cart> allCartItems();

	public void deleteById(int id);

	public Cart cartBYId(int id);
}
