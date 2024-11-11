#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int a,s=0;
	scanf("%d", &a);

	while (1)
	{
		if (a == 0)break;
		if (a%5==0)
		{
			a= a - 5;
			s++;
		}
		else if (a >=3)
		{
			if (a < 3)
			{
				printf("%d", -1);
				return 0;
			}
			a -= 3;
			s++;
			
		}
		else
		{
			printf("%d", -1);
			return 0;
		}
	}
	printf("%d", s);

	return 0;
	
}

