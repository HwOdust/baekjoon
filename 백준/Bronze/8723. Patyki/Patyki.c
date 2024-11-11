#include<stdio.h>

int main()
{
	int a, b, c,t;
	scanf("%d %d %d", &a, &b, &c);
	if (a > c && a > b)
	{
		t = a;
		a = c;
		c = t;
	}
	else if (b > c && b > a)
	{
		t = b;
		b = c;
		c = t;
	}
	if (c * c == a * a + b * b)printf("1");
	else if (a == b && b == c)printf("2");
	else printf("0");
	return 0;
}