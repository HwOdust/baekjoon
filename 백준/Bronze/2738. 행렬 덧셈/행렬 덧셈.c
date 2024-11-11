#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int a, b, i ,j, arr[100][100];
	scanf("%d %d", &a, &b);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			int t;
			scanf("%d", &t);
			arr[i][j] += t;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}


