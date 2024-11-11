#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char C[256];
	int len,c;
	gets(C);
	while (strcmp(C, "#") != 0)
	{
		c = 0;
		len = strlen(C);
		for (int i = 0; i < len; i++)
		{
			if (C[i] == 'A' || C[i] == 'E' || C[i] == 'I' || C[i] == 'O' || C[i] == 'U' || C[i] == 'a' || C[i] == 'e' || C[i] == 'i' || C[i] == 'o' || C[i] == 'u')c++;
		}
		printf("%d\n", c);
		gets(C);
	}

	return 0;
}

