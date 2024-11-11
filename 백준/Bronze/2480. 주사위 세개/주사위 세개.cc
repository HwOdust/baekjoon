#include<iostream>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)printf("%d", 10000 + a * 1000);
	else if (a == b && b != c)printf("%d", 1000 + 100 * a);
	else if (b == c && b != a)printf("%d", 1000 + 100 * b);
	else if (a == c && a != b)printf("%d", 1000 + 100 * a);
	else if (a >= b && a >= c)printf("%d", 100 * a);
	else if (b >= a && b >= c)printf("%d", 100 * b);
	else printf("%d", 100 * c);

	return 0;
}