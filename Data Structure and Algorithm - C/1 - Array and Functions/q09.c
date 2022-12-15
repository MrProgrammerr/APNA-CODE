/*
 Program For Left Rotation of an Array .
 */
#include<stdio.h>
void sgrgt(int [],int);
void sgrgt(int arr[],int n)
{
   int i,odd[n],j=-1,even[n],k=-1;
   for(i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
        k++;
        even[k]=arr[i];
    }
    else
    {
        j++;
        odd[j]=arr[i];
    }
   }
   printf("\nAll Even Numbers Are : ");
   for(i=0;i<=k;i++)
    printf("%d ",even[i]);
   printf("\nAll Odd Numbers Are : ");
   for(i=0;i<=j;i++)
    printf("%d ",odd[i]);
}
int main()
{
    int arr[20],n,i;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]); 
    sgrgt(arr,n);
    printf("\n\n");
}