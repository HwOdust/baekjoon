#include<stdio.h>

int main()
{
	int i,j,t, k, n, arr[16][16] = { 0 };
	scanf("%d", &t);
	for (i = 1; i <= 14; i++)arr[0][i] = i;
	for (i = 0; i <= 14; i++)arr[i][1] = 1;
	for (i = 1; i <= 14; i++)
	{
		for (j = 2; j <= 14; j++)
		{
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	while (t--)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
	return 0;
}