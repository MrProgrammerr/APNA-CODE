/*
 Program For Reversing an array .
 */
#include<stdio.h>
void rev(int [],int);
void swap(int *,int *);
void rev(int arr[],int n)
{
    int i,j,tmp;
    for(i=0,j=n-1;i<j;i++,j--)
        swap(&arr[i],&arr[j]);
}
void swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int arr[20],n,i;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]); 
    rev(arr,n);
    printf("\nReverse of the Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}