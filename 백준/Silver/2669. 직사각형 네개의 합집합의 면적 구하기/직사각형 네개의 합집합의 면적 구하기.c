#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n, a,b,c,d,graph[101][101]={0}, space = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int j = a; j < c; j++)
		{
			for (int k = b; k < d; k++)
			{
				graph[j][k] = 1;
			}
		}
	}
	for (int j = 0; j <= 100; j++)
	{
		for (int k = 0; k <= 100; k++)
		{
			if (graph[j][k] == 1)space++;
		}
	}
	printf("%d", space);

	return 0;
}


