// Single Inheritance
class Base{
	void show(){
		System.out.println("Base class");
	}
}
class Derived extends Base{
	void display(){
		System.out.println("Base class");
	}
}
class SingleInheritance{
	public static void main(String args[]){
		Derived ob = new Derived();
		ob.show();
		ob.display();
	}
}