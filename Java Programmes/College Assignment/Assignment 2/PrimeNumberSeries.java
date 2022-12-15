import java.util.*;
class PrimeNumberSeries
{
	public static void main(String args[])
	{
		int init,end,i,j;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the First Number  : ");
		init=in.nextInt();
		System.out.print("Enter the Last Number  : ");
		end=in.nextInt();
		System.out.print("Prime Numbers are : ");
		if(init==0)
		{
			init=2;
		}
		else if(init==1)
		{
			init=2;
		}
		for(i=init;i<=end;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			if(j==i)
			{
				System.out.print(i+"  ");
			}
		}
	}
}