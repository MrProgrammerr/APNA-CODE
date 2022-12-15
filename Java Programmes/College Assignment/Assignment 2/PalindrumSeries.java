import java.util.*;
class PalindrumSeries
{
	public static void main(String args[])
	{
		int init,end,i,j,rev,tmp;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the First Number  : ");
		init=in.nextInt();
		System.out.print("Enter the Last Number  : ");
		end=in.nextInt();
		for(i=init;i<=end;i++)
		{
			tmp=i;
			rev=0;
			while(tmp>0)
			{
				rev=(rev*10)+(tmp%10);
				tmp=tmp/10;
			}
			if(rev==i)
			{
				System.out.print(i+" ");
			}
		}
	}
}