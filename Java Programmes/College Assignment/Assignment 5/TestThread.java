//Multithreading

class DemoThred extends Thread{
	public void run(){
		int index = 1;
		while(index <=10){
			System.out.println(index+" ");
			index++;
		}
	}
}
class TestThread{
	public static void main(String argsp[]){
		DemoThred ob1 = new DemoThred();
		DemoThred ob2 = new DemoThred();
		DemoThred ob3 = new DemoThred();
		ob1.start();
		ob2.start();
		ob3.start();
	}
}
