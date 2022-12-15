import java.util.*;
class PlndrmCheck
{
    public static void main(String args[])
    {
        int num,rev=0,tmp;
        System.out.print("Enter the Number : ");
        Scanner in = new Scanner(System.in);
        num=in.nextInt();
        tmp=num;
        while(tmp>0)
        {
            rev=(rev*10)+(tmp%10);
            tmp=tmp/10;
        }
        if(num==rev)
            System.out.println(num+" is Palindrum .");
        else
            System.out.println(num+" is not Palindrum .");
    }
}