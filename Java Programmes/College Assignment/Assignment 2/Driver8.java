import java.util.Scanner;

class Employee {
    String empName;
    int empID;
    String designation;
    double grossSalary;

    Employee() {

    }
    Employee(String n, int i, String d, double gs) {
        empName = n;
        empID = i;
        designation = d;
        grossSalary = gs;
    }

    double grossSalary1() {
        double value = 0;

        return value;
    }

    void empDetails() {
        System.out.println(empName);
        System.out.println(empID);
        System.out.println(designation);
        System.out.println(grossSalary);

    }
}
public class Driver8 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Employee ob[] = new Employee[50];
        int i;
        for(i = 1; i<=2 ; i++){
            ob[i] = new Employee();
            System.out.println("Taking Details of emp: "+i);
            System.out.print("Name:");
            ob[i].empName = in.next();
            System.out.print("ID:");
            ob[i].empID = in.nextInt();
            System.out.print("Designation:");
            ob[i].designation = in.next();
            System.out.print("Gross Salary:");
            ob[i].grossSalary = in.nextDouble();
            System.out.println();
        }
        for(i = 1; i<=2 ; i++){
            System.out.println("Details of emp: "+i);
            ob[i].empDetails();
            System.out.println();
        }
    }
}
