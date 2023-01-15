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
	
	// void input(){
	// 	Scanner in = new Scanner(System.in);
	// 	System.out.println("Enter the height of the rectangle");
	// 	height = in.nextDouble();
	// 	System.out.println("Enter the width of the rectangle");
	// 	width = in.nextDouble();
	// }
	
	double getArea(){
		return width*height;
	}
	double getPerimeter(){
		return 2*(width+height);
	}
}
class Driver{
	public static void main(String args[]){

		Rectangle ob1 = new Rectangle(20,30);
		double area = ob1.getArea();
		double perimeter = ob1.getPerimeter();
		System.out.println("The area of rectangle is "+area+" m^2 and the perimeter is "+perimeter+" m");
	}
}
