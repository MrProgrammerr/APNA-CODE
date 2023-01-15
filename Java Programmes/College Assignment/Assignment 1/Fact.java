
// 3. Factorial of a number
import java.util.Scanner;

public class Fact {
    public static void main(String[] args) {
        int number, res=1;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter any number: ");
        number=in.nextInt();
        for(int i = 1; i<=number; i++){
            res = res * i;
        }
        System.out.println(number+"! = "+res);
    }
}
