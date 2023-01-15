
// 5. LCM of 2 numbers
import java.util.*;
public class LCM {
    public static void main(String[] args) {
        int num1, num2, lcm;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter first number");
            num1 = in.nextInt();
            System.out.println("Enter second number");
            num2 = in.nextInt();
        }
        lcm = (num1 > num2) ? num1 : num2;
        while (true) {
            if (lcm % num1 == 0 && lcm % num2 == 0) {
                System.out.printf("The LCM of %d and %d is %d.", num1, num2, lcm);
                break;
            }
            ++lcm;
        }
    }
}