import java.util.Scanner;

public class Ex1 {
    public static void main(String[] args) {
        int a, b;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter two numbers");
        a = in.nextInt();
        b = in.nextInt();
        int r;
        int d = a-b;
        try{
            r = a/d;
            System.out.println("Result of a/a-b = "+r);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
    }
}
