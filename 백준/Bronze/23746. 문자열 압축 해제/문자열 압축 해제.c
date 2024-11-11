#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>


int main()
{
	char C[26][1001]={0}, S[26] = {0};
	char T[1001] = { 0 }, save[10000001] = { 0 };
	int i,n,a,b;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s %c", &C[i], &S[i]);
	}

	scanf("%s", T);
	scanf("%d %d", &a, &b);

	for (i = 0; i < strlen(T); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (T[i] == S[j])
			{
				strcat(save, C[j]);
			}
		}
	}
	for (i = a - 1; i < b; i++)
	{
		printf("%c", save[i]);
	}
	
	return 0;
}


