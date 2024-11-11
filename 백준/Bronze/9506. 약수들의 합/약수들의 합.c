#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int n,i,suum;
	while (1)
	{
		suum = 0;
		scanf("%d", &n);

		if (n == -1)return 0;

		for (i = 1; i < n; i++)
		{
			if (n % i == 0)suum += i;
		}

		if (n == suum)
		{
			printf("%d = 1 ", n);
			for (i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					printf("+ %d ", i);
				}
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);
	}

	

	return 0;
}
