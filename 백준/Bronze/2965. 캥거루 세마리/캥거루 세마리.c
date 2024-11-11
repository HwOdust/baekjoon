#include<stdio.h>

int main()
{
	int a, b, c, max = 1;
	scanf("%d %d %d", &a, &b, &c);
	if (b - a > c - b)max = b - a;
	else max = c - b;
	printf("%d", max - 1);
	return 0;
}
