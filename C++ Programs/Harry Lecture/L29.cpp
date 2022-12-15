#include<iostream>
using namespace std;

//---------------------CONSTRUCTOR-------------------------

// A special member function with same name as of class and automatically invoked while creating object.
// Should be declared inside public block.

class Complex
{
    int real,img;
    public:
    Complex()               // This is default Constructor i.e takes no parameter
    {
        real=14;
        img=15;
        cout<<"Constructor Run is done."<<endl;
    }
    void display()
    {
        cout<<"Complex Number = "<<real<<" + "<<img<<"i";
    }
};
int main()
{
    Complex c1;
    c1.display();
    return 0;
}
