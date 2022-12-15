#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
    Number(){}
    Number(int n)
    {
        a=n;
    }
    // Number(Number &ob) // Copy Constructor . 
    // {                  // If it is not written then compiler provides its own Copy Constructor.
    //     a=ob.a;
    // }
    void display()
    {
        cout<<"Number is : "<<a<<endl;
    }
};

int main()
{
    Number y(45);
    y.display();
    
    Number x(y); // Copy Constructor invoked
    x.display();

    Number z=y; // Copy Constructor invoked
    z.display();
    return 0;
}