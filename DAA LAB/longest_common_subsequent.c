#include<stdio.h>
#include<string.h>

int max(int n1,int n2)
{
	if(n1>n2)
		return n1;
	else
		return n2;
}
int main()
{
	//input
	char str[50],sub[50];
	printf("\nEnter the String : ");
	scanf("%[^\n]",str);
	printf("\nEnter the Substring : ");
	scanf(" %[^\n]",sub);

	//Matrix Declare And initialize
	int m,n;
	m=strlen(sub);
	n=strlen(str);
	int lcs[m+1][n+1],i,j;
	for(i=0;i<=m;i++)
                for(j=0;j<=n;j++)
                        lcs[i][j]=0;
	
	//Matrix Element fillup
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sub[i-1]==str[j-1])
			{
				lcs[i][j]=lcs[i-1][j-1]+1;
			}
			else
			{
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
	}

	//Matrix Print
	printf("\nMatrix Is : \n");
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			printf("%d\t",lcs[i][j]);
		printf("\n");
	}

	//Result Store
	int res_size = lcs[m][n];
	char res[res_size];
	res[res_size]='\0';
	i=m;
	j=n;
	while(i>0 && j>0)
	{
		if(lcs[i][j]==lcs[i][j-1])
		{
			j--;
		}
		else 
		{
			while(lcs[i][j]==lcs[i-1][j])
				i--;
			res[--res_size]=str[j-1];
			i--;
		}
		
	}

	printf("\nLongest Common Subsequent : %s\n\n",res);

}
