package com.repo;

import org.springframework.data.jpa.repository.JpaRepository;

import com.model.Cart;

public interface CartRepo extends JpaRepository<Cart, Integer> {

}
