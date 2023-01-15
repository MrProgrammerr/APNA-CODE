package btech;

public class Student{
    public String name;
    public int roll_no;
    public int sub1, sub2, sub3;
    public Student(){
        
    }
    public Student(String n, int r, int s1, int s2, int s3){
        name = n;
        roll_no = r;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }
    public void display(){
        System.out.println("Roll No "+roll_no);
        System.out.println("Name: "+name);
        System.out.println("------MARK------ ");
        System.out.println("Sub 1: "+sub1);
        System.out.println("Sub 2: "+sub2);
        System.out.println("Sub 3: "+sub3);
        System.out.println("Total: "+(sub1+sub2+sub3));
        System.out.println("percentage "+((sub1+sub3+sub3)*0.3));
    }
}

