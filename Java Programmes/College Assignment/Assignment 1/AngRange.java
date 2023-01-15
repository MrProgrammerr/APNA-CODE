// Angstrom Number in range

import java.util.*;

class AngRange {
	public static void main(String[] args) {
		int num1, num2;
		try (Scanner sc = new Scanner(System.in)) {
			System.out.println("Enter the first number ::");
			num1 = sc.nextInt();
			System.out.println("Enter the second number ::");
			num2 = sc.nextInt();
		}
		for(int number = num1 + 1; number < num2; ++number) {
			int digits = 0;
			int result = 0;
			int originalNumber = number;
	  
			// number of digits calculation
			while (originalNumber != 0) {
			  originalNumber /= 10;
			  ++digits;
			}
	  
			originalNumber = number;
	  
			// result contains sum of nth power of its digits
			while (originalNumber != 0) {
			  int remainder = originalNumber % 10;
			  result += Math.pow(remainder, digits);
			  originalNumber /= 10;
			}
	  
			if (result == number) {
			  System.out.print(number + " ");
			}
		  }
	}
}