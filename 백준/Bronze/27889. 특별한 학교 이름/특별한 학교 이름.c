#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char C[50];
	gets(C);
	if (strcmp(C, "NLCS")==0)printf("North London Collegiate School");
	if (strcmp(C, "BHA") == 0)printf("Branksome Hall Asia");
	if (strcmp(C, "KIS") == 0)printf("Korea International School");
	if (strcmp(C, "SJA") == 0)printf("St. Johnsbury Academy");


	return 0;
}

