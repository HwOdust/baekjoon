#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[9], b[9], c[9];

	scanf("%s %s %s", a, b, c);
	printf("%d\n", atoi(a) + atoi(b) - atoi(c));
	strcat(a, b);
	printf("%d", atoi(a) - atoi(c));

	return 0;

}
