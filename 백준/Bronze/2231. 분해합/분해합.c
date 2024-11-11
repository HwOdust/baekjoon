#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int S;
	int i, j;
	int suum;
	int save;

	scanf("%d", &S);

	for (i = 1; i < S; i++)
	{
		save = i;
		suum = 0;
		suum += save;

		for (j = 0; j < 7; j++)
		{
			suum += save % 10;
			save /= 10;
		}

		suum += save;

		if (suum == S)
		{
			printf("%d", i);
			break;
		}
		
	
	}

	if (suum != S)
		printf("0");
	
	return 0;
}






