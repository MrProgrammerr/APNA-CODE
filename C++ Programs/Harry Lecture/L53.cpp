#include<iostream>
using namespace std;

//------------------THIS POINTER------------------

class A
{
    int a;
    public:
    void setData(int a)
    {
        this->a=a;        //this is a pointer that contains the address 
    }                     // of object through which class is called.
    A getData()
    {
        cout<<"Value = "<<a<<endl;
        return *this;       
    }
};
int main()
{
    A *obj = new A;
    obj->setData(5);
    obj->getData();
    return 0;
}