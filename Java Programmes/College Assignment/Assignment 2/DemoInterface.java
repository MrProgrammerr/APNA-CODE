//iNTERFACE
import java.util.*;
interface Shape{
	void input();
	public abstract void area();
	abstract void show();
}
class Square implements Shape{
	int side, result;
	public void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the side of the square");
		side = in.nextInt();
	}
	public void area(){
		result = side * side;
	}
	public void show(){
		System.out.println("Area of square is "+result);
	}
}
class Rectangle implements Shape{
	int side1, side2, result;
	public void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the side of the rectangle");
		side1 = in.nextInt();
		side2 = in.nextInt();
	}
	public void area(){
		result = side1 * side2;
	}
	public void show(){
		System.out.println("Area of Rectangle is "+result);
	}
}
class Triangle implements Shape{
	double side1, side2, side3, result;
	public void input(){
		System.out.println("FOR TRIANGLE");
        System.out.println();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the three sides of the triangle");
        side1 = in.nextDouble();
        side2 = in.nextDouble();
        side3 = in.nextDouble();
	}
	public void area(){
		double s;
        s = (side1+side2+side3)/2;
        result = Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
	}
	public void show(){
		System.out.println("Area of square is "+result);
	}
}
class DemoInterface{
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