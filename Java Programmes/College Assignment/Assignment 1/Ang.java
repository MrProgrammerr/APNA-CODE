//Angstrome Number
import java.util.*;
class Ang{
    public static void main(String[] args) {
        int num;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter the number");
            num = in.nextInt();
        }
        int d=0, comp = num, temp = num;
        while(num!=0){
            d++;
            num = num / 10;
        }
        int s, sum = 0;
        while(comp!=0){
            s = comp % 10;
            sum = sum + (int)Math.pow(s, d);
            comp = comp / 10;
        }
        if(sum == temp){
            System.out.println("It is a Angstrome");
        }
        else{
            System.out.println("It is not a Angstrome number");
        }
    }
}