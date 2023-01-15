// Use of throws key word in java
class TestE5{
	void m3(){
		int no1 = 10;
		int res = no1/0;
	}
	void m2() throws ArithmeticException{
		m3();
	}
	void m1(){
		try{
			m2();
		}
		catch(ArithmeticException ob){
			System.out.println(ob);
		}
	}
	public static void main(String args[]){
		TestE5 ob = new TestE5();
		ob.m1();
	}
}
			