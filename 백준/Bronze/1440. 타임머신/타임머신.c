#include<stdio.h>

int main()
{
	int a, b, c, cnt = 0;
	scanf("%d:%d:%d", &a, &b, &c);

	if (1 <= a && a <= 12)cnt += 2;
	if (1 <= b && b <= 12)cnt += 2;
	if (1 <= c && c <= 12)cnt += 2;

	if (a > 59 || b > 59 || c > 59)cnt = 0;

	printf("%d", cnt);
	return 0;
}

