#include<iostream>
using namespace std;
int main()
{
    int n1=10;
    float n2=12.33;
    double n3=12.3546;
    char ch='A';
    bool is_true=true,is_false=false;
    cout<<"Integer Value = "<<n1<<", Size = "<<sizeof(n1)<<"\n";
    cout<<"Float Value = "<<n2<<", Size = "<<sizeof(n2)<<"\n";
    cout<<"Double Value = "<<n3<<", Size = "<<sizeof(n3)<<"\n";
    cout<<"Character Value = "<<ch<<", Size = "<<sizeof(ch)<<"\n";
    cout<<"Boolean Value = "<<is_true<<" and "<<is_false<<", Size = "<<sizeof(is_true)<<"\n";
    cout<<typeid(32.5l).name()<<endl;
}