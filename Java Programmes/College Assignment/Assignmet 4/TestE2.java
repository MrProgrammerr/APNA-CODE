// Exception implimentation
import java.util.*;
class TestE2{
	public static void main(String args[]){
		int no1, no2;
		System.out.println("Enter numbers");
		Scanner in = new Scanner(System.in);
		try{
			no1 = in.nextInt();
			no2 = in.nextInt();
			int res = no1/no2;
			System.out.println("Result "+res);
		}
		catch(ArithmeticException ob){
			System.out.println("Cannt be devided by zero");
		}
		catch(NullPointerException ob){
			System.out.println("Null found");
		}
		catch(ArrayIndexOutOfBoundsException ob){
			System.out.println("Array size ovrflow");
		}
		System.out.println("Over");
		System.out.println("Thank You");
	}
}