#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			if (j % 2 == i % 2)printf("*");
			else printf(" ");
		}
		if (i < n - 1)printf("\n");
	}
	return 0;
}