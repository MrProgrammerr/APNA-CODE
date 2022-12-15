/*
Program for Sorting an array using Bubble Sort Algorithm.
*/
#include<stdio.h>
void bubble_sort(int [],int);
void bubble_sort(int arr[],int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(arr[j+1]<arr[j])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
}
int main()
{
    int arr[20],n,i;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter a Sorted Array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble_sort(arr,n);
    printf("\nThe sorted Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}