#include<iostream>
using namespace std;

//---------------------------- Function Templates ---------------------------

template<class T1,class T2>
float funcAverage(T1 a, T2 b)
{
    float avg;
    avg=(a+b)/2.0;
    return avg;
}

template <class T1>         //template for only display function
void display(T1 a)
{
    cout<<"Value is : "<<a<<endl;
}
int main()
{
    float a;
    a= funcAverage<int ,int >(5,2);
    cout<<"Average = "<<a<<endl;

    a=funcAverage(5,2.5);      // Without the bracket( <> ) also function can be called (which is'nt in class)
    cout<<"Average = "<<a<<endl;

    display(5);
    return 0;
}