import java.util.*;
class Armstrong 
{
    public static void main(String args[])
    {
        int num,dgt=0,tmp,sum=0;
        System.out.print("Enter the Number : ");
        Scanner in = new Scanner(System.in);
        num=in.nextInt();
        tmp=num;
        while(tmp>0)
        {
            tmp=tmp/10;
            dgt++;
        }
        tmp=num;
        while(tmp>0)
        {
            sum=sum + (int)Math.pow(tmp%10, dgt);
            tmp=tmp/10;
        }
        if(sum==num)
             System.out.println(num+" is Armstrong Number.");
        else
            System.out.println(num+" is not an Armstrong Number .");
    }
}
