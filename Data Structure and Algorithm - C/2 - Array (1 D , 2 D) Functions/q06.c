/*
Program for Merging Two sorted Arrays into a single sorted Array.
*/
#include<stdio.h>
void merge(int [],int,int[],int);
void merge(int arr1[],int n1,int arr2[],int n2)
{
    int i,j,key;
    for(i=0;i<n2;i++)
    {
        key=arr2[i];
        j=(n1-1)+i;
        while(j>=0 && arr1[j]>key)
        {
            arr1[j+1]=arr1[j];
            j--;
        }
        arr1[j+1]=key;
    }
}
int main()
{
    int arr1[50],n1,arr2[20],n2,i;
    printf("\nEnter the Number of Elements of First Array : ");
    scanf("%d",&n1);
    printf("\nEnter the Elements of First Sorted Array : ");
    for(i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    printf("\nEnter the Number of Elements of Second Array : ");
    scanf("%d",&n2);
    printf("\nEnter the Elements of Second Sorted Array : ");
    for(i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    merge(arr1,n1,arr2,n2);
    printf("\nAfter merging,New Array is : ");
    for(i=0;i<(n1+n2);i++)
        printf("%d ",arr1[i]);
    printf("\n\n");
}