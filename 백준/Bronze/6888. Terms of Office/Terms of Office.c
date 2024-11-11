#include<stdio.h>

int main()
{
	int x, y, i,sum=0;
	scanf("%d %d", &x, &y);
	sum = x;
	while (1)
	{
		printf("All positions change in year %d\n", sum);
		sum +=60;
		if (sum > y)return 0;
	}
	return 0;
}