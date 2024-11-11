#include<stdio.h>

int main()
{
	int sum = 0, max = 0, s,c=0;
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &s);
			sum += s;
		}
		if (sum > max)
		{
			max = sum;
			c = i + 1;
		}
	}

	printf("%d %d", c, max);

	return 0;
}
