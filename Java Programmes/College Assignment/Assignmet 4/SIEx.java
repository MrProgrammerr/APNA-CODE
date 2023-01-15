class Base{
    int no1;
}
class Derived extends  Base{
    int no2;
    Derived(int n1, int n2){
        no1 = n1;
        no2 = n2;
    }
    void compare(){
        if(no1>no2){
            System.out.println(no1+" is the larger");
        }
        else if(no2>no1){
            System.out.println(no2+" is the larger");
        }
    }
}
public class SIEx {
    public static void main(String[] args) {
        Derived ob = new Derived(2, 3);
        ob.compare();
    }
}
