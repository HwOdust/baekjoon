#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>


int main()
{
	int i,n,len,j;
	char C[21];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", C);
		len = strlen(C);

		for (j = 0; j < len; j++) //65 97
		{
			if (C[j] >= 'A' && C[j] <= 'Z')C[j] +=32;
			printf("%c", C[j]);
		}
		printf("\n");
	}

}


