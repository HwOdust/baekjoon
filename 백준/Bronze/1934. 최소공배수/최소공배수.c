#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	unsigned int n,a,b,j,t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		if (a > b) t = a;
		else t = b;
		for (j = t; j <= a * b; j +=t)
		{
			if (j % a == 0 && j % b == 0)break;
		}
		printf("%d\n", j);
	}
	return 0;
} 


