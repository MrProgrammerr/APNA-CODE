import java.util.Scanner;

public class Arr {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int n;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        n = in.nextInt();
        System.out.println("Enter the array");
        for(int i = 0; i<n; i++){
            arr[i] = in.nextInt();
        }
        float sum = 0;
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
        }
        float avg = sum/n;
        System.out.println("Sum is: "+sum+" Avarage is: "+avg);
    }
}
