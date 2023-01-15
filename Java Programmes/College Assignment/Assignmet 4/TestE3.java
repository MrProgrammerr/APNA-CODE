// Exception implimentation
import java.util.*;
class TestE3{
	public static void main(String args[]){
		int no1, no2;
		int res;
		System.out.println("Enter numbers");
		Scanner in = new Scanner(System.in);
		try{
			no1 = in.nextInt();
			no2 = in.nextInt();
			if(no2==0){
				throw new ArithmeticException();
			}
			else{
				res = no1/no2;
				System.out.println("Result "+res);
			}
		}
		catch(ArithmeticException ob){
			System.out.println("Cannt be devided by zero");
		}
		
		System.out.println("Over");
		System.out.println("Thank You");
	}
}