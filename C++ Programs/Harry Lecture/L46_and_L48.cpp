#include <iostream>
using namespace std;

/*
 *
 * Case 1 :
 * class B: public A{};
 *      constructor execution order : first A() then B()
 *
 * Case 2 :
 * class A:public B,public C{};
 *      constructor execution order: first B() then C() and then A()
 *
 * Case3:
 * class A: public B,virtual public C{};
 *      constructor execution order: first C() then B() and then A()
 *      More priority for virtual.
 */

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor Called ." << endl;
    }
    void printDataBase1()
    {
        cout << "Data1 = " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor Called ." << endl;
    }
    void printDataBase2()
    {
        cout << "Data2 = " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // Base Constructor Call
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class Constructor is called ." << endl;
    }
    void printDataDerived()
    {
        printDataBase1();
        printDataBase2();
        cout << "Derived1 = " << derived1 << endl;
        cout << "Derived2 = " << derived2 << endl;
    }
};

int main()
{
    Derived dr(1, 2, 4, 5);
    dr.printDataDerived();
    return 0;
}