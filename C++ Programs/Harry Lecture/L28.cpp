#include<iostream>
using namespace std;

//--------------------FRIEND FUNCTIONS-------------------------

class c2;
class c1
{
    int val;
    public:
    void input(int a)
    {
        val=a;
    }
    void display()
    {
        cout<<val<<endl;
    }
    friend void exchange(c1 &,c2 &);
};
class c2
{
    int data;
    friend void exchange(c1 &,c2 &);
    public:
    void input(int a)
    {
        data=a;
    }
    void display()
    {
        cout<<data<<endl;
    }
};
void exchange(c1 &x,c2 &y)
{
    int tmp=x.val;
    x.val=y.data;
    y.data=tmp;
}
int main()
{
    c1 ob1;
    c2 ob2;
    ob1.input(5);
    ob1.display();
    ob2.input(6);
    ob2.display();
    exchange(ob1,ob2);
    ob1.display();
    ob2.display();
    return 0;
}