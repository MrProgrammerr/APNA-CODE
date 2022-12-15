#include<iostream>
using namespace std;
//-------------------CONSTRUCTOR WITH DEFAULT ARGUMENTS--------------------
class Complex
{
    int a,b;
    public:
        Complex(int x,int y=8)  // This is the default argument 
        {
            a=x;
            b=y;
        }
        void printNumber()
        {
            cout<<"Your Number : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    Complex c(5);
    c.printNumber();
    return 0;
}