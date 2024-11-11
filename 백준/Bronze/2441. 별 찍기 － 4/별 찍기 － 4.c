#include<stdio.h>
int main()
{
	int i, j, k,s;
	scanf("%d", &k);
	s = k;
	for (i = 0;i<k;i++)
	{
		for (j = 0; j < k; j++)
		{
			if (s >= k-j)printf("*");
			else printf(" ");
		}
		s--;
		if (i < k - 1)printf("\n");
	}
	return 0;
}
