#include <iostream>
using namespace std;

// ---------------- Array of Objects ----------------

class Complex
{
public:
    int real, img;
    void getData()
    {
        cout << "Complex Number = " << real << " + " << img << "i" << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    int size = 3;
    Complex *ptr = new Complex[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Real and Imaginary part of Complex " << i + 1 << " : " << endl;
        cin >> ptr[i].real >> (ptr + i)->img;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Complex " << i + 1 << " : ";
        (ptr + i)->getData();
    }
    delete[] ptr;
    return 0;
}