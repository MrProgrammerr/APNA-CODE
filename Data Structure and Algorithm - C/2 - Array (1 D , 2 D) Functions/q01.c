/*
Program for searching an element using binary searching technique.
*/
#include<stdio.h>
int binary_search(int [],int ,int);
int binary_search(int arr[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>arr[mid])
            low=mid+1;
        else if(key<arr[mid])
            high=mid-1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int arr[20],i,n,key,pos;
    printf("\nEnter the number of array elements : ");
    scanf("%d",&n);
    printf("\nEnter all the elements of the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the Element to Search : ");
    scanf("%d",&key);
    pos=binary_search(arr,n,key);
    if(pos!=-1)
        printf("\nElement Found at Position = %d\n\n",pos+1);
    else
        printf("\nElement is Absent !\n\n");
}