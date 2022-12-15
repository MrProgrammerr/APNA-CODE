import java.util.*;
class ArmstrongSeries
{
	public static void main(String args[])
	{
		int init,end,i,dgt,num,sum;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the First Number  : ");
		init=in.nextInt();
		System.out.print("Enter the Last Number  : ");
		end=in.nextInt();
		for(i=init;i<=end;i++)
		{
			sum=0;
			num=i;
			dgt=0;
			while(num>0)
			{
				num=num/10;
				dgt++;
			}
			num=i;
			while(num>0)
			{
				sum=(int)Math.pow((num%10),dgt)+sum;
				num=num/10;
			}
			if(sum==i)
			{
				System.out.println(i+" ");
			}
		}
	}
}