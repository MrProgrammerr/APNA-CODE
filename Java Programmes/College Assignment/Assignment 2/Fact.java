// Factorial of a number

import java.util.*;
class Fact{
	public static void main(String args[]){
		int num;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number");
		num = in.nextInt();
		
		int n, fact=1;
		for(int i = 1; num>0; i++, num--){
			fact = fact * i;
		}
		System.out.println("Factoria of entered number is "+fact);
	}
}