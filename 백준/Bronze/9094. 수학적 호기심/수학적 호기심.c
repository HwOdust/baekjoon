#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int i,N,a,b,n,m,count;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &n, &m);
		count = 0;

		for (a = 1; a < n-1; a++)
		{
			for (b =a+1; b < n; b++)
			{
				if (!((a*a + b * b + m) % (a * b)))count++;
			}
		}
		printf("%d\n", count);
	}
	

	return 0;
}

	
