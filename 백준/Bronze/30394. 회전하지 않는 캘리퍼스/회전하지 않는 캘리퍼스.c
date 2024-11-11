#include<stdio.h>

int main()
{
	int n, a, b, M = -1000000000, m = 1000000000;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		if (b > M)M = b;
		if (b < m)m = b;
	}
	printf("%d ", M - m);
	return 0;
}