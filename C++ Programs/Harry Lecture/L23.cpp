#include <iostream>
using namespace std;

class shop
{
    int id[10], price[10], counter;

public:
    void initcounter() { counter = 0; }
    void setdata();
    void getdata();
};

void shop ::setdata()
{
    cout << "Enter the Id number of item " << counter + 1 << " : ";
    cin >> id[counter];
    cout << "Enter the Price of item " << counter + 1 << " : ";
    cin >> price[counter];
    counter++;
}

void shop ::getdata()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with ID : " << id[i] << " is = " << price[i] << endl;
    }
}

int main()
{
    shop dukaan1;
    dukaan1.initcounter();
    dukaan1.setdata();
    dukaan1.setdata();
    dukaan1.setdata();
    dukaan1.setdata();
    dukaan1.setdata();
    dukaan1.setdata();
    dukaan1.getdata();
    return 0;
}