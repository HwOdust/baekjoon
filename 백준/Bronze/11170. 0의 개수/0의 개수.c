#include<stdio.h>
int main()
{
	int i,t, n, m,save,count=0;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &n, &m);
		count = 0;
		for (int j = n; j <= m; j++)
		{
			save = j;
			while (save > 0)
			{
				if (save % 10 == 0)count++;
				save /= 10;
			}
		}
		if (n == 0)count++;
		printf("%d\n", count);

	}
	return 0;
}
