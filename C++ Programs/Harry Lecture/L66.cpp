#include<iostream>
using namespace std;

//--------------------- CLASS TEMPLATES WITH DEFAULT PARAMETERS ---------------------
/*
 * If T1 and T2 value are given in main then it takes accordingly and if not given then
 * it will take the default value given inside template declaration.
 */

template<class T1 = int, class T2 = float>
class Harry
{
    public:
    T1 a;
    T2 b;
    Harry(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void display();

};
template<class T1,class T2>      // This is How the function of a template class can be written outside
void Harry <T1,T2> :: display()
{
    cout<<"The Value of A = "<<a<<endl;
    cout<<"The Value of B = "<<b<<endl;
}

int main()
{
    Harry <> h1(10,12.5);               // Here T1 = int and T2 = float
    Harry <char,float> h2('c',45.7);

    h1.display();
    h2.display();

    return 0;
}