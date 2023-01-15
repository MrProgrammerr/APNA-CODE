package Package.shapes;

public class Circle {
    public int radius;
    public Circle(int r){
        radius = r;
    }
    public void area(){
        double area = 3.141*radius*radius;
        System.out.println("Area: "+area);
    }
    public void perimeter(){
        double peri = 2*3.141*radius;
        System.out.println("Perimeter: "+peri);
    }
}
