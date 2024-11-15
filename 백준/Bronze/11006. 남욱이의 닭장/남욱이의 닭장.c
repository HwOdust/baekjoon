#include<stdio.h>

int main()
{
	int t, a, b;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		b *= 2;
		printf("%d %d\n", (b - a), b/2 - b + a);
	}
	return 0;
}