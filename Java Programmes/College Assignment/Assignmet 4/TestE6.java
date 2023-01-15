// User Defined Exception
import java.util.*;
class VotingApplication extends Exception{
	String str;
	VotingApplication(String str){
		this.str = str;
	}
	public String toString(){
		return str;
	}
}
class TestE6{
	static void validate(int age) throws VotingApplication{
		if(age>=18){
			System.out.println("Welcome to Voting");
		}
		else{
			throw new VotingApplication("Not Allowed");
		}
	}
	public static void main(String args[]){
		int age;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter your age");
		age = in.nextInt();
		try{
			validate(age);
		}
		catch(VotingApplication ob){
			System.out.println("As age is less than 18 "+ob);
		}
	}
}