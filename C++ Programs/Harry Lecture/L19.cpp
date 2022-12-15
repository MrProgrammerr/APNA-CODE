#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c) // Having same name as previous function
{
    return a + b + c;
}
int main()
{
    cout << "Sum of 5 and 6 is : " << sum(5, 6) << endl;
    cout << "Sum of 5,6 and 8 is : " << sum(5, 6, 8) << endl;
    return 0;
}