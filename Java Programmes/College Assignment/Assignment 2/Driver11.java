

abstract class Employee {
    String name;
    int empID;
    Employee(String n, int i) {
        name = n;
        empID = i;
    }
	abstract void earning();
	abstract void printData();
}

class Boss extends Employee {
	double weeklySalary;
	Boss(double ws, String n, int i){
		super(n, i);
		weeklySalary = ws;
	}
	void printData(){
		System.out.println(name+" "+empID+" "+weeklySalary);
	}
	@Override
	void earning() {
		
	}
}
class HourlyWorker extends Employee {
    int wage, hour;
	HourlyWorker(int w, int h, String n, int i){
		super(n, i);
		wage = w;
		hour = h;
	}
	void printData(){
		System.out.println(name+" "+empID+" "+wage+" "+hour);

	}
	@Override
	void earning() {
		// TODO Auto-generated method stub
		
	}
}
class CommissionWorker extends Employee {
    double salary;
	int comission;
	int quanity;
	CommissionWorker(double s, int c, int q, String n, int i){
		super(n, i);
		salary = s;
		comission = c;
		quanity = q;
	}
	void printData(){
		System.out.println(name+" "+empID+" "+salary+" "+comission+" "+quanity);

	}
	@Override
	void earning() {
		// TODO Auto-generated method stub
		
	}
}
class PieceWorker extends Employee {
    int wagePerPiece;
	int quanity;
	PieceWorker(int w, int q, String n, int i){
		super(n, i);
		wagePerPiece = w;
		quanity = q;
	}
	void printData(){
		System.out.println(name+" "+empID+" "+wagePerPiece+" "+quanity);

	}
	@Override
	void earning() {
		// TODO Auto-generated method stub
		
	}
}
public class Driver11 {
    public static void main(String[] args) {
		Employee ob;
		ob = new Boss(1200, "Badal", 1);
		ob.printData();
		ob = new CommissionWorker(20000, 2000, 20, "Chandan", 2);
		ob.printData();
		ob = new HourlyWorker(10, 6, "Kousik", 3);
		ob.printData();
		ob = new PieceWorker(30, 3, "Priyanshu", 4);
		ob.printData();
    }
}
