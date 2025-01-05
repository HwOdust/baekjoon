#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int x, t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &x);
		printf("%d %d\n", x, x);
	}

	return 0;
}