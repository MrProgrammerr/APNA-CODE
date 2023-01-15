//Queue Implimenting using java
//Stack using java
import java.util.*;
class Qu{
	public int SIZE = 10;
	public int q[]=new int[SIZE];
	public int front = -1;
	public int rear = -1;
	
	public boolean isFull(){
		if(rear==SIZE-1){
			return true;
		}
		else{
			return false;
		}
	}
	public boolean isEmpty(){
		if(front==-1 && front == rear +1){
			return true;
		}
		else{
			return false;
		}
	}
	public void insert(int x){
		if(isFull()){
			System.out.println("Queue is full");
			System.exit(1);
		}
		else{
			if(front == -1){
				front = 0;
			}
			rear = rear + 1;
			q[rear] = x;
			System.out.println("The inserted element is: "+q[rear]);
		}
	}
	public int delete(){
		int de=0;
		if(isEmpty()){
			System.out.println("Queue is empty");
			System.exit(1);
		}
		else{
			de = q[front];
			front = front + 1;
		}
		return de;
	}
	public void display(){
		if(isEmpty()){
			System.out.println("Queue is empty");
		}
		System.out.println("Queue is");
		for(int i=front;i<=rear;i++){
			System.out.print(q[i]+", ");
		}
		System.out.println();
	}
}
class QueueImp{
	public static void main(String args[]){
		int v, d;
		
		Scanner in = new Scanner(System.in);
		Qu ob = new Qu();
		int ch;
		while(true){
			System.out.println();
			System.out.println("Choose from following options");
			System.out.println("1. Insert");
			System.out.println("2. Delete");
			System.out.println("3. Display");
			ch = in.nextInt();
			switch(ch){
				case 1: System.out.println("Enter the value");
						v = in.nextInt();
						ob.insert(v);
						break;
				case 2: d = ob.delete();
						System.out.println("The poped element is: "+d);
						break;
				case 3: ob.display();
						break;
				default: System.out.println("Invalid Input");
			}
		}
	}
}
		
	
		