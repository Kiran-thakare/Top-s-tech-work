package com.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.model.Product;
import com.repo.ProductRepo;

@Service
public class ProductServiceImpl implements ProductService{
	@Autowired
	ProductRepo repo;

	@Override
	public void addOrUpdateProduct(Product product) {
		
		repo.save(product);
		
	}

	@Override
	public List<Product> allProducts() {
		// TODO Auto-generated method stub
		return repo.findAll();
	}

	@Override
	public Product productById(int id) {
		// TODO Auto-generated method stub
		return repo.findById(id).orElseThrow();
	}

	@Override
	public void deleteById(int id) {
		repo.deleteById(id);
		
	}

}
