#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char C[500];
	int len,i;
	do
	{
		//scanf("%[^\n]s", C);
		gets(C);
		if(strcmp(C, "END") ==0)return 0;
		len = strlen(C);
		for (i = 0; i < len; i++)
		{
			printf("%c", C[len - i - 1]);
		}
		printf("\n");
	} while (strcmp(C, "END") != 0);
	return 0;
}