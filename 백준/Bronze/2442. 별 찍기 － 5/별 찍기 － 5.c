#include<stdio.h>
int main()
{
	int i, j, k,s;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		for (j = 1; j <= 2*k-1; j++)
		{
			if (k - i <= j && j <= k + i)printf("*");
			else if (j < k - i)printf(" ");
		}
		if (i < k-1)printf("\n");
	}
	return 0;
}