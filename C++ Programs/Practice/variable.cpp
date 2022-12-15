#include<iostream>
#include<typeinfo>
using namespace std;
//This is Single line Comment
/*
This is MUltiline Comment.
*/
int main()
{
    int val=92;
    cout<<"\nValue is : "<<val<<" and type is :"<<typeid(val).name()<<"\n\n";
    float pi=3.1415;
    cout<<"Value of pi : "<<pi<<" and type is :"<<typeid(pi).name()<<"\n\n";
    bool is_true=true,is_false=false;
    cout<<"Value of is_true : "<<is_true<<" , Value of is_false : "<<is_false<<"\n\n";
    return 0;
}