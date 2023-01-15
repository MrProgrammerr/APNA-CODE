import java.util.*;

class LabTestQ3 {
    public static void main(String[] args) {
        int num1, num2, f1, n, sqr, t1, t2;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the 1st number");
        num1 = in.nextInt();
        System.out.println("Enter the 2nd number");
        num2 = in.nextInt();

        while (num1 <= num2) {
            f1 = num1;
            int sqrrev = 0, rev = 0;
            while (f1 != 0) {
                t1 = f1 % 10;
                rev = rev * 10 + t1;
                f1 = f1 / 10;
            }

            sqr = num1 * num1;
            while (sqr != 0) {
                t2 = sqr % 10;
                sqrrev = sqrrev * 10 + t2;
                sqr = sqr / 10;
            }

            n = (int) Math.sqrt(sqrrev);

            if (n == rev) {
                if (num1 % 10 != 0) {
                    System.out.print(num1 + ", ");
                }
            }
            num1++;
        }
    }
}