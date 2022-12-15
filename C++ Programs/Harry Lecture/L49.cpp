#include<iostream>
using namespace std;

//----------------Initialization List---------------------
/*
 * Syntax : constructor(argument-list) : initialization-section
 *          {
 *              assignment + other code;
 *          }
 */
class Test
{
    public:
    int a,b;
    Test(int i,int j):a(i),b(j) // b(i),a(j)  won't work as a is declared first.
    {
        cout<<"Test Class Constructor called ."<<endl;
    }
    void display()
    {
        cout<<"Values are : "<<a<<" and "<<b<<endl;
    }
};

int main()
{
    Test t1(1,2);
    t1.display();
    return 0;
}