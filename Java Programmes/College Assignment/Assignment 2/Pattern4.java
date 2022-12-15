import java.util.*;
class Pattern4
{
	public static void main(String args[])
	{
		int i,j,k=1;
		for(i=1;i<6;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.print(" "+k+" ");
				k++;
			}
			System.out.println();
		}
	}
}