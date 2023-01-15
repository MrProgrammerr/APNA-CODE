
// GCD of 2 numbers
import java.util.*;

public class GCD {
    public static void main(String[] args) {
        int num1, num2, gcd = 1;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter first number");
            num1 = in.nextInt();
            System.out.println("Enter second number");
            num2 = in.nextInt();
        }
        int n1 = num1;int n2 = num2;
        // for (int i = 1; i <= num1 && i <= num2; ++i) {

        //     // check if i perfectly divides both num1 and num2
        //     if (num1 % i == 0 && num2 % i == 0)
        //         gcd = i;
        // }
        while(num1!=num2){
            if(num1>num2){
                num1 = num1 - num2;
            }
            else if(num2>num1){
                num2 = num2-num1;
            }
            else{
                gcd = num1;
            }
        }
        int lcm = (n1*n2)/gcd;
        System.out.println("GCD of " + n1 + " and " + n2 + " is " + gcd);
        System.out.println("LCM of " + n1 + " and " + n2 + " is " + lcm);

    }
}
