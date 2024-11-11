#include<stdio.h>
int main()
{
	int k, i, j, s;
	scanf("%d", &k);
	s = k - 1; //4
	for (i = 1; i <= 2 * k-1; i++)
	{
		for (j = 1; j <= 2 * k ; j++)
		{
			if (k - s < j && j < k + s+1)printf(" ");
			else printf("*");
		}
		if (i < k)s--;
		else s++;
		if (i < 2 * k - 1)printf("\n");
	}
	return 0;
}