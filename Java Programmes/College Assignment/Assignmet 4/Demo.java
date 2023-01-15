class Test{
    void add(int no1, int no2){
        int res;
        res = no1 + no2;
        System.out.println("Sum is "+res);
    }
    void add(float value1, float value2){
        float res;
        res = value1 + value2;
        System.out.println("Sum is "+res);
    }
    void add(int no1, int no2, int no3){
        int res;
        res = no1 + no2;
        System.out.println("Sum is "+res);
    }
    void add(float value){
        float res;
        res = value + 5;
        System.out.println("Sum is "+res);
    }
}
public class Demo {
    public static void main(String[] args) {
        Test ob = new Test();
        ob.add(5,6);
        ob.add(5.0f,6.0f);
        ob.add(10,20,30);
        ob.add(5.0f);
    }
}
