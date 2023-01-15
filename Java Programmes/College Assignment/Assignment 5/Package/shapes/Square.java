package Package.shapes;

public class Square {
    public int side;
    public Square(int s){
        side = s;
    }
    public void area(){
        int area = side*side;
        System.out.println("Area: "+area);
    }
    public void perimeter(){
        int perimeter = 4*side;
        System.out.println("Perimeter "+perimeter);
    }
}


