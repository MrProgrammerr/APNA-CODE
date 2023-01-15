import java.util.Scanner;

class Global {
    public static int sum;

    public static synchronized void add(int n) {
        sum += n;
    }
}

class ChildThread extends Thread {
    int m, n;

    ChildThread(int n1, int n2) {
        m = n1;
        n = n2;
        start();
    }

    public void run() {
        for (int i = m; i <= n; i++)
            Global.add(i);
    }
}

class SumDemo {
    public static void main(String args[]) {
        int m, n, i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n:");
        n = sc.nextInt();
        System.out.println("Enter the number of threads:");
        m = sc.nextInt();
        ChildThread ct[] = new ChildThread[m];
        for (i = 0; i < m - 1; i++)
            ct[i] = new ChildThread((n / m) * i + 1, (n / m) * (i + 1));
        ct[i] = new ChildThread((n / m) * i + 1, n);
        try {
            for (i = 0; i < m; i++)
                ct[i].join();
        } catch (InterruptedException e) {
            System.out.print(e);
        }
        System.out.println("Sum of the " + n + "numbers:" + Global.sum);
    }
}
