// 9. Multiplication TableCellEditor
import java.util.*;
class MultiTable{
	public static void main(String args[]){
		int n;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the last number");
		n = in.nextInt();
		int r;
		System.out.println("");
		System.out.println("Multiplication 	Table of 1 is: ");
		for(int j = 1; j<=n; j++){
			for(int i = 1; i<=10; i++){
				r = j * i;
				System.out.println(j+" X "+i+" = "+r);
			}
			System.out.println("");
			System.out.println("Multiplication 	Table of "+(j+1)+"is: ");
		}
	}
}	