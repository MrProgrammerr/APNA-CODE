#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
             printf("* ");
        }
        printf("\n");
    }
}