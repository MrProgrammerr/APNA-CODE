//Naive String Matching
#include<stdio.h>
#include<string.h>
int match(char st[100],char pat[100]);
int main()
{
	char st[100],pat[100];
	int status;
	printf("Enter the String: \n");
	gets(st);
	printf("Enter the pattern to match: \n");
	gets(pat);
	status=match(st,pat);
	if(status==-1)
	{
		printf("\nNO match found\n");
	}
	else
	{
		printf("\nMatch found at position: %d\n",status);
	}
	return 0;
}
int match(char st[100],char pat[100])
{
	int n,m,i,j,count=0,temp=0;
	n=strlen(st);	
	m=strlen(pat);				
	for(i=0;i<=n-m;i++)
	{
		temp++;
		for(j=0;j<m;j++)
		{
			if(st[i+j]==pat[j])
			{
				count++;
			}
		}
		if(count==m)
		{
			return temp;
		}
		count=0;
	}
	return -1;
}	
