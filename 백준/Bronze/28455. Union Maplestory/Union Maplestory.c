#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int hero[101]={0}, n, i, tmp, sum = 0, ability = 0,check=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &hero[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (hero[j] < hero[j+1])
			{
				tmp = hero[j];
				hero[j] = hero[j+1];
				hero[j+1] = tmp;
			}
		}
	}
	for (i = 0; i < 42; i++)
	{
		sum += hero[i];
		if (hero[i] >= 250)ability += 5;
		else if (hero[i] >=200)ability += 4;
		else if (hero[i] >= 140)ability += 3;
		else if (hero[i] >= 100)ability += 2;
		else if ( hero[i] >= 60)ability++;
	}
	printf("%d %d", sum, ability);
	return 0;
}

	
