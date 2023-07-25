#include<stdio.h>
void floydWarshall(int a[][100],int n);
void main()
{
	int n,i,j;
	int a[100][100];
	printf("Enter the number of vertices: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				a[i][j]=0;
			}
			else
			{
				a[i][j]=100;
			}
			
		}
	}
      	printf("Enter the edges: \n");
    	for(i=0;i<n;i++)
    	{
        	for(j=0;j<n;j++)
        	{	
            		printf("[%d][%d]: ",i,j);
            		scanf("%d",&a[i][j]);
        	}
    	}
    	printf("The original graph is: \n");
    	for(i=0;i<n;i++)
    	{
        	for (j=0;j<n;j++)
        	{
            		printf("%d",a[i][j]);
        	}
        	printf("\n");
    	}
	floydWarshall(a,n);
   	printf("The shortest path matrix is:\n");
    	for(i=0;i<n;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		printf("%d ",a[i][j]);
        	}
        	printf("\n");
    	}
}

void floydWarshall(int a[][100],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]>a[i][k] + a[k][j])
		{
                    a[i][j]=a[i][k]+a[k][j];
		}
            }
        }
    }
}
