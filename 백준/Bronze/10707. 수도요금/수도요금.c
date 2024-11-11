#include<stdio.h>
int main()
{
	int a, b, c, d, p, cnt = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
	cnt = b;
	a *= p;
	if (p > c)cnt += (p - c) * d;
	if (cnt > a)printf("%d", a);
	else printf("%d", cnt);
	return 0;
}

