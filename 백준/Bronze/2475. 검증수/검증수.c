#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int a, b,c,d,e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a = (a * a + b * b + c * c + d * d + e * e) % 10;
	printf("%d", a);

	return 0;
}


