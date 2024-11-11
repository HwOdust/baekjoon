#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int n, i, j, len, L, R,S;
	char c[50];
	scanf("%d", &n);
	

	for (j = 0; j < n; j++)
	{
		S = 0;
		scanf("%s", c);
		len = strlen(c);

		
		L = 0;
		R = 0;

	
		for (i = 0; i < len; i++)
		{
			if (c[i] == '(')L++;
			if (c[i] == ')')R++;
			
			if (L < R)
			{
				S = 1;
				printf("NO\n");
				break;
			}
		}
		if (S == 1)continue;
		if (L != R)
		{
			printf("NO\n");
			continue;
		}
		
		else printf("YES\n");
		
	}
	return 0;
}