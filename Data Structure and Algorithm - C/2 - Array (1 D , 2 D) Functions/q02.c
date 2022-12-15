/*
Program for inserting an element into a sorted Array.
*/
#include<stdio.h>
void insert(int [],int,int);
void insert(int arr[],int n,int val)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(val<arr[0])
        {
            for(j=n-1;j>=0;j--)
                 arr[j+1]=arr[j];
            arr[0]=val;
            return;
        }
        else if(val>arr[n-1])
        {
            arr[n]=val;
            return;
        }
        else if(val>=arr[i] && val<=arr[i+1])
        {
            for(j=n-1;j>=i+1;j--)
                arr[j+1]=arr[j];
            arr[i+1]=val;
            return;
        }
    }
}
int main()
{
    int arr[20],n,i,val;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter a Sorted Array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter The Element to be Inserted : ");
    scanf("%d",&val);
    insert(arr,n,val);
    n++;
    printf("\nAfter Inserting,Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}