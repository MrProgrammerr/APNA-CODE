// import java.util.*;

// Pattern 6
public class P6{
	public static void main(String[] args){
		int n = 5;
		// Scanner in = new Scanner(System.in);
		int i, j, k, l; 
		//Syste.out.println("Enter the number of row");
		for(i=1;i<=n;i++) {
			for(j=i;j<=n-1;j++) {
				System.out.print(" ");
				System.out.print(" ");
			}
			for(j=1;j<=n-i;j++) {
				System.out.print("*");
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
			for(j=1;j<=(i+j);j++) {
				System.out.print(j);
				System.out.print(" ");
				
			}
			for(j=i-1;j>=1;j--) {
				System.out.print(j);
				System.out.print(" ");
			}
			System.out.println();
		}

		// int i,j,x=5,l=0,k;
		// for(i=1;i<10;i++)
		// {
		// 	k=1;
		// 	for(j=1;j<10;j++)
		// 	{
		// 		if(j<x-l || j>x+l)
		// 		{
		// 			System.out.print("  ");
		// 		}
		// 		else
		// 		{
		// 			System.out.print(k+" ");
		// 			if(j<5)
		// 			{
		// 				k++;
		// 			}
		// 			else
		// 			{
		// 				k--;
		// 			}
		// 		}
		// 	}
		// 	if(i<5)
		// 	{
		// 		l++;
		// 	}
		// 	else
		// 	{
		// 		l--;
		// 	}
		// 	System.out.println();
		// }
	}
}