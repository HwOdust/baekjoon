#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int arr[3],i,max=1;
	while (1)
	{
		max = 1;
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] > max)max = arr[i];
		}
		
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			return 0;

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
		{
			printf("Invalid\n");
			continue;
		}

		if (arr[0] == arr[1] && arr[1] == arr[2])printf("Equilateral\n");
		else if (2 * max >= arr[0] + arr[1] + arr[2])printf("Invalid\n");
		else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0])printf("Isosceles\n");
		else printf("Scalene\n");


		
	}

	return 0;
}