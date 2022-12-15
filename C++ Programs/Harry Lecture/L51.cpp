#include<iostream>
using namespace std;

//-----------------POINTERS TO OBJECTS-------------------

class Complex
{
    int real,img;
    public:
    void getData()
    {
        cout<<"Real Part = "<<real<<endl;
        cout<<"Imaginary Part = "<<img<<endl;
    }                     
    void setData(int a,int b)
    {
        real=a;
        img=b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(2,5);
    // (*ptr).getData();

    // Complex *ptr2 = new Complex;
    // (*ptr2).setData(5,15);   
    // (*ptr2).getData();

    // Complex *ptr3=new Complex;
    // ptr3->setData(12,15);
    // ptr3->getData();

    Complex *objarr = new Complex[2]; // Array of objects
    objarr->setData(2,3);
    objarr->getData();

    (objarr+1)->setData(4,5);
    (objarr+1)->getData();

    return 0;
}