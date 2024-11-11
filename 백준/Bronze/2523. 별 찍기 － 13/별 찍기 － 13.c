#include<stdio.h>
int main()
{
	int k, i, j,s;
	scanf("%d", &k);
	s = k - 1;
	for (i = 1; i <= 2*k-1; i++)
	{
		for (j = 1; j <= k; j++)
		{
			if (j <= k-s)printf("*");
		}
		if (i < k)s--;
		else s++;
		if(i<2*k-1)printf("\n");
	}
	return 0;
}
