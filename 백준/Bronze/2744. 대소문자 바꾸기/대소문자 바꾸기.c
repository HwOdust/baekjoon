#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	char A[101];
	int len;
	gets(A);
	len = strlen(A);  //65 97 

	for(int i=0;i<len;i++)
	{
		if (A[i] >= 'a' && A[i] <= 'z')printf("%c", A[i] - 32);
		else if (A[i] >= 'A' && A[i] <= 'Z')printf("%c", A[i] + 32);
	}
	return 0;
}

