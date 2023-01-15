import Package.shapes.Triangle;
import Package.shapes.Circle;
import Package.shapes.Square;

class Test
{
    public static void main(String as[])
    {
       Triangle t = new Triangle(2, 6, 4);
       Circle c = new Circle(7);
       Square s = new Square(4);
       System.out.println("TRIANGLE");
       System.out.println("----------");
       t.area();
       t.perimeter();
       System.out.println("CIRCLE");
       System.out.println("----------");
       c.area();
       c.perimeter();
       System.out.println("SQUARE");
       System.out.println("----------");
       s.area();
       s.perimeter();
    }
}
