// import java.util.Scanner;

// public class ass {

//     // public static void main(String[] args) {
//     // for (int i = 1; i <= 5; i++) {
//     // for (int j = 4; j >= i; j--)
//     // System.out.print(" ");
//     // for (int k = i; k >= 1; k--)
//     // System.out.print(k);
//     // System.out.println();
//     // }
//     // for (int x = 4; x >= 1; x--) {
//     // for(int space=5-x;space>0;space--)
//     // System.out.print(" ");
//     // for (int y = x; y > 0; y--)
//     // System.out.print(y);
//     // System.out.println();
//     // }
//     // }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         System.out.println("Enter the number of rows: ");

//         int rows = sc.nextInt();
//         for (int i = 1; i <= rows; i++) {
//             for (int j = rows; j > i; j--) {
//                 System.out.print(" ");
//             }
//             System.out.print("*");
//             for (int k = 1; k < 2 * (i - 1); k++) {
//                 System.out.print(" ");
//             }
//             if (i == 1) {
//                 System.out.println("");
//             } else {
//                 System.out.println("*");
//             }
//             for (i = rows - 1; i >= 1; i--) {
//                 for (int j = rows; j > i; j--) {
//                     System.out.print(" ");
//                 }
//                 System.out.print("*");
//                 for (int k = 1; k < 2 * (i - 1); k++) {
//                     System.out.print(" ");
//                 }
//                 if (i == 1)
//                     System.out.println("");
//                 else
//                     System.out.println("*");
//             }
//         }

//     }
// }

import java.util.Scanner;
public class ass
{
    public static void main(String[] args)
{
    Scanner sc = new Scanner(System.in);
 
    System.out.println("Enter the number of rows: ");
 
    int rows = sc.nextInt();    
    for (int i=1; i<= rows ; i++) { for (int j = rows; j > i ; j--) {
            System.out.print(" ");
        }
        System.out.print("*");
        for (int k = 1; k < 2*(i -1) ;k++) { System.out.print(" "); } if( i==1) { System.out.println(""); } else { System.out.println("*"); } } for (int i=rows-1; i>= 1 ; i--)
        {
        for (int j = rows; j > i ; j--) {
            System.out.print(" ");
        }
        System.out.print("*");
        for (int k = 1; k < 2*(i -1) ;k++) {
            System.out.print(" ");
        }
        if( i==1)
            System.out.println("");
        else
            System.out.println("*");
    }
    sc.close();
}
}

// import java.util.*;
 
// class ass
// {
// 	public static void main(String args[])
// 	{
// 		int i,j,n;
//  		Scanner sc = new Scanner(System.in);
//     		System.out.println("Enter the no of lines");
//  		n=sc.nextInt();
//     		for(i=1;i<=n;i++)
//     		{

// 	       		for(j=1;j<=n-i;j++)
//         		{
//      				System.out.printf("  ");
// 			} 	
// 	       		for(j=i;j>0;j--)
//         		{
//      				System.out.printf(" %c",(char)(j+64));
// 			} 			
// 	       		for(j=2;j<=i;j++)
//         		{
//      				System.out.printf(" %c",(char)(j+64));
// 			} 			

//         		System.out.println();
//     		}
// 	}
// }