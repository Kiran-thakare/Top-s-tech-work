/*
 * W.A.J.P to check whether a given string starts with the contents of another string. 
  Red is favorite color. Starts with Red? True Orange is also my favorite color. Starts 
  with Red? False I3.
 */
public class Q17 {
	public static void main(String[] args) {

		String s1 = "Red is favorite color";
		String s2 = "Orange is also my favorite color";

		System.out.println("Starts With Red:" + s1.startsWith("Red"));
		System.out.println("Starts With Red:" + s2.startsWith("Red"));
	}
}
