/*
Program for Sorting an array using Insertion Sort Algorithm.
*/
#include<stdio.h>
void insertion_sort(int [],int);
void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)                    //Consider the first element is sorted.
    {
        key=arr[i];                     //It is to be inserted in the lest sorted part
        j=i-1;                          //jis the index of last element of left sorted part
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertion_sort(arr,n);
    printf("\nThe sorted Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}