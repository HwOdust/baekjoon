#include <stdio.h>

int main()
{
	int n,x;
	scanf("%d", &n);
	x = 0;
	for (int i=1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (j == n - x || j == n + x)printf("*");
			else if (j < n + x)printf(" ");
		}
		x++;
		if(i<n)printf("\n");
	}
	return 0;
}
