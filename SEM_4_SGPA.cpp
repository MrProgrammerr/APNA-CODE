#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ai,mth,daa,dbms,eco,os,daal,dbmsl,osl;
    float sgpa;
    cout<<"\n\n"<<"---WELCOME TO 4th SEMESTAR SGPA CALCULATOR---"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"| Enter the corresonding Marks :-"<<endl;
    cout<<"|    AI : ";
    cin>>ai;
    cout<<"|    DBMS : ";
    cin>>dbms;
    cout<<"|    DAA : ";
    cin>>daa;
    cout<<"|    ECONOMICS : ";
    cin>>eco;
    cout<<"|    MATH : ";
    cin>>mth;
    cout<<"|    OS : ";
    cin>>os;
    cout<<"|    DBMS LAB : ";
    cin>>dbmsl;
    cout<<"|    DAA LAB : ";
    cin>>daal;
    cout<<"|    OS LAB : ";
    cin>>osl;
    
    sgpa=((dbms/10)+1)*4+((mth/10)+1)*4+((daa/10)+1)*4+((os/10)+1)*3+((eco/10)+1)*3+((ai/10)+1)*3+((daal/10)+1)+
    ((osl/10)+1)+((dbmsl/10)+1)*2;
    sgpa/=25;
    
    cout<<"| SGPA of 3rd SEMESTAR = "<<sgpa<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"------------------THANK YOU !----------------"<<endl<<endl<<endl;

    return 0;
}