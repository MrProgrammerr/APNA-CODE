
// 1. Check Palindrum or not
import java.util.Scanner;

public class Pali {
    public static void main(String args[]) {
        int x, number, start, end, y, temp = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter The Range : ");
        start = in.nextInt();
        end = in.nextInt();
        for (number = start; number <= end; number++) {
            temp=0;
            y = number;
            while (number != 0) {
                x = number % 10;
                temp = temp * 10 + x;
                number = number / 10;
            }
            if (temp == y)
                System.out.print(y + "\t");
        }
    }
}
