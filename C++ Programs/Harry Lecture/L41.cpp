#include<iostream>
using namespace std;

//-----------------------------MULTIPLE INHERITANCE----------------------------
/*
syntex:
    class Derived: visibility_mode Base1 , visibility_mode Base2
    {
        class body...
    };
 */

class Base1
{
    protected:
    int base1int;
    public:
    void setbase1int(int a)
    {
        base1int=a;
    }
};
class Base2
{
    protected:
    int base2int;
    public:
    void setbase2int(int a)
    {
        base2int=a;
    }
};
class Derived : public Base1,public Base2
{
    public:
    void show()
    {
        cout<<"The Value of Base1 = "<<base1int<<endl;
        cout<<"The Value of Base2 = "<<base2int<<endl;
        cout<<"Sum = "<<base1int+base2int<<endl;
    }
};

int main()
{
    Derived ck;
    ck.setbase1int(10);
    ck.setbase2int(50);
    ck.show();
    return 0;
}