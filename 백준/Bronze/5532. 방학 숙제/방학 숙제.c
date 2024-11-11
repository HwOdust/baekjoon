#include<stdio.h>

int main()
{
	int l, a, b, c, d,k,k2;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	k = a / c;
	if (a % c > 0)k++;
	k2 = b / d;
	if (b % d > 0)k2++;
	if (k <k2)k = k2;
	printf("%d", l - k);

	return 0;
}
