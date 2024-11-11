#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int n, S = 2, D = 1, N = 0;
	scanf("%d", &n); //2

	if (1 == n)
	{
		printf("1/1");
		return 0;
	}

	n -= 1; 
	
	while (N <= S)
	{
		n -= 1; 
		N++; 
		if (n == 0)break;
		if (S == N)
		{
			S++; 
			D++;
			N = 0;
		}
	}
	
	if (D % 2 == 1)
		printf("%d/%d", N, S + 1 - N);
	else
		printf("%d/%d", S + 1 - N, N);
    
	return 0;
}
