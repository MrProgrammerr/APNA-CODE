import java.util.Scanner;

class Student{
    int age;
    float mark;
    public Student() {
    }
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the age of the student");
        age = in.nextInt();
        System.out.println("Enter the mark");
        mark = in.nextFloat();
    }
    void show(){
        System.out.println("Age: "+age);
        System.out.println("Mark: "+mark);
    }
    public void display() {
    }

}
public class Driver {
    public static void main(String[] args) {
        Student st[];
        st = new Student[10];
        int n;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the numebr of student");
        n = in.nextInt();

        for(int i=0; i<n; i++){
            st[i] = new Student();
        }

        for(int i=0; i<n; i++){
            System.out.println("Student "+(i+1));
            st[i].input();
        }
        for(int i=0; i<n; i++){
            System.out.println("Details of student "+(i+1));
            st[i].show();
        }

    }
}
