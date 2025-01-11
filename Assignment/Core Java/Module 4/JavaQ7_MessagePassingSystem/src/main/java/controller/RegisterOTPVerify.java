package controller;

import java.io.IOException;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

@WebServlet("/verifyOtp")
public class RegisterOTPVerify extends HttpServlet {

	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {

		HttpSession session = req.getSession();
		String enterOTP = req.getParameter("otp");
		String genratedOTp = (String) session.getAttribute("otp");
		String regenratedOTp = (String) session.getAttribute("reotp");
		String Email = (String) session.getAttribute("email");
		System.out.println(Email + " :Create Random Otp :" + genratedOTp + " :Input OTP :" + enterOTP);

		if (enterOTP != null && enterOTP.equals(genratedOTp) || enterOTP.equals(regenratedOTp)) {
			req.getRequestDispatcher("login.jsp").forward(req, resp);
		} else {
			req.setAttribute("err", "Invalid OTP ");
			req.getRequestDispatcher("RegisterOtpVerify.jsp").forward(req, resp);
		}

	}
}
