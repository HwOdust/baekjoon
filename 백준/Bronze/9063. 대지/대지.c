#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int i, n, x, y, xm=-10000, xn=10000, ym=-10000, yn=10000;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x > xm)xm = x;
		if (x < xn)xn = x;
		if (y > ym)ym = y;
		if (y < yn)yn = y;
	}

	printf("%d", (xm - xn) * (ym - yn));

	return 0;
}