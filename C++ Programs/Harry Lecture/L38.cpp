#include<iostream>
using namespace std;

//-------------------------SINGLE LEVEL INHERITANCE-------------------------------

class Base
{
    int data1;
    public:
    int data2;
    void setData()
    {
        data1=10;
        data2=20;
    }
    int getData1()
    {
        return data1;
    }
    int getData2()
    {
        return data2;
    }
};
class Derived: public Base // if private then setdata can't be called in main method
{
    int data3;
    public:
        void process()
        {
            data3=data2*getData1();
        }
        void display()
        {
            cout<<"Value of data1 = "<<getData1()<<endl;
            cout<<"Value of data2 = "<<data2<<endl;
            cout<<"Value of data3 = "<<data3<<endl;
        }
};

using namespace std;
int main()
{
    Derived d1;
    d1.setData();
    d1.process();
    d1.display();
    return 0;
}