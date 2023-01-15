
// 6. Prime number between a range

import java.util.Scanner;

public class PrimeRange {
    public static void main(String[] args) {
        int num1, num2;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter first number");
            num1 = in.nextInt();
            System.out.println("Enter second number");
            num2 = in.nextInt();
        }
        while (num1 < num2) {
            boolean flag = false;

            for(int i = 2; i <= num1/2; ++i) {
                // condition for nonprime number
                if(num1 % i == 0) {
                    flag = true;
                    break;
                }
            }

            if (!flag && num1 != 0 && num1 != 1)
                System.out.print(num1 + " ");

            ++num1;
        }
    }
}
