
abstract class Employee {
    String Name;
    int number;
   
    Employee(String n, int i) {
        Name = n;
        number = i;
    }
	abstract void printData();
}

class Manager extends Employee {
    String title, name;
	double clubDues;
	Manager(String t, double cd, String n, int i){
		super(n, i);
		title = t;
		clubDues = cd;
	}
	void printData(){
		System.out.println(Name+" "+number+" "+title+" "+clubDues);
	}
}
class Scientist extends Employee {
    String publication, name;
	Scientist(String p, String n, int i){
		super(n, i);
		publication = p;
	}
	void printData(){
		System.out.println(Name+" "+number+" "+publication);
	}
}
public class Driver10 {
    public static void main(String[] args) {
		Employee ob;
		ob = new Manager("Mr",2345,"Priyanshu",45679);
		ob.printData();
		ob = new Scientist("KP","Chandan",23456);
		ob.printData();
    }
}
