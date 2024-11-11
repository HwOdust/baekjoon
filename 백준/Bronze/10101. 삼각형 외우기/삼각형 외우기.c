#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if (x + y + z != 180 || x == 0 || y == 0 || z == 0)
	{
		printf("Error");
		return 0;
	}
	if (x == y && y == z)
		printf("Equilateral");
	else if (x == y || y == z || x == z)
		printf("Isosceles");
	else 
		printf("Scalene");

	return 0;
}