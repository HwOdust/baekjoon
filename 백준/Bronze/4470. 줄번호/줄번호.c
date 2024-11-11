#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int N;
	char C[50];
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
	{
		gets(C);
		printf("%d. %s\n", i + 1, C);
	}

	return 0;
}

