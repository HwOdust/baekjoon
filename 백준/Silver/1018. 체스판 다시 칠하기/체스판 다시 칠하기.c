#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int n, m, t = 0,count=0,M=0;
	int i, j,k,len,r;
	char C[51][51] = { 0 }, T1[9][9] = { 0 }, T2[9][9] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%s", C[i]);
	
	}

	M = n * m;
	
	if (n < m)
		len = n;
	else
		len = m;


	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (t == 0)
			{
				T1[i][j] = 'W';
				T2[i][j] = 'B';
				t = 1;
			}
			else if (t == 1)
			{
				T1[i][j] = 'B';
				T2[i][j] = 'W';
				t = 0;
			}
		}
		if (t == 0)t = 1;
		else t = 0;
	}
	
	
	
	for (i = 0; i <= n-8; i++) 
	{
		for(r = 0; r <= m-8; r++)
		{
			for (j = 0; j < 8; j++)
			{
				for (k = 0; k <  8; k++)
				{
					if (C[i+j][r+k] != T1[j][k])
						count++;
				}
			}
			if (count < M) M = count; //가장 적은 케이스 찾기
			count = 0;
		}
	}	
	for (i = 0; i <= n - 8; i++)
	{
		for (r = 0; r <= m - 8; r++)
		{
			for (j = 0; j < 8; j++)
			{
				for (k = 0; k < 8; k++)
				{
					if (C[i + j][r + k] != T2[j][k])
						count++;
				}
			}
			if (count < M) M = count; //가장 적은 케이스 찾기
			count = 0;
		}
	}
	printf("%d", M);

	return 0;
}