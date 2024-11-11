#include<stdio.h>

int main()
{
	float a, b;
	while (1)
	{
		scanf("%f %f", &a, &b);
		if (a == 0 && b == 0)
		{
			printf("AXIS");
			return 0;
		}
		else if (a > 0 && b > 0)printf("Q1\n");
		else if (a < 0 && b>0)printf("Q2\n");
		else if (a < 0 && b < 0)printf("Q3\n");
		else if (a > 0 && b < 0)printf("Q4\n");
		else printf("AXIS\n");
	}
	return 0;
}