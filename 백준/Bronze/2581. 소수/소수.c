#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	//소수: 오직 자신과 1만을 약수로 갖는 수.
	int m, n,i,j,suum=0,c,min;
	scanf("%d %d", &m, &n);
	min = n;
	for (i = m; i <= n; i++) //64 65
	{
		if (i == 1)continue;
		c = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)c++;
		}
		if (c == 0)
		{
			suum += i;
			if (i < min)min = i;
		}
	}
	if (suum == 0)
	{
		printf("-1");
		return 0;
	}

	printf("%d \n%d", suum, min);

	return 0;
}
