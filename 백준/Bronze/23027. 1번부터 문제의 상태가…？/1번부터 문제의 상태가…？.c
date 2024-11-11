#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
	int i = 0, j, check = 3, T[4] = { 0 };
	char N[1001];

	scanf("%s", N);
	for (i = 0; i < strlen(N); i++)
	{
		if (N[i] == 'A')T[0]++;
		if (N[i] == 'B')T[1]++;
		if (N[i] == 'C')T[2]++;
	}
	
	for (i = 0; i < 3; i++)
	{
		if (T[i] > 0)
		{
			check = i;
			break;
		}
	}
	if (check == 0)
	{
		for (j = 0; j < strlen(N); j++)
		{
			if (N[j] == 'B' || N[j] == 'C' || N[j] == 'D' || N[j] == 'F')
				N[j] = 'A';
		}
	}
	if (check == 1)
	{
		for (j = 0; j < strlen(N); j++)
		{
			if (N[j] == 'C' || N[j] == 'D' || N[j] == 'F')
				N[j] = 'B';
		}
	}
	if (check == 2)
	{
		for (j = 0; j < strlen(N); j++)
		{
			if (N[j] == 'D' || N[j] == 'F')
				N[j] = 'C';
		}
	}
	if (check == 3)
	{
		for (j = 0; j < strlen(N); j++)
		{
			N[j] = 'A';
		}
	}

	printf("%s", N);

	return 0;

}


