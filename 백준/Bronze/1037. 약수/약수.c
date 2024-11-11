#include<stdio.h>

int main()
{
	int max = 0, min = 1000001, t,x;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &x);
		if (x < min)min = x;
		if (x > max)max = x;
	}
	printf("%d",min*max);
	return 0;
}