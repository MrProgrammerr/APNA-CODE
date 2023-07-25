// Matrix Chain Multiplication

#include <stdio.h>
#include <limits.h>
int main()
{
	int n;
	printf("\nEnter the Number of Matrices : ");
	scanf("%d", &n);
	int p[n + 1], i;
	printf("\nEnter the Dimensions respectively : ");
	for (i = 0; i <= n; i++)
		scanf("%d", &p[i]);
	int m[n + 1][n + 1], s[n + 1][n + 1], d, j, k, q, min;
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			m[i][j] = s[i][j] = 0;

	for (d = 1; d < n; d++)
	{
		for (i = 1; i <= n - d; i++)
		{
			j = i + d;
			min = INT_MAX;
			for (k = i; k < j; k++)
			{
				q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
				if (q < min)
				{
					m[i][j] = q;
					s[i][j] = k;
					min = q;
				}
				else
					m[i][j] = min;
			}
		}
	}

	printf("\nCost Matrix : \n");
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
			printf("%d\t", m[i][j]);
		printf("\n\n");
	}

	printf("\nK Matrix : \n");
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
			printf("%d\t", s[i][j]);
		printf("\n\n");
	}
}
