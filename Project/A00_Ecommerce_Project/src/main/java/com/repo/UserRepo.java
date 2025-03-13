package com.repo;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;

import com.model.User;

public interface UserRepo extends JpaRepository<User, Integer> {

	public List<User> findByEmailOrPassword(String email, String password);

}
