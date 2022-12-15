#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex()                                   //Default Constructorn
    {
        real=14;
        img=15;
        cout<<"Constructor Run is done."<<endl;
    }
    Complex(int rl,int im)                      //Parameterised Constructor
    {
        real=rl;
        img=im;
    }
    void display()
    {
        cout<<"Complex Number = "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(20,25);  //Implicit Call
    Complex c3 = Complex(17,98);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
