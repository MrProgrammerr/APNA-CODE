//Banking application with user define exception
import java.util.*;
class Bk extends Exception{
	String str;
	Bk(String str){
		this.str = str;
	}
	public String toString(){
		return str;
	}
}
class Bank{
	float bal;
	Bank(){
	}
	Bank(float b){
		bal = b;
	}
	void display(){
		System.out.println("Balance: "+bal);
	}
	void dipo(float am){
		bal = bal + am;
	}
	void withd(float am) throws Bk{
		if(bal>am){
			bal = bal - am;
		}
		else{
			throw new Bk("Insufficient Balane in account");
		}
	}
}
class TestB{
	public static void main(String args[]){
		Bank b = new Bank(2000.00f);
		b.dipo(1000.00f);
		b.display();
		try{
			b.withd(1000.00f);
		}
		catch(Bk ob){
			System.out.println(ob);
		}
		b.display();
	}
}
		