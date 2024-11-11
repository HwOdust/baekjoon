#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int a, b, A, B, min;
	scanf("%d %d %d %d", &a, & b, &A, &B);

	min = A - a;
	if (B - b < min)min = B - b;
	if (b < min)min = b;
	if (a < min)min = a;
	printf("%d", min);
	return 0;
}
