#include<stdio.h>
int main()
{
	int n, i, j,k;
	scanf("%d", &n);
	k = 0;
	for (i = 0; i < 2 * n - 1; i++)
	{
		for (j = 0; j < 2 * n - 1; j++)
		{
			if (j >= k && j < 2 * n - 1 - k)printf("*");
			else if (j <= k)printf(" ");
		}
		if(i!=2*n-2)printf("\n");
		if (i < (n*2-1)/2)k++;
		else k--;
	}
	return 0;
}
