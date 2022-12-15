/*
 Program For finding the number of elements present in a given range.
 */
#include<stdio.h>
int in_rng(int [],int,int,int);
int in_rng(int arr[],int n,int low,int up)
{
    int i,f=0;
    for(i=0;i<n;i++)
        if(arr[i]>=low && arr[i]<=up)
            f++;
    return f;
}
int main()
{
    int arr[20],n,i,low,up;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the Range(Lower and Upper) : ");
    scanf("%d%d",&low,&up);
    printf("\nTotal Number of elements in given range = %d\n\n",in_rng(arr,n,low,up));
}