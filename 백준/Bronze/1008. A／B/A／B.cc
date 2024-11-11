#include<stdio.h>
int main()

{
	double a, b, c;

	scanf("%lf", &a);
	scanf("%lf", &b);

	c = a / b;

	printf("%0.9f", c);

	return 0;
}