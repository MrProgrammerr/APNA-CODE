#include <iostream>
using namespace std;

//--------------Inline Function--------------
int inline add(int a, int b)
{
    //---------- STATIC VARIABLE-----------
    static int c = 20; // Executes only once
    cout << c << endl;
    c++;
    return a + b;
}
int main()
{
    cout << "Addition of 1 and 2 = " << add(1, 2) << endl;
    cout << "Addition of 2 and 3 = " << add(2, 3) << endl;
    cout << "Addition of 4 and 5 = " << add(4, 5) << endl;
    cout << "Addition of 6 and 7 = " << add(6, 7) << endl;
    cout << "Addition of 8 and 9 = " << add(8, 9) << endl;
    cout << "Addition of 9 and 10 = " << add(9, 10) << endl;
    return 0;
}