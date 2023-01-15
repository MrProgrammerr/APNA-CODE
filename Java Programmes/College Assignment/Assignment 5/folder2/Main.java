package folder2;

import folder1.Demo;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int no2;
        Scanner in = new Scanner(System.in);
        Demo ob = new Demo();
        ob.getOne();
        System.out.println("Enter the 2nd number");
        no2 = in.nextInt();
        if(ob.n1>no2){
            System.out.println(ob.n1+" is larger");
        }
        else{
            System.out.println(no2+" is larger");
        }
    }
}
