/*
Program For Performing The Operations On Matrix
*/
#include<stdio.h>
#include<stdlib.h>
void add(int mat1[][10],int r1,int c1,int mat2[][10],int r2,int c2)
{
    int mat3[10][10],i,j;
    if(r1!=r2 || c1!=c2)
    {
        printf("\nAddition is Not Possible !\n");
        return;
    }
    else
    {
        printf("\nResultant Matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                mat3[i][j]=mat1[i][j]+mat2[i][j];
                printf("%d  ",mat3[i][j]);
            }
            printf("\n");
        }
    }
}
void subtract(int mat1[][10],int r1,int c1,int mat2[][10],int r2,int c2)
{
    int mat3[10][10],i,j;
    if(r1!=r2 || c1!=c2)
    {
        printf("\nAddition is Not Possible !\n");
        return;
    }
    else
    {
        printf("\nResultant Matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                mat3[i][j]=mat1[i][j]-mat2[i][j];
                printf("%d  ",mat3[i][j]);
            }
            printf("\n");
        }
    }
}
void multiply(int mat1[][10],int r1,int c1,int mat2[][10],int r2,int c2)
{
    if(c1!=r2)
    {
        printf("\nMultiplication is Not possible !\n");
        return;
    }
    else
    {
        int i,j,k,mat3[10][10],sum=0; 
        printf("\nResultant Matrix : ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                    sum=sum+mat1[i][k]*mat2[k][j];
                mat3[i][j]=sum;
                sum=0;
                printf("%d ",mat3[i][j]);
            }
            printf("\n");
        }
    }
}
void transpose(int mat [][10],int r,int c)
{
    int res[10][10],i,j;
    printf("\nTranspose Matrix is : \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            res[i][j]=mat[j][i];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    printf("\nEnter 1 for : Two Matrix Operations(Add/Subtract/Multiply)\n      2 for : Single Matrix Operations(Transpose,Inverse)\n");
    printf("\nEnter Here : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        int mat1[10][10],r1,c1,mat2[10][10],r2,c2,i,j;
        printf("\nEnter the Number of Rows And Coloumns of First Matrix : ");
        scanf("%d%d",&r1,&c1);
        printf("\nEnter the Elements of First Matrix :\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&mat1[i][j]);
        printf("\nEnter the Number of Rows And Coloumns of Second Matrix : ");
        scanf("%d%d",&r2,&c2);
        printf("\nEnter the Elements of Second Matrix :\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&mat2[i][j]);
        printf("\n0 : Exit !\n1 : Addition\n2 : Subtraction\n3 : Multiplication\n");
        while(1)
        {
            printf("\nEnter Your Choice : ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 0:
                    printf("\nVISIT AGAIN \nTHANK YOU !\n\n");
                    exit(0);
                    break;
                case 1:
                    add(mat1,r1,c1,mat2,r2,c2);
                    break;
                case 2:
                    subtract(mat1,r1,c1,mat2,r2,c2);
                    break;
                case 3:
                    multiply(mat1,r1,c1,mat2,r2,c2);
                    break;
            }
        }
    }
    else if(ch==2)
    {
        int mat[10][10],r,c,i,j;
        printf("\nEnter the Number of Rows And Coloumns of the Matrix : ");
        scanf("%d%d",&r,&c);
        printf("\nEnter the Elements Matrix :\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&mat[i][j]);
        printf("\n0 : Exit !\n1 : Transpose\n2 : Inverse\n");
        while(1)
        {
            printf("\nEnter Your Choice : ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 0:
                    printf("\nVISIT AGAIN \nTHANK YOU !\n\n");
                    exit(0);
                    break;
                case 1:
                    transpose(mat,r,c);
                    break;
                case 2:
                    //inverse(mat,r,c);
                    break;
            }
        }
    }
    else
        printf("\nINVALID CHOICE !\n\n");
}