/*
 *  Write a program in Java to display the pattern like right angle triangle with a 
 *  number. 
	1 
	12 
	123 
	1234 
	12345
 */

import java.util.Scanner;

public class Q6 {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		System.out.print("Enter Row:");
		int row = input.nextInt();

		for (int i = 1; i <= row; i++) {
			for (int j = 1; j <= i; j++) {
				System.out.print(j);
			}
			System.out.println();
		}
	}
}
