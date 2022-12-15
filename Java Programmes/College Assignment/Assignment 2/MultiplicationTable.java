import java.util.*;
class MultiplicationTable
{
	public static void main(String args[])
	{
		int end,i,j;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter end Number for Multiplication Table : ");
		end=in.nextInt();
		for(i=1;i<=end;i++)
		{
			System.out.println("Table of "+i+" :\n");
			for(j=1;j<=10;j++)
			{
				System.out.println(i+" * "+j+" = "+i*j);
			}
			System.out.println();
		}
	}
}