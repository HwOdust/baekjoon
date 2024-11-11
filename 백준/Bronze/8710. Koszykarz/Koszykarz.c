#include<stdio.h>

int main()
{
	int a, b, c, s = 0;
	scanf("%d %d %d", &a, &b, &c);
	s = (b - a) / c;
	if ((b - a) % c > 0)s++;
	printf("%d", s);
	return 0;
}