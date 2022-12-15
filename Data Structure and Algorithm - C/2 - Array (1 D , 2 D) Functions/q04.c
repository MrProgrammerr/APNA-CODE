/*
Program for Sorting an array using Selection Sort Algorithm.
*/
#include<stdio.h>
void selection_sort(int [],int);
void selection_sort(int arr[],int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(arr[i]>arr[j])
            {
                tmp=arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
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
    selection_sort(arr,n);
    printf("\nThe sorted Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}