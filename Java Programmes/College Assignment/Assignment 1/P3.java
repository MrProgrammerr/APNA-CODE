// partern P3
import java.util.*;
class P3{
	public static void main(String args[]){
		int n;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the row size");
		n = in.nextInt();
		
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=i; j++){
				System.out.print(i);
			}
			System.out.println("");
		}
	}
}