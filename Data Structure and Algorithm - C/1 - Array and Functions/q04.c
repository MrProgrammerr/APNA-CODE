/*
 Progrm For Finding out the frequency of an element
 */
#include<stdio.h>
int main()
{
    int arr[20],n,i,key,f=0;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the Element to find its Frequency : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(arr[i]==key)
            f++;
    if(f==0)
        printf("\n%d is Absent !\n\n",key);
    else
        printf("\nFrequency of %d = %d\n\n",key,f);
}