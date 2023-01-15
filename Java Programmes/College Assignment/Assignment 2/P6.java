import java.util.*;
class P6{
	public static void main(String[] args){
		int n = 5;
		Scanner in = new Scanner(System.in);
		int i, j, k, l; 
		//Syste.out.println("Enter the number of row");
		for(i=1;i<=n;i++) {
			for(j=i;j<=n-1;j++) {
				System.out.print(" ");
				System.out.print(" ");
			}
			for(j=1;j<=i;j++) {
				System.out.print(j);
				System.out.print(" ");
			}
			for(j=i-1;j>=1;j--) {
				System.out.print(j);
				System.out.print(" ");
			}
			System.out.println();
		}
		k=1;
		for(i=4;i>=n-k && k<=4 ;i--,k++) {
			for(j=i;j<=n-1;j++) {
				System.out.print(" ");
				System.out.print(" ");
			}
			for(j=1;j<=i;j++) {
				System.out.print(j);
				System.out.print(" ");
				
			}
			for(j=i-1;j>=1;j--) {
				System.out.print(j);
				System.out.print(" ");
			}
			System.out.println();
		}
		
	}
}