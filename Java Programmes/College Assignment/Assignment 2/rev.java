import java.util.Scanner;

public class rev {
    public static void main(String[] args) {
        int n;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number");
        n = in.nextInt();
        int t = n;
        int t1, t2, rev_n = 0, rev_sq = 0;
        while(n!=0){
            t1 = n%10;
            rev_n = rev_n * 10 + t1;
            n = n / 10;
        }
        
        int sq_of_n = t * t;
        System.out.println(sq_of_n);
        while(sq_of_n != 0){
            t2 = sq_of_n % 10;
            rev_sq = rev_sq * 10 + t2;
            sq_of_n = sq_of_n/10;
        }
        System.out.println(rev_sq);
        int sqr_rev_sqn = (int) Math.sqrt(rev_sq);
        System.out.println(sqr_rev_sqn);

        if(sqr_rev_sqn == rev_n){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
