#include<stdio.h>
int main()
{
	int n, a, b,i,chicken=0;
	scanf("%d %d %d", &n, &a, &b);
	chicken += a/2 + b;
	if (n >= chicken)printf("%d", chicken);
	else printf("%d", n);
	return 0;
}