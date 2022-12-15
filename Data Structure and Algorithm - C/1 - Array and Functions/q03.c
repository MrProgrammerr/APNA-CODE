/*
 Progrm For Deleting an element from ith Position of an array.
 */
#include<stdio.h>
int main()
{
    int arr[20],n,i,pos;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the Position : ");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
        printf("\nInvalid Position !\n\n");
    else
    {
        for(i=pos-1;i<n;i++)
            arr[i]=arr[i+1];
        printf("\nAfter Deleting The Final Array is : ");
        for(i=0;i<n-1;i++)
            printf("%d ",arr[i]);
        printf("\n\n");
    }
}