// Fibonacii Series
import java.util.*;
class Fibo{
	public static void main(String args[]){
		int n;
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter the last number");
			n = in.nextInt();
		}
		System.out.print("0, 1, ");
		int n1 = 0, n2 = 1;
		for(int i = 2; i<=n-1; i++, n1++,n2++){
			int sum = n1 + n2;
			System.out.print(sum+", ");
		}
	}
}