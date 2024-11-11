#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; i <= 1000000; i++)
	{
		if (i == a)printf("%d ", a);
		else if (i == b)printf("%d ", b);
		else if (i == c)printf("%d ", c);
	}
	return 0;
}
