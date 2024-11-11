#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char C[101];
	int arr[30] = { 0 }, len,c=0;

	gets(C);
	len = strlen(C);
	for (int i = 0; i < len; i++)
	{
		arr[C[i] - 'A'] = 1;
	}
	
	if (arr[1] == 1)c++; //B
	if (arr[8] == 1)c++; //I
	if (arr[12] == 1)c++; //M
	if (arr[14] == 1)c++; //O
	if (arr[18] == 1)c++;

	if (c == 5)printf("YES");
	else printf("NO");
	return 0;
}

//ABCDEFG HIGKLMNOP QRSTUVWXYZ//
