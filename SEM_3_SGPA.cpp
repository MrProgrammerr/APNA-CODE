#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bme,mth,java,coa,bio,dec,corp,si,coal,javal,decl;
    float sgpa;
    cout<<"\n\n"<<"---WELCOME TO 3RD SEMESTAR SGPA CALCULATOR---"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"| Enter the corresonding Marks :-"<<endl;
    cout<<"|    BME : ";
    cin>>bme;
    cout<<"|    MATH : ";
    cin>>mth;
    cout<<"|    JAVA : ";
    cin>>java;
    cout<<"|    COA : ";
    cin>>coa;
    cout<<"|    BIOLOGY : ";
    cin>>bio;
    cout<<"|    DEC : ";
    cin>>dec;
    cout<<"|    JAVA LAB : ";
    cin>>javal;
    cout<<"|    DEC LAB : ";
    cin>>decl;
    cout<<"|    COA LAB : ";
    cin>>coal;
    cout<<"|    CORPORATE LAB : ";
    cin>>corp;
    cout<<"|    SUMMER INTERNSHIP : ";
    cin>>si;
    
    sgpa=((bme/10)+1)*4+((mth/10)+1)*4+((java/10)+1)*3+((coa/10)+1)*3+((bio/10)+1)*3+((dec/10)+1)*3+((coal/10)+1)+
    ((decl/10)+1)+((javal/10)+1)+((si/10)+1)+((corp/10)+1);
    sgpa/=25;
    
    cout<<"| SGPA of 3rd SEMESTAR = "<<sgpa<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"------------------THANK YOU !----------------"<<endl<<endl<<endl;

    return 0;
}