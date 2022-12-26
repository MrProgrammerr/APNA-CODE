#include<iostream>
using namespace std;
int solve(int a, int b, int n) {
    if(n==0)
        return a;
    else if (n==1)
        return b;
    else
        return solve(a,b,n-1)+solve(a,b,n-2);
}
int main()
{
    while(1)
    {
        int a,b,n;
        cin>>a>>b>>n;
        cout<<solve(a,b,n);   
    }
    return 0;
}