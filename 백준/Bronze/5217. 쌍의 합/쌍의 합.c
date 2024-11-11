#include <stdio.h>

int main()
{
	int t,n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int c = 0;
		printf("Pairs for %d: ", n);
		for (int i = 1; i <= n / 2; i++)
		{
			for (int j = 2; j <= n ; j++)
			{
				if (i == j)continue;
				if (i + j == n&&c==0)
				{
					c = 1;
					printf("%d %d", i, j);
				}
				else if (c == 1 && i + j == n)printf(", %d %d", i, j);

			}
		}
		printf("\n");
	}
	return 0;
}

