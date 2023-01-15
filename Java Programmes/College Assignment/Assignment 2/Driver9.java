// Abstarct Class
import java.util.*;

abstract class Shape{
	double side1, side2, side3;
	abstract void input();
	abstract void area();
	void show(){
		System.out.println("Base class method");
	}
}
class Rectangle extends Shape{
	double value;
	void input(){
		System.out.println("FOR RECTANGLE");
		System.out.println();
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the height");
		side1 = in.nextDouble();
		System.out.println("Base class width");
		side2 = in.nextDouble();
	}
	void area(){
		value = side1*side2;
	}
	void show(){
		System.out.println("Area of rectangle is: "+value);
		System.out.println();
	}
}
class Square extends Shape{
	double value;
	void input(){
		System.out.println("FOR SQUARE");
		System.out.println();
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the length of the side");
		side1 = in.nextDouble();
	}
	void area(){
		value = side1 * side1;
	}
	void show(){
		System.out.println("The area of square is "+value);
		System.out.println();
	}
}
class Triangle extends Shape{
	double value;
	void input(){
		System.out.println("FOR TRIANGLE");
		System.out.println();
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the three sides of the triangle");
		side1 = in.nextDouble();
		side2 = in.nextDouble();
		side3 = in.nextDouble();
	}
	void area(){
		double s;
		s = (side1+side2+side3)/2;
		value = Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
	}
	void show(){
		System.out.println("The area of triangle is "+value);
		System.out.println();
	}
}

class Driver9{
	public static void main(String args[]){
		Shape ob;
		ob = new Square();
		ob.input();
		ob.area();
		ob.show();
		
		ob = new Rectangle();
		ob.input();
		ob.area();
		ob.show();
		
		ob = new Triangle();
		ob.input();
		ob.area();
		ob.show();
		
	}
}