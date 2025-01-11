package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import model.User;
import util.DBconnection;

public class UserDao {

	Connection con;

	public UserDao() {
		con = DBconnection.getConnection();
	}

	public int registerUser(User u) {
		int i = 0;
		try {
			PreparedStatement ps1 = con.prepareStatement("select *from stu where email=?");
			ps1.setString(1, u.getEmail());

			ResultSet rs = ps1.executeQuery();

			if (rs.next()) {
				System.out.println("Email Already Register");
			} else {

				PreparedStatement ps = con.prepareStatement("insert into stu values(?,?,?,?,?,?,?,?)");
				ps.setInt(1, 0);
				ps.setString(2, u.getFname());
				ps.setString(3, u.getLname());
				ps.setString(4, u.getEmail());
				ps.setString(5, u.getMobNo());
				ps.setString(6, u.getAddress());
				ps.setString(7, u.getGender());
				ps.setString(8, u.getPass());
				i = ps.executeUpdate();
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return i;
	}

}
