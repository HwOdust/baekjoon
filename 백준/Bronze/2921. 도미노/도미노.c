#include<stdio.h>

int main()
{
	int n, i, j, sum = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			sum += i + j;
		}
	}
	printf("%d", sum);
	return 0;
}
