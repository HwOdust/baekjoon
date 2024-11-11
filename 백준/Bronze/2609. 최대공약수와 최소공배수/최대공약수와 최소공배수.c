#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i,t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	//a>b



	for (i= b; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	printf("%d", a * b / i );
	return 0;
}

