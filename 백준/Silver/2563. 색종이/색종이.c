#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int arr[100][100] = { 0 };
	int n, i, j,k;
	int a, b,c=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				arr[a+j][b+k] = 1;
			}
		}


	}
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
				c++;
		}
	}
	printf("%d", c);
	return 0;


}