/*
 Progrm For checking the presence of an element inside an Array.
 */
#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={10,20,25,35,56},key,i;
    printf("\nEnter the Key Value : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
        if(arr[i]==key)
        {
            printf("\nElement Present ..\n\n");
            return 0;
        }
    printf("\nElement is Absent !\n\n");
}