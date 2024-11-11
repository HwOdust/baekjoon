#include<stdio.h>
#include<string.h>
int cnt[1000][5] = { 0 }, check[1000][1000] = { 0 };
int main()
{
	int n, i, j, max = 0, cc = 0, count;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &cnt[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (j != k && cnt[j][i] == cnt[k][i])check[j][k] = 1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (check[i][j] == 1)count++;
		}
		if (count > max)
		{
			max = count;
			cc = i;
		}
	}
	printf("%d", cc + 1);
	return 0;
}