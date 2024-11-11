#include<stdio.h>

int main()
{
	int n, sum = 0,a,b;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	printf("%d", sum);
	return 0;
}
