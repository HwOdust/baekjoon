


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int suum=1, nn=1, n;
	scanf("%d",&n);

	while (suum < n) //7
	{
		suum += nn * 6;
		nn++;
	}
	printf("%d", nn);
	return 0;
}