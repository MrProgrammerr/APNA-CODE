// Q3.WAP in C to convert a Sparse Matrix (in triplet form)
// to its Transpose Matrix (Triplet form)

#include <stdio.h>

void trans(int [][3], int);
int main()
{
    int a[10][3], i, j, nr;
    printf("Enter the number of rows of the triplet matrix : ");
    scanf("%d", &nr);
    printf("Enter the element in matrix\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    trans(a, nr);
    return 0;
}
void trans(int a[][3], int nr)
{
    int b[50][3];
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];
    int i, j, k=1;
    for ( i = 0; i < a[0][1]; i++)
    {
        for ( j = 1; j < nr; j++)
        {
            if (i==a[j][1])
            {
                b[k][0]=i;
                b[k][1]=a[j][0];
                b[k][2]=a[j][2];
                k++;
            }   
        }
    }
    printf("The transposed matrix is: \n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}