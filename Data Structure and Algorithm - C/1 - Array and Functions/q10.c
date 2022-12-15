/*
Menu Program For Doing the given Operations. 
*/
#include<stdio.h>
#define sz 5
void input(int [], int);
void display(int [], int);
int class_max(int [], int);
int class_min(int [], int);
int class_sum(int [], int);
float class_avg(int [], int);
void input(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int class_max(int arr[], int n)
{
    int i,max=arr[0];
    for(i=1;i<n;i++)
        if(max<arr[i])
            max=arr[i];
    return max;
}
int class_min(int arr[], int n)
{
    int i,min=arr[0];
    for(i=0;i<n;i++)
        if(min>arr[i])
            min=arr[i];
    return min;
}
int class_sum(int arr[], int n)
{
    int sum=arr[0],i;
    for(i=1;i<n;i++)
        sum+=arr[i];
    return sum;
}
float class_avg(int arr[], int n)
{
    int sum=arr[0],i;
    for(i=1;i<n;i++)
        sum+=arr[i];
    return sum/(n*1.0);
}
int main()
{
    int n,arr[sz];
    printf("\nEnter the Mark of all the Students : ");
    input(arr,sz);
    printf("\nMarks of the Students are : ");
    display(arr,sz);
    printf("\nMaximum Mark of class : %d\n",class_max(arr,sz));
    printf("\nMinimum Mark of class : %d\n",class_min(arr,sz));
    printf("\nTotal Mark of class : %d\n",class_sum(arr,sz));
    printf("\nAverage Mark of class : %f\n\n",class_avg(arr,sz));
}