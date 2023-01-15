// Multilevel Inheritance
class Base{
	void show(){
		System.out.println("Base class");
	}
}
class Derived1 extends Base{
	void display(){
		System.out.println("Derived1 class");
	}
}
class Derived2 extends Derived1{
	void print(){
		System.out.println("Derived2 class");
	}
}
class MultiLevelInheritance{
	public static void main(String args[]){
		Derived2 ob = new Derived2();
		ob.show();
		ob.display();
		ob.print();
	}
}