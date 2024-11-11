#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int arr[9][9];
	int max=-1,I,J;
	int i, j;


	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			
			if (arr[i][j] > max)
			{
				

				max = arr[i][j];
				I = i+1;
				J = j+1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", I, J);
	
	return 0;
}


