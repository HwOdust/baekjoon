#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	int n;
	int i,j;
	int a,c;

	scanf("%d", &n);
	c = n;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a == 1)
			c--;

		for (j = 2; j < a; j++)
		{
			if (a % j == 0)
			{
				c--;
				break;
			}
		}

	}
	printf("%d", c);
	return 0;
}


