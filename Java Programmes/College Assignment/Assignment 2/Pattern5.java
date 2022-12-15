import java.util.*;
class Pattern5
{
	public static void main(String args[])
	{
		int i,j,k=0;
		for(i=1;i<6;i++)
		{
			for(j=1;j<=i;j++)
			{
				if((i+j)%2==0)
				{
					System.out.print(" "+0+" ");
				}
				else
				{
					System.out.print(" "+1+" ");
				}
				k++;
			}
			System.out.println();
		}
	}
}