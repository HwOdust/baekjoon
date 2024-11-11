#include<stdio.h>

int main()
{
	int A[100][100] = { 0 }, B[100][100] = { 0 };
	int n, m, i, j, k,sum=0;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d %d", &m, &k);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < k; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (int s = 0; s < k; s++)
		{
			for (j = 0; j < m; j++)
			{
				sum += A[i][j] * B[j][s];
			}
			printf("%d ", sum);
			sum = 0;
		}
		printf("\n");
	}
	return 0;
}