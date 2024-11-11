#include<stdio.h>
int main()
{
	int n, m, k,i,j,save=0;
	scanf("%d %d %d", &n, &m, &k);
	if (k < n + m - 1)
	{
		printf("NO");
		return 0;
	}
	else printf("YES\n");
	for (i = 1; i <= n; i++)
	{
		save = i;
		for (j = 0; j < m; j++)
		{
			printf("%d ", save);
			save++;
		}
		printf("\n");
	}
	return 0;
}

