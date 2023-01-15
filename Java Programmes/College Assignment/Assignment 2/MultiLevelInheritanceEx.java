// Multilevel Inheritance Example
import java.util.*;
class Base{
	int no1;
}
class Derived1 extends Base{
	int no2;
}
class Derived2 extends Derived1{
	int no3, c, s;
	void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the first num");
		no1 = in.nextInt();
		System.out.println("Enter the 2nd num");
		no2 = in.nextInt();
		System.out.println("Enter the 3rd num");
		no3 = in.nextInt();
	}
	void findSmall(){
		if(no1<no2){
			c = no1;
		}
		else if(no1>no2){
			c = no2;
		}
		if(c<no3){
			s = c;
		}
		else if(c>no3){
			s = no3;
		}
	}
	void display(){
		System.out.println(s+" is the smallest");
	}
}
class MultiLevelInheritanceEx{
	public static void main(String args[]){
		Derived2 ob = new Derived2();
		ob.input();
		ob.findSmall();
		ob.display();
	}
}