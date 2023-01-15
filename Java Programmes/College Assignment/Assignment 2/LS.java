import java.util.*;
public class LS {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int n, c = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        n = in.nextInt();
        System.out.println("Enter the array");
        for(int i = 0; i<n; i++){
            arr[i] = in.nextInt();
        }
        System.out.println("Enter the key");
        int k = in.nextInt();
        for(int i = 0; i<n; i++){
            if(k == arr[i]){
                c++;
            }
        }
        if(c==0){
            System.out.println("The key is not present");
        }
        else{
            System.out.println(c+" number of times the key is present");
        }
    }
}
