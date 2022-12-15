#include<iostream>
using namespace std;

//------------------DESTRUCTOR--------------------

//It is automatically called when compiler understands that there is no more use
//of that object just to free the storage after running the code.

class num
{
    int count;
    public:
    num(int cnt)
    {
        count=cnt;
        cout<<"Constructor called for object Number : "<<count<<endl;
    }
    ~num()
    {
        cout<<"Destructor called for object number : "<<count<<endl;
    }
};

int main()
{
    cout<<"Creatign first Object."<<endl;
    num n1(1);
    {
        cout<<"Creatign secound Object."<<endl;
        num n2(2);                              // Scope is only inside the block
    }
    cout<<"Creatign Third Object."<<endl;
    num n3(3);
    return 0;
}