#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi


int main()
{
	int N;
    int i,j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i - 1; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("*");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
			printf(" ");
		for (j = 0; j < N - i - 2; j++)
			printf("*");
		printf("*");
		for (j = 0; j < N - i - 2; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}