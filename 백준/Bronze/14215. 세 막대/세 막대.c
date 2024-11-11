#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int arr[3],i,max=1,save=1,c=0;
	

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] >= max)
		{
			max = arr[i];
			save = i;
		}
	}
		
	while (1)
	{
		if (2 * max >= arr[0] + arr[1] + arr[2]-c) 
		{
			max--;
			c++;
		}
		else
		{
			arr[save] = max;
			printf("%d", arr[0] + arr[1] + arr[2]);
			return 0;
		}
	}
	return 0;
}