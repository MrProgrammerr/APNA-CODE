import java.util.*;
class Gcd 
{
    public static void main(String[] args) 
    {
        int num1,num2;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Two Numbers : ");
        num1=in.nextInt();
        num2=in.nextInt();
        while(num1!=num2)
        {
            if(num1>num2)
            {
                num1=num1-num2;
            }
            else
            {
                num2=num2-num1;
            }
        }
        System.out.println("GCD = "+num1);
    }
}
