#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int i, x, y, arr[1001] = { 0 }, arr2[1001] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d", &x, &y);
		arr[x - 1]++;
		arr2[y - 1]++;
	}

	for (i = 0; i < 1000; i++)
	{
		if (arr[i] == 1)x = i + 1;
		if (arr2[i] == 1)y = i + 1;
	}
	printf("%d %d", x, y);
	return 0;
}