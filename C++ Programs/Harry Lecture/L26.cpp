#include<iostream>
using namespace std;

/*---------------------------FRIEND FUNCTION----------------------------

Properties of friend class

1. Not in the scope of the class i.e "ob.friendClass()" is error.
2. Can be declared public as well as private inside the class.
*/
class Complex
{
    int a,b;
    public:
        friend Complex sumComplex(Complex ob1, Complex ob2); //That gives the permission to access the 
        void setNumber(int n1,int n2)                       //private properties of the class.
        {
            a=n1;
            b=n2;
        }
        void printNumber()
        {
            cout<<"Your Number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex ob1, Complex ob2)
{
    Complex ob3;
    ob3.setNumber((ob1.a+ob2.a),(ob1.b+ob2.b));
};

int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum=sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}