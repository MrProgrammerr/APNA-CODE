#include<iostream>
using namespace std;
//-----------------------------PROTECTED ACCESS MODIFIERS---------------------------------

/*                     public derivation     private derivation       protected derivation
*                      -------------------  --------------------     ----------------------
*
* 1. private members     Not Inherited        Not Inherited            Not Inherited
* 2. protected members   protected            private                   protected                     
* 3. public members      public               private                   protected
*
*/

class Base
{
    protected:            // i.e it can be Inherited by the child class but can't be accessed outside
    int data1;            // the class
    public:
    int data2;
};
class Derived : Base
{

};

int main()
{
    Base b;
    Derived d;
//  cout<<d.a<<endl; //Error
    return 0;
}