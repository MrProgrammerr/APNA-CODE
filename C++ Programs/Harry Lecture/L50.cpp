#include <iostream>
using namespace std;

//---------------------- POINTERS -------------------------

int main()
{
    // int a=50;
    // int *b=&a;
    // cout<<"The Value = "<<*(b);

    //-----------------------New Keyword-------------------------

    int *ptr = new int(9);
    cout << "The Value at address ptr = " << *(ptr) << endl;

    int *arr = new int[2];
    arr[0] = 10;
    arr[1] = 120;
    cout << "Dynamic Array values are : " << arr[0] << " and " << arr[1] << endl;

    //----------------------Delete Keyword-----------------------

    delete[] arr;
    cout << "Dynamic Array values are : " << arr[0] << " and " << arr[1] << endl;

    return 0;

}