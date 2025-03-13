package com.service;

import java.util.List;

import com.model.User;

public interface UserService {

	public void addOrUpdateUser(User user);

	public List<User> allUsers();

	public User getUserById(int id);

	public void deleteUserById(int id);
	
	public List<User> findByEmailOrPassword(String email,String password);

}
