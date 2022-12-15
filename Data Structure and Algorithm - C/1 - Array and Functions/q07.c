/*
 Program For Left Rotation of an Array .
 */
#include<stdio.h>
void lft_rot(int [],int,int);
void lft_rot(int arr[],int n,int tot)
{
   int i,tmp[n],j;
   tot=tot%n;
   if(tot)
   {
        for(i=0,j=0;i<tot;i++,j++)
            tmp[j]=arr[i];
        for(i=0,j=tot;j<n;i++,j++)
            arr[i]=arr[j];
        for(j=0;j<tot;j++,i++)
            arr[i]=tmp[j];
   }
}
int main()
{
    int arr[20],n,tot,i;
    printf("\nEnter the Size of the Array : ");
    scanf("%d",&n);
    printf("\nEnter all the Elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]); 
    printf("\nEnter the Total Number of Rotation : ");
    scanf("%d",&tot);
    lft_rot(arr,n,tot);
    printf("\nAfter Left Rotation The Array is : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}