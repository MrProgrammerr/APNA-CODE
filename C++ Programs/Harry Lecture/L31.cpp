#include<iostream>
using namespace std;
//-------------------CONSTRUCTOR OVERLOADING--------------------
class Complex
{
    int a,b;
    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex(int x)
        {
            a=x;
            b=0;
        }
        Complex()
        {
            a=b=0;
        }
        void printNumber()
        {
            cout<<"Your Number : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    Complex c1(2,3);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}