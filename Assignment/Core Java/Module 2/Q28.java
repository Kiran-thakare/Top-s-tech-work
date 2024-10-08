/*
 * Print the sum, difference and product of two complex numbers by creating a class 
   named 'Complex' with separate methods for each operation whose real and 
      imaginary parts are entered by user. 
 * 
 */

class Complex {

	int real, imaginary;

	Complex() {
	}

	Complex(int tempReal, int tempImaginary) {
		real = tempReal;
		imaginary = tempImaginary;
	}

	Complex addComp(Complex C1, Complex C2) {

		Complex temp = new Complex();

		temp.real = C1.real + C2.real;

		temp.imaginary = C1.imaginary + C2.imaginary;

		return temp;
	}

	Complex subtractComp(Complex C1, Complex C2) {
		Complex temp = new Complex();

		temp.real = C1.real - C2.real;

		temp.imaginary = C1.imaginary - C2.imaginary;

		return temp;
	}

	void printComplexNumber() {
		System.out.println("Complex number: " + real + " + " + imaginary);
	}
}

public class Q28 {

	public static void main(String[] args) {

		// First Complex number
		Complex C1 = new Complex(3, 2);
		C1.printComplexNumber();

		// Second Complex number
		Complex C2 = new Complex(9, 5);
		C2.printComplexNumber();

		// for Storing the sum
		Complex C3 = new Complex();
		C3 = C3.addComp(C1, C2);

		System.out.print("Sum of ");
		C3.printComplexNumber();

		C3 = C3.subtractComp(C1, C2);

	}
}
