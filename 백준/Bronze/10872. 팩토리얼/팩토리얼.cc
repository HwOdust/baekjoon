#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int n, i,s=1;
	scanf("%d", &n);

	if (n == 0)
		printf("%d", 1);

	else
	{
		for (i = 1; i <= n; i++)
		{
			s *= i;
		}
		printf("%d", s);
	}
	
	return 0;
}


