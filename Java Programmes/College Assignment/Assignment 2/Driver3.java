// Complex number additio without constructor
import java.util.*;
class Complex{
	public int real;
	public int img;
	
	void input(){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the real part");
		real = in.nextInt();
		System.out.println("Enter the imaginary part");
		img = in.nextInt();
	}
	
	void add(Complex ob1, Complex ob2){
		real = ob1.real + ob2.real;
		img = ob1.img + ob2.img;
	}
}

class Driver3{
	public static void main(String args[]){
		Complex ob1 = new Complex();
		Complex ob2 = new Complex();
		Complex ob3 = new Complex();
		ob1.input();
		ob2.input();
		ob3.add(ob1, ob2);
		System.out.println("Addition Result: "+ob3.real+" + "+ob3.img+"i");
	}
}