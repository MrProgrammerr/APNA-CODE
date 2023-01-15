// Circular Queue in Java

import java.util.*;
class CiQu{
	public int SIZE = 10;
	public int q[]=new int[SIZE];
	public int front = -1;
	public int rear = -1;
	
	public boolean isFull(){
		if((rear == SIZE-1) && front ==0 ||(front==rear+1)){
			return true;
		}
		else{
			return false;
		}
	}
	public boolean isEmpty(){
		if(front == -1){
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
			if(rear == -1){
				front++;
				rear++;
			}
			else if(rear==SIZE-1)
			{
				rear=0;
			}
			else
			{
				rear++;
			}
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
			if(rear==front)
			{
				front = -1;
				rear = -1;
			}
			else if(front == SIZE-1)
			{
				front = 0;
			}
			else
			{
				front++;
			}
		}
		return de;
	}
	public void display(){
		int i;
		if(isEmpty()){
			System.out.println("Queue is empty");
		}
		System.out.println("Queue is");
		if(front <=rear)
		{
			for(i=front;i<=rear;i++)
			{
				System.out.println(q[i]+", ");
			}
		}
		else
		{
			for(i=front;i<SIZE;i++)
			{
				System.out.println(q[i]+", ");
			}
			for(i=0;i<=rear;i++)
			{
				System.out.println(q[i]+", ");
			}
		}
	}
}
class CirQueueImp{
	public static void main(String args[]){
		int v, d;
		
		Scanner in = new Scanner(System.in);
		CiQu ob = new CiQu();
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
		
	
		