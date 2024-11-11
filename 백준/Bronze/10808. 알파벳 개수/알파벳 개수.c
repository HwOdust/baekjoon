#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int i;
	char S[101];
	int arr[30] = { 0 }, len;
	scanf("%s", S);
	len = strlen(S);
	for (i = 0; i < len; i++)
	{
		arr[S[i] - 'a']++;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

