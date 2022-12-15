import java.util.Calendar;
import java.util.Scanner;
class Add3Numbers
{
    public static void main(String[] args) 
    {
        int num1,num2,num3;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter three Numbers : ");
        num1=in.nextInt();
        num2=in.nextInt();
        num3=in.nextInt();
        System.out.println("Aditio Result = "+(num1+num2+num3));
    }
}