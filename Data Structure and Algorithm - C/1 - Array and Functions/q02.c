/*
 Progrm For Inserting an element at ith Position of an array.
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
    if(pos<0 || pos>n+1)
        printf("\nInvalid Position !\n\n");
    else
    {
        for(i=n;i>=pos-1;i--)
            arr[i+1]=arr[i];
        printf("\nEnter the Value To be Insertd : ");
        scanf("%d",&arr[pos-1]);
        printf("\nAfter Inserting The Final Array is : ");
        for(i=0;i<n+1;i++)
            printf("%d ",arr[i]);
        printf("\n\n");
    }
}