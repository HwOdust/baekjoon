#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int a, b,n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}


	return 0;
}



