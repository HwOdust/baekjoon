#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
	unsigned int i,j,k,a, b,c,d,n,sum;
	int T[301][301];
	scanf("%d %d", &a, &b);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			scanf("%d", &T[i][j]);
		}
	}

	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		for (j = a-1; j < c;j++)
		{
			for (k = b - 1; k < d; k++)
			{
				sum += T[j][k];
			}
		}
		printf("%d\n", sum);
	}

}


