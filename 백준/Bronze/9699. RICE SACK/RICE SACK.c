#include<stdio.h>

int main()
{
	int t,a;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int max = 0;
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &a);
			if (a > max)max = a;
		}
		printf("Case #%d: %d\n", i, max);
	}
	return 0;
}