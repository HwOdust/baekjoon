#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n, i,num;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		printf("%d\n", num * 23);
	}

	return 0;
}


