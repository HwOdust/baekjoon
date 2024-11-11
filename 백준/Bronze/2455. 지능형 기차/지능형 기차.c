#include<stdio.h>
int main()
{
	int a, b, max = 0, bus = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &a, &b);
		bus += b - a;
		if (bus > max)max = bus;
	}
	printf("%d", max);
	return 0;
}