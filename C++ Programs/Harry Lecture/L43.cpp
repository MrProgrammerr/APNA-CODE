#include<iostream>
using namespace std;

//-------------------------AMBIGUITY RESOLUTION--------------------------

class Base1
{
    public:
    void greet()
    {
        cout<<"How are you ?"<<endl;
    }
};
class Base2
{
    public:
    void greet()
    {
        cout<<"Kaise Ho ?"<<endl;
    }
};
class Derived : public Base1,public Base2
{
    public:
    void greet()
    {
        Base1::greet();         // Calls the greet of base1.
        Base2::greet();         // Calls the greet of base2;
    }
};

int main()
{
    Base1 objb1;
    Base2 objb2;
    objb1.greet();
    objb2.greet();
    Derived ob3;
    ob3.greet();                // Calls its own greet() method.
    return 0;
}