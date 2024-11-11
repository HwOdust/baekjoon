#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char C[50];
	gets(C);
	int len,c=0,s=0;
	len = strlen(C);

	if (C[0] == '"')c++;
	if (C[len - 1] == '"')c++;

	if (len > 2 && c == 2)
	{
		for (int i = 1; i < len - 1; i++)
		{
			if (C[i] == ' ')s++;
		}
		if (s == len - 2)
		{
			printf("CE");
			return 0;
		}
		for (int i = 1; i < len - 1; i++)
			printf("%c", C[i]);
	}
	else printf("CE");




	return 0;
}



