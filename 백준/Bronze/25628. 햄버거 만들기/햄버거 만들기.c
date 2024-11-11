#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b < 1)printf("0");
	else if (a >= 2 * b)printf("%d", b);
	else printf("%d", a / 2);

	return 0;
}
