/*
 Progrm For increasing the elements of an array to their 5 times
 using Function.
 */
#include<stdio.h>
void inc(int [],int);
void inc(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        arr[i]=5*arr[i];
}
int main()
{
    int arr[20],n,i;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    inc(arr,n);
    printf("\nThe final array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}