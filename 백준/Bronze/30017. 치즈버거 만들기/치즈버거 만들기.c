#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a-1 != b)
	{
		if (a > b)a = b + 1;
		else b = a - 1;
	}
	printf("%d", a + b);
	return 0;
}