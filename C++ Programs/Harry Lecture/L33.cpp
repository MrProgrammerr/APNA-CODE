#include<iostream>
using namespace std;

class Bank
{
    int principal,years;
    float rate,res;
    public:
        Bank(){}
        Bank(int p,int y,float r)
        {
            principal=p;
            years=y;
            rate=r;
            res=principal;
            for(int i=0;i<y;i++)
            {
                res=res*(1+r);
            }
        }
        Bank(int p,int y,int r)
        {
            principal=p;
            years=y;
            rate=float(r)/100;
            res=principal;
            for(int i=0;i<y;i++)
            {
                res=res*(1+rate);
            }
        }
        void show()
        {
            cout<<"Principal Amount was "<<principal
            <<" and return Value after "<<years<<" years is "<<res<<endl<<endl;
        }

};

int main()
{
    Bank b1,b2,b3;
    int p,y;
    float r;
    int R;
    cout<<"------------------------------RUNNING-------------------------------\n\n";
    cout<<"Enter the principal amount ,Years and rate of interest : ";
    cin>>p>>y>>r;
    b1=Bank(p,y,r);
    b1.show();

    cout<<"Enter the principal amount ,Years and rate of interest : ";
    cin>>p>>y>>R;
    b2=Bank(p,y,R);
    b2.show(); 

    b3.show();
    cout<<"---------------------------------------------------------------------";  
    return 0;
}