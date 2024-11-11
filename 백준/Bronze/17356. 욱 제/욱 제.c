#include<stdio.h>
#include<math.h>
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%f", (1 / (1 + pow(10, (b - a) / 400))));
	return 0;
}
