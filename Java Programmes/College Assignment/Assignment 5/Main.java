
class Animal {
    // public variable
    public int legCount;

    // public method
    public void display() {
        System.out.println("I am an animal.");
        System.out.println("I have " + legCount + " legs.");
    }
}

public class Main {
    public static void main( String[] args ) {
        Animal animal = new Animal();
        animal.legCount = 4;
        animal.display();
    }
}

