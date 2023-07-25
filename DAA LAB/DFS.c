#include<stdio.h>
int a[20][20],s[20],visited[20],n,i,j,top=-1;
void dfs(int v);
void main()
{
    //starting vertex
    int v;
    printf("enter the number of vertex \n");
    scanf("%d",&n);
    printf("enter the adjacency matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of starting vertex \n");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        s[i]=0;
        visited[i]=0;
    }
    dfs(v);
    printf("the visited vertices are : \n");
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            printf("%d\t",i);
        }
    }
}
void dfs(int v)
{
    for(i=0;i<n;i++)
    {
        if(a[v][i] && !visited[i])
        {
            s[++top]=i;
        }
        if(top!=-1){
            visited[s[top]]=1;
            dfs(s[top--]);
        }
    }
}
