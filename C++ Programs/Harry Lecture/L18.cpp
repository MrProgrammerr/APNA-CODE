#include <iostream>
using namespace std;

//---------------RECURSION-----------------

// void func1(int a)
// {
//     if(a==0)
//     {
//         cout<<"End of Recursion .";
//         return;
//     }
//     func1(--a);
// }
int fact(int a)
{
    if (a == 0)
        return 1;
    return a * fact(a - 1);
}
int main()
{
    // func1(5);
    int a = 5;
    cout << "Factorial of " << a << " is " << fact(5) << endl;
    return 0;
}