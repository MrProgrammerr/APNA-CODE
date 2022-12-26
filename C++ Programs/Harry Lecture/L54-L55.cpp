#include<iostream>
using namespace std;

/*----------------------- POLYMORPHISM IN C++ -----------------------
 *
 * One name with multiple forms and works.
 *
 *                                      POOLYMORPHISM
 *                                          / \ 
 *                                         /   \
 *                                        /     \      
 *                                       /       \
 *                            Compile Time      Run Time                    
 *                                 / \              | 
 *                                /   \             |
 *                               /     \      Virtual Function
 *                              /       \
 *             Function Overloading   Operator OverLoading
 *  
 */

class Base
{
    public:
    int var1;
    void display()
    {
        cout<<"Value Base = "<<var1<<endl;
    }
};
class Derived:public Base
{
    public:
    int var2;
    void display()
    {
        cout<<"Value Derived = "<<var2<<endl;
    }
};

int main()
{
    Base obj_base;
    Derived obj_derived;
    
    Base *base_ptr;
    base_ptr = &obj_derived;

    base_ptr->var1=34;     // Can only access base class elements
    base_ptr->display();
    
    Derived *derived_ptr;
    derived_ptr=&obj_derived;

    derived_ptr->var2=25;
    derived_ptr->display();

    return 0;
}