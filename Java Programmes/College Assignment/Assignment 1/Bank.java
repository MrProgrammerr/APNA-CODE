import java.util.Scanner;

class MinBalEx extends Exception {
    String str;

    MinBalEx(String str) {
        this.str = str;
    }

    public String toString() {
        return str;
    }
}

class Account {
    String name;
    int acc_no;
    double balance = 500;

    void deposit(int num) {
        balance = balance + num;
        System.out.println("After deposite the account balance is: " + balance);
    }

    void withdraw(int num) throws MinBalEx {
        double d = balance - num;
        if (d <= 500) {
            throw new MinBalEx("MinimunBalanceException");
        } else {
            balance = balance - num;
            System.out.println("After withdral your account balance is: " + balance);
        }
    }

    void transfer(Account acc1, Account acc2, int amt) throws MinBalEx{
        double d = acc1.balance - amt;
        if (d <= 500) {
            throw new MinBalEx("MinimunBalanceException");
        } else {
            acc1.balance = acc1.balance - amt;
            System.out.println("Your trasaction is successfull, After tranfer your accont balance is: " + acc1.balance);
        }
        acc2.balance = acc2.balance + amt;
        System.out.println(
                "Your bank account has credited by " + amt + " rupees, Now your bank balance is: " + acc2.balance);
    }
}

public class Bank {
    public static void main(String[] args) throws MinBalEx {
        Scanner in = new Scanner(System.in);
        Account ac1 = new Account();
        Account ac2 = new Account();
        Account ac3 = new Account();
        int ch;
        int f = 0;
        while (f==0) {
            System.out.println("Enter your choice");
            System.out.println("0. Terminate the transaction");
            System.out.println("1. Deposite");
            System.out.println("2. Withdrawal");
            System.out.println("3. Transfer");
            ch = in.nextInt();

            switch (ch) {
                case 0:
                    f=1;
                    break;
                case 1:
                    int amt;
                    System.out.println("Enter the amount to deposit");
                    amt = in.nextInt();
                    ac1.deposit(amt);
                    break;
                case 2:
                    int am;
                    System.out.println("Enter the amount to withdraw");
                    am = in.nextInt();
                    try{
                        ac1.withdraw(am);
                    }
                    catch(MinBalEx e){
                        System.out.println(e);
                    }
                    break;
                case 3:
                    int amnt;
                    System.out.println("Enter the amount to tranfer");
                    amnt = in.nextInt();
                    ac3.transfer(ac1, ac2, amnt);
                    break;
                default:
                    System.out.println("Invalid Choice");
                    break;
            }
        }
    }
}
