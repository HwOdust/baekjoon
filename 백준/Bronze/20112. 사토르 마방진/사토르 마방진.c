#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>


int main()
{
	int a, i, j;
	char arr[101][101], arr2[101][101];
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%s", arr[i]);
		/*for (j = 0; j < a; j++)
		{
			scanf(" %c", &arr[i][j]);
		}*/
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			arr2[j][i] = arr[i][j];
		}
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (arr[i][j] != arr2[i][j])
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}


