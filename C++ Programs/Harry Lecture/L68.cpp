#include <iostream>
using namespace std;

//---------------------------- Function Templates Overloading ---------------------------

void display(int a)
{
    cout << "First Display Function : " << a << endl;
}

template <class T>
void display(T a)
{
    cout << "Secound Display Function : " << a << endl;
}

int main()
{
    display(8);       // Exact Type Function get more priority
    display(6.8);

    return 0;
}