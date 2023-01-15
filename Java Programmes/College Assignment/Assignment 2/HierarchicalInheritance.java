// Hierarchical Inheritance
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
class Derived2 extends Base{
	void print(){
		System.out.println("Derived2 class");
	}
}
class HierarchicalInheritance{
	public static void main(String args[]){
		Derived1 ob1 = new Derived1();
		Derived2 ob2 = new Derived2();
		ob1.show();
		ob1.display();
		ob2.show();
		ob2.print();
	}
}