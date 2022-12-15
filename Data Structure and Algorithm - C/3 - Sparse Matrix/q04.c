/*
 *Program For The addition of Two Sparse Matrices 
 */
#include<stdio.h>
#include<stdlib.h>
void add(int [][3],int [][3],int [][3]);
void add(int tr1[][3],int tr2[][3],int res[][3])
{
    int i=1,j=1,k=1;
    if(tr1[0][0]!=tr2[0][0] || tr1[0][1]!=tr2[0][1])
    {
        printf("\nADDITION NOT POSSIBLE !\n\n");
        exit(0);
    }
    else
    {
        res[0][0]=tr1[0][0];
        res[0][1]=tr1[0][1];
        while(i<=tr1[0][2] || j<=tr2[0][2])
        {
            if(tr1[i][0]==tr2[j][0])
            {
                if(tr1[i][1]==tr2[j][1])
                {
                    res[k][0]=tr1[i][0];
                    res[k][1]=tr1[i][1];
                    res[k][2]=tr1[i][2]+tr2[j][2];
                    k++;
                    i++;
                    j++;
                }
                else if(tr1[i][1]<tr2[j][1])
                {
                    res[k][0]=tr1[i][0];
                    res[k][1]=tr1[i][1];
                    res[k][2]=tr1[i][2];
                    i++;
                    k++;
                }
                else
                {
                    res[k][0]=tr2[j][0];
                    res[k][1]=tr2[j][1];
                    res[k][2]=tr2[j][2];
                    j++;
                    k++;
                }
            }
            else if(tr1[i][0]<tr2[j][0])
            {
                res[k][0]=tr1[i][0];
                res[k][1]=tr1[i][1];
                res[k][2]=tr1[i][2];
                i++;
                k++;
            }
            else 
            {
                res[k][0]=tr2[j][0];
                res[k][1]=tr2[j][1];
                res[k][2]=tr2[j][2];
                j++;
                k++;
            }
        }
        while(i<=tr1[0][2])
        {
            res[k][0]=tr1[i][0];
            res[k][1]=tr1[i][1];
            res[k][2]=tr1[i][2];
            i++;
            k++;
        }
        while(j<=tr2[0][2])
        {
            res[k][0]=tr2[j][0];
            res[k][1]=tr2[j][1];
            res[k][2]=tr2[j][2];
            j++;
            k++;
        }
        res[0][2]=k-1;
    }
}
int main()
{
    int tr1[20][3],tr2[20][3],res[20][3],r1,r2,i,j;
    printf("\nEnter the Number of rows(Triplet Form) of First Matrix : ");
    scanf("%d",&r1);
    printf("\nEnter the First Matrix Elements(Triplet Form) : \n");
    for(i=0;i<r1;i++)
        for(j=0;j<3;j++)
            scanf("%d",&tr1[i][j]);
    printf("\nEnter the Number of rows(Triplet Form) of second Matrix : ");
    scanf("%d",&r2);
    printf("\nEnter the Second Matrix Elements(Triplet Form) : \n");
    for(i=0;i<r2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&tr2[i][j]);
    add(tr1,tr2,res);
    printf("\nResultant Matrix in Triplet Form is : \n");
    for(i=0;i<=res[0][2];i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
}