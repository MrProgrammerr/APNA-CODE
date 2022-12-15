#include <iostream>
using namespace std;

class Base
{
public:
    int var1;
    virtual void display() // It will not run by the pointer of Base class pointing Derived class
    {
        cout << "Value Base = " << var1 << endl;
    }
};
class Derived : public Base
{
public:
    int var2;
    void display()
    {
        cout << "Value Derived = " << var2 << endl;
    }
};

int main()
{
    Base obj_base;
    Derived obj_derived;

    Base *base_ptr;
    base_ptr = &obj_derived;

    base_ptr->var1 = 34;
    base_ptr->display(); // Access Derived class Deisplay

    return 0;
}