#include <iostream>
using namespace std;

//--------------------- TEMPLATES WITH MULTIPLE(comma separated) PARAMETERS ---------------------
/*
 * Syntax:
 *
 * template <class T1, class T2>
 * class nameOfClass
 * {
 *      //body
 * }
 *
 */

// class myClass
// {
//     public:
//     int data1;
//     char data2;
//     myClass(int a,char b)
//     {
//         data1=a;
//         data2=b;
//     }
//     void display()
//     {
//         cout<<this->data1<<this->data2;
//     }
// };

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " and " << this->data2;
    }
};
int main()
{
    // myClass obj(1,'c');
    // obj.display();

    myClass<int, float> obj(12, 1.5);
    obj.display();

    return 0;
}