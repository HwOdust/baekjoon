#include<stdio.h>
#include<string.h>

int main()
{
	double a, b, t;
	int s;
	scanf("%lf %lf", &a, &b);
	if (a-b<0)
	{
		printf("-1");
		return 0;
	}
	s = (a + b) / 2;
	if ((a + b) / 2 - s > 0) 
	{
		printf("-1");
		return 0;
	}
	printf("%0.f %0.f", (a+b)/2, (a-b)/2);
	return 0;
}