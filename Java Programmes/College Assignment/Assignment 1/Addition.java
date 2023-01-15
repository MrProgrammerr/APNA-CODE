//Addition of two numbers
import java.util.*;
class Addition{
	public static void main(String args[]){
		int no1, no2, res;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter first number");
		no1 = sc.nextInt();
		System.out.println("Enter second number");
		no2 = sc.nextInt();
		res = no1 + no2;
		System.out.println("Sum of "+no1+" and "+no2+" is "+res);
	}
}	