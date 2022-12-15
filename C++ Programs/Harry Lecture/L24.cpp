#include <iostream>
using namespace std;

class Employee
{
    int id;
    //Static data member.
    static int count; // Same for all the objects of the class,Default value = 0
public:
    void setdata()
    {
        cout << "Enter the ID : ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "ID of the Employee " << count << " is : " << id << endl;
    }
};
int Employee ::count=1000; // This is necessary for declaring the static variable.

int main()
{
    Employee ckn, priyanshu, badal;
    ckn.setdata();
    ckn.getdata();

    priyanshu.setdata();
    priyanshu.getdata();

    badal.setdata();
    badal.getdata();
    return 0;
}