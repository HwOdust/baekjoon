#include<stdio.h>

int main()
{
	int n, a,d=3,sum=0;
	scanf("%d", &n);
	while (d--)
	{
		scanf("%d", &a);
		sum += a;
		if (a > n)sum -= a - n;
	}
	printf("%d", sum);
	return 0;
}
