#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi


int main()
{
	int a, b, c, d, e, f;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	a = 1 - a; //
	b = 1 - b;
	c = 2 - c;
	d = 2 - d;
	e = 2 - e;
	f = 8 - f;
	
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
	return 0;
}