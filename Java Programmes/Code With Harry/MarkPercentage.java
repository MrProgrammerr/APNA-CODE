import java.util.Scanner;

public class MarkPercentage {
    public static void main(String[] args) 
    {
        int mark1,mark2,mark3,mark4,mark5;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the marks of 5 Subjects : ");
        mark1=sc.nextInt();
        mark2=sc.nextInt();
        mark3=sc.nextInt();
        mark4=sc.nextInt();
        mark5=sc.nextInt();
        int fullmark= mark1+mark2+mark3+mark4+mark5;
        float per = fullmark/5.0f;
        System.out.printf("Full Mark = %03d\nPercentage = %.2f\n",fullmark,per);
    }
}
