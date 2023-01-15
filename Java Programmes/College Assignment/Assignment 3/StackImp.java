//Stack using java
import java.util.*;
class Stk{
	public int SIZE = 10;
	public int stack[]=new int[SIZE];
	public int top = -1;
	
	public boolean isFull(){
		if(top==SIZE-1){
			return true;
		}
		else{
			return false;
		}
	}
	public boolean isEmpty(){
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
	}
	public void push(int x){
		if(isFull()){
			System.out.println("Stack is full");
			System.exit(1);
		}
		else{
			top = top + 1;
			stack[top] = x;
			System.out.println("The inserted element is: "+stack[top]);
		}
	}
	public int pop(){
		int de=0;
		if(isEmpty()){
			System.out.println("Stack is empty");
			System.exit(1);
		}
		else{
			de = stack[top];
			top = top - 1;
		}
		return de;
	}
	public void display(){
		for(int i = 0; i<=top;i++){
			System.out.print(stack[i]+", ");
			//System.out.println();
		}
	}
}
class StackImp{
	public static void main(String args[]){
		int v, d;
		
		Scanner in = new Scanner(System.in);
		Stk ob = new Stk();
		int ch;
		while(true){
			System.out.println();
			System.out.println("Choose from following options");
			System.out.println("1. Push");
			System.out.println("2. Pop");
			System.out.println("3. Display");
			ch = in.nextInt();
			switch(ch){
				case 1: System.out.println("Enter the value");
						v = in.nextInt();
						ob.push(v);
						break;
				case 2: d = ob.pop();
						System.out.println("The poped element is: "+d);
						break;
				case 3: ob.display();
						break;
				default: System.out.println("Invalid Input");
			}
		}
	}
}
		
	
		