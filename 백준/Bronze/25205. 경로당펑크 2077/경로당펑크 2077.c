#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
	int n, i;
	char word;

	scanf("%d", &n);

	for (i = 0; i < n+1; i++)
	{
		scanf("%c", &word);

	}

	if (word == 'q' || word == 'w' || word == 'z' || word == 'e' || word == 'r' || word == 't' || word == 'a' || word == 's' || word == 'd' || word == 'f' || word == 'g' || word == 'x' || word == 'c' || word == 'v')
		printf("1");
	else
		printf("0");
	return 0;
}
