// Hierarchical Example Inheritance
import java.util.*;
class Base{
	int no1;
}
class Derived1 extends Base{
	int no2, c;
	void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the first num");
		no1 = in.nextInt();
		System.out.println("Enter the 2nd num");
		no2 = in.nextInt();
	}
	void findLarge(){
		if(no1>no2){
			c = no1;
		}
		else if(no1<no2){
			c = no2;
		}
	}
	void display(){
		System.out.println(c+" is the larger");
	}
}
class Derived2 extends Base{
	int no3, s;
	void input(){
		Scanner in = new Scanner(System.in);
		if(no1==0){
			System.out.println("Enter the first num");
			no1 = in.nextInt();
		}
		System.out.println("Enter the 3rd num");
		no3 = in.nextInt();
	}
	void findSmall(){
		if(no1>no3){
			s = no3;
		}
		else if(no1<no3){
			s = no1;
		}
	}
	void display(){
		System.out.println(s+" is the smaller");
	}
}
class HierarchicalInheritanceEx{
	public static void main(String args[]){
		Derived1 ob1 = new Derived1();
		Derived2 ob2 = new Derived2();
		ob1.input();
		ob1.findLarge();
		ob1.display();
		ob2.input();
		ob2.findSmall();
		ob2.display();
	}
}