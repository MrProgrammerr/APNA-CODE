#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex()
    {
        real=img=0;
    }
    Complex(int a,int b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        cout<<"Complex Number = "<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator + (Complex c2)
    {
        Complex c3;
        c3.real = real+c2.real;
        c3.img = img+c2.img;
        return c3;
    }
};

int main()
{
    Complex c1(10,20);
    Complex c2(30,40);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}