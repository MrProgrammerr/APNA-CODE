/**
Design a class named Rectangle to represent a rectangle. The class contains:
a) Two double data fields named width and height that specify the width and height of the
rectangle. The default values are 1 for both width and height .
b) A no-arg constructor that creates a default rectangle.
c) A constructor that creates a rectangle with the specified width and height .
d) A method named getArea() that returns the area of this rectangle.
e) A method named getPerimeter() that returns the perimeter

Author: Priyanshu Mallick
**/

import java.util.*;
class Rectangle{
	double width;
	double height;
	Rectangle(){
		width = 1;
		height = 1;
	}
	Rectangle(double w, double h){
		width = w;
		height = h;
	}
	
	/*void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the height of the rectangle");
		height = in.nextDouble();
		System.out.println("Enter the width of the rectangle");
		width = in.nextDouble();
	}*/
	
	double getArea(){
		return width*height;
	}
	double getPerimeter(){
		return 2*(width+height);
	}
}
class Driver2{
	public static void main(String args[]){
		Double height, width;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the height of the rectangle");
		height = in.nextDouble();
		System.out.println("Enter the width of the rectangle");
		width = in.nextDouble();
		Rectangle ob1 = new Rectangle();
		Rectangle ob2 = new Rectangle(width, height);
		
		//ob1.input();
		double Darea = ob1.getArea();
		double Dperimeter = ob1.getPerimeter();
		double area = ob2.getArea();
		double perimeter = ob2.getPerimeter();
		System.out.println("The area of default rectangle is "+Darea+" m^2 and the perimeter is "+Dperimeter+" m");
		System.out.println();
		System.out.println("The area of given rectangle is "+area+" m^2 and the perimeter is "+perimeter+" m");
	}
}
