// MERGE SORT
#include<stdio.h>
void merge(int arr[],int l1,int r1,int r2);
void mergeSort(int arr[],int l, int r)
{
	int tmp=(l+r)/2;
	if(l!=r)
	{
		mergeSort(arr,l,tmp);
		mergeSort(arr,tmp+1,r);
		merge(arr,l,tmp+1,r);
	}
}       
void merge(int arr[],int l1,int r1,int r2)
{
	int tmparr[20],l2,k=0;
	int l = l1;
	int r = r2;
	l2=r1;
	while((l1<=r1-1) && (l2<=r2))
	{
		if(arr[l1]<arr[l2])
			tmparr[k++]=arr[l1++];
		else
			tmparr[k++]=arr[l2++];
	}
	if(l2>r2)
	{
		while(l1<=r1)
			tmparr[k++]=arr[l1++];
	}
	else
	{
		while(l2<=r2)
                	tmparr[k++]=arr[l2++];
	}
		for(int i=l,k=0;i<=r;i++)
		arr[i]=tmparr[k++];
}  
int main()
{
	int arr[20],n,i;
	printf("\n\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("Enter the Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr,0,n-1);
	printf("After Sorting the values are : ");
	for(i=0;i<n;i++)
                printf("%d  ",arr[i]);
	printf("\n\n");

}
