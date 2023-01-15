// Time addition without constructor
import java.util.*;
class Time{
	public int hour;
	public int minute;
	public int second;
	public int day = 0;
	
	void input(){
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter the hour");
		hour = in.nextInt();
		System.out.println("Enter the minute");
		minute = in.nextInt();
		System.out.println("Enter the second");
		second = in.nextInt();
	}
	
	
	void add(Time ob1, Time ob2){
		hour = ob1.hour + ob2.hour;
		minute = ob1.minute + ob2.minute;
		second = ob1.second + ob2.second;
		
		if(second>=60){
			minute = minute + (second/60);
			second = second % 60;
		}
		if(minute>=60){
			hour = hour + (minute/60);
			minute = minute % 60;
		}
		if(hour>=24){
			day = day + (hour/24);
			hour = hour % 24;
		}
	}
}

class Driver5{
	public static void main(String args[]){
		Time ob1 = new Time();
		Time ob2 = new Time();
		Time ob3 = new Time();
		ob1.input();
		ob2.input();
		ob3.add(ob1, ob2);
		
		
		System.out.println("Result Time is: "+ob3.day+" D "+ob3.hour+" H "+ob3.minute+" M "+ob3.second+" S");
	}
}