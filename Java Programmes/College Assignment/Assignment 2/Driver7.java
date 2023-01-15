
class Employee {
    String empName;
    int empID;
    double empBasicSal;

    Employee() {

    }

    Employee(String n, int i, double bs) {
        empName = n;
        empID = i;
        empBasicSal = bs;
    }

    double grossSalary1() {
        double value = 0;

        return value;
    }

    void empDetails() {

    }
}

class Manager extends Employee {
        double bonus;

        Manager() {

        }

        Manager(String n, int i, double bs) {
            empName = n;
            empID = i;
            empBasicSal = bs;
        }

        double grossSalary2() {
            double value = 0;

            return value;
        }

        void managerDetails() {
            System.out.println(empName);
            System.out.println(empID);
            System.out.println(empBasicSal);

        }
}

public class Driver7 {
    public static void main(String[] args) {
        Manager ob = new Manager("Priyanshu Mallick", 123, 78000.00);
        ob.managerDetails();
    }
}
