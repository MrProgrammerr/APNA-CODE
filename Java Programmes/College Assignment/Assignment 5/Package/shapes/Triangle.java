package Package.shapes;

public class Triangle {
    public int a, b, c;
    public Triangle(int s1, int s2, int s3){
        a = s1;
        b = s2;
        c = s3;
    }
    public void area(){
        double s = (a+b+c)/2;
        double area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area "+area);
    }
    public void perimeter(){
        int peri = a + b + c;
        System.out.println("Perimeter "+peri);
    }
}
