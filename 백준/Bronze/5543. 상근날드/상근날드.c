#include<stdio.h>
int main()
{
	int cost, min1=2001, min2=2001, i = 3;
	while (i--)
	{
		scanf("%d", &cost);
		if (cost < min1)min1 = cost;
	}
	i = 2;
	while (i--)
	{
		scanf("%d", &cost);
		if (cost < min2)min2 = cost;
	}
	printf("%d", min1 + min2 - 50);
	return 0;
}