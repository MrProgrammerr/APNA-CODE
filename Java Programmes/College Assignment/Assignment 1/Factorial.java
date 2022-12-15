import java.util.*;
class Factorial 
{
    public static void main(String args[])
    {
        int fact=1,num,tmp;
        System.out.print("Enter the Number : ");
        Scanner in = new Scanner(System.in);
        num=in.nextInt();
        tmp=num;
        while(num>0)
        {
            fact=fact*num;
            num--;
        }
        System.out.println(tmp+"! = "+fact);
    }    
}
