#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ac,bme,cse,dsp,mth,py,et,acl,dspl,csel,ccl;
    float sgpa;
    cout<<"\n\n"<<"---WELCOME TO 4th SEMESTAR SGPA CALCULATOR---"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"| Enter the corresonding Marks :-"<<endl;
    cout<<"|    AC : ";
    cin>>ac;
    cout<<"|    BME : ";
    cin>>bme;
    cout<<"|    CSE : ";
    cin>>cse;
    cout<<"|    DSP : ";
    cin>>dsp;
    cout<<"|    MATH : ";
    cin>>mth;
    cout<<"|    PYTHON : ";
    cin>>py;
    cout<<"|    ETHICS : ";
    cin>>et;
    cout<<"|    AC LAB : ";
    cin>>acl;
    cout<<"|    CSE LAB : ";
    cin>>csel;
    cout<<"|    CC LAB : ";
    cin>>ccl;
    cout<<"|    DSP LAB : ";
    cin>>dspl;
    
    sgpa=((ac/10)+1)*3+((mth/10)+1)*3+((bme/10)+1)*4+((cse/10)+1)*3+((dsp/10)+1)*3+((py/10)+1)*3+((et/10)+1)*2+((acl/10)+1)+
    ((csel/10)+1)+((ccl/10)+1)+((dspl/10)+1);
    sgpa/=25;
    
    cout<<"| SGPA of 4th SEMESTAR = "<<sgpa<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"------------------THANK YOU !----------------"<<endl<<endl<<endl;

    return 0;
}