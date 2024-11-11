#include<stdio.h>
int main()
{
	int i, j, k,s;
	scanf("%d", &k);
	for (i = k-1; i >=0; i--)
	{
		for (j = 1; j <= 2*k-1; j++)
		{
			if (k - i <= j && j <= k + i)printf("*");
			else if (j < k - i)printf(" ");
		}
		if(i>0)printf("\n");
	}
	return 0;
}
