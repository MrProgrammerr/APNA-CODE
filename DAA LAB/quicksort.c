// QUICK SORT
#include<stdio.h>
int partition(int [], int  , int );
void swap(int arr [] , int p , int q)
{
	int a=arr[p];
	arr[p]=arr[q];
	arr[q]=a;
}
void quickSort(int arr[] , int lb , int ub)
{
	int po;
	if(lb<ub)
	{
		po=partition(arr,lb,ub);
		quickSort(arr,lb,po-1);
		quickSort(arr,po+1,ub);
	}
}
int partition(int arr[], int lb , int ub)
{
	int p=lb,q=ub,pivot=arr[lb];
	while(p<q)
	{
		while(arr[p]<=pivot)
			p++;
		while(arr[q]>pivot)
			q--;
		if(q>p)
			swap(arr,p,q);
		
	}
	swap(arr,lb,q);
	return q;
}
int main()
{
	int arr[20],n,i;
	printf("\n\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("Enter the Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	quickSort(arr,0,n-1);


	printf("After Sorting the values are : ");
	for(i=0;i<n;i++)
                printf("%d  ",arr[i]);
	printf("\n\n");

}
