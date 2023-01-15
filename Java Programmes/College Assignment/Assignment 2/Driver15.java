class Employee{
    String empName; 
    int empID; 
    double basicSalary; 
    static int count; 
    double DA;
    double HRA;

    Employee(){

    }
    Employee(String n, int i, double bs, int c){
        empName = n;
        empID = i;
        basicSalary = bs;
        count = c;
    }
    double grossSalary(){
        DA = basicSalary*0.15;
        HRA = basicSalary*0.6;
        return basicSalary+DA+HRA;
    }
    protected void finalize(){

    }
    void empDetails(){
        System.out.println("Name: "+empName);
        System.out.println("ID: "+empID);
        System.out.println("Basic Salary: "+basicSalary);
    }
}
class Manager extends Employee{
    double bonus;
    Manager(String n, int i, double bs, int b){
        empName = n;
        empID = i;
        basicSalary = bs;
        bonus = b;
    }
    double grossSalary(){
        DA = basicSalary*0.15;
        HRA = basicSalary*0.6;
        return basicSalary+DA+HRA+bonus;
    }
    void empDetails(){
        System.out.println("Name: "+empName);
        System.out.println("ID: "+empID);
        System.out.println("Basic Salary: "+basicSalary);
    }
}
public class Driver15 {
    public static void main(String[] args) {
        Employee ob;
        ob = new Manager("Priyanshu", 123, 12000.00, 1);
        double gs = ob.grossSalary();
        ob.empDetails();
        System.out.println("Gross Salary: "+gs);
    }
}
