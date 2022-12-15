#include <iostream>
using namespace std;

class Employee
{
private: // Only the body of the class can access these values.
    int a, b, c;

public: // Publically can be used.
    int d, e;
    void setdata(int a, int b, int c); // Declaration
    void getdata()
    {
        cout << " a = " << a << endl;
        cout << " b = " << b << endl;
        cout << " c = " << c << endl;
        cout << " d = " << d << endl;
        cout << " e = " << e << endl;
    }
};
/* Semicolon is needed..
}harry; It creates an object named harry of employee class.*/

void Employee ::setdata(int a1, int b1, int c1) // Shows that ,Body can be written outside the class.
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee chandan;
    // chandan.a=10;          // Error as it is declared private
    chandan.d = 14;
    chandan.e = 15;
    chandan.setdata(11, 12, 13);
    chandan.getdata();
    return 0;
}