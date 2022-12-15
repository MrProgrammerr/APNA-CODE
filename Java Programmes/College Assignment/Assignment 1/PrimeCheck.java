import java.util.*;
class PrimeCheck 
{
    public static void main(String args[]) 
    {
        int i,num;
        System.out.print("Enter the Number : ");
        Scanner in = new Scanner(System.in);
        num=in.nextInt();
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                System.out.println(num+" is not Prime Number .");
                break;
            }
        }
        if(i==num)
            System.out.println(num+" is Prime Number .");    
    }    
}
