#include<stdio.h>
#include<string.h>
int main()
{
	int n, i,s;
	scanf("%d", &n);
	s = 2 * n - 1;
	for (i = 0; i < n-1; i++)printf(" ");
	printf("*");
	if(n!=1)printf("\n");
	for (i = 1; i <= n - 2; i++)
	{
		for (int j = 1; j <= n+i; j++)
		{
			if (j == n - i || j == n + i)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	if(n!=1)for (i = 0; i < s; i++)printf("*");
	return 0;
}