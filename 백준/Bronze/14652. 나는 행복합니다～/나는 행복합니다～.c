#include<stdio.h>
int main()
{
	int n, m, k,cnt = 0, i,j;
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (k == cnt)
			{
				printf("%d %d", i, j);
				return 0;
			}
			cnt++;
		}
	}
	return 0;
}
