#include<iostream>
using namespace std;

//----------------INHERITANCE IN C++-----------------

// syntax:
//     class derived_class_name : visibility_mode base_class_name
//     {
//         class members/methods etc..
//     }

// 1. If visibility mode is public then the public characteristics of base class 
//    becomes public for derived class.
// 2. If visibility mode is private then the public characteristics of base class 
//    becomes private for derived class.
// 3. By default visibility mode is private.
// 4. Private Properties of base class is never inherited.
// 5. While Creating Derived class object, The default constructor of base class 
//    will be invoked automatically.

class Employee
{
    public:
        int id;
        float salary;
        Employee(int eid)
        {
            id=eid;
            salary=34.0f;
        }
        Employee()
        {
            cout<<"Employee"<<endl;
        }
};

class Programmer : Employee // By default here visibility mode is private
{
    public:
    //Here it will also call the default constructor of the base class
    Programmer(int eid,float fl)
    {
        cout<<"Programmer"<<endl;
        id=eid;
        salary=fl;
    }
    void display()
    {
        cout<<"Salary = "<<salary<<endl; // Salary and Id both are Private here
    }
    int languageid=8;
};

int main()
{
    Programmer p1(102,20000.5f);// Automatically Default constructor of the base class 
    p1.display();               // will be invoked then constructor of derived class.   
    cout<<p1.languageid;
}