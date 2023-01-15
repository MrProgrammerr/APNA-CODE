
import java.util.*;

class Emp{
    String name;
    int id;
    void input(){
        System.out.println("Enter your name");
        Scanner in = new Scanner(System.in);
        name = in.next();
        System.out.println("Enter your id");
        id = in.nextInt();
    }
    void display(){
        System.out.println("Name: "+name+"ID: "+id);
    }
}
class Q1{
    public static void main(String[] args) {
        Emp e1 = new Emp();
        e1.input();
        e1.display();
    }
}