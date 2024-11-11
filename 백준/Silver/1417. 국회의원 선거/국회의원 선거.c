#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i, n, vote[50]={0},count = 0,check=0,max=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &vote[i]);
	while (1)
	{
		max = 0;
		for (i = 1; i < n; i++)
		{
			if (vote[i] > max)
			{
				max = vote[i];
				check = i;
			}
		}
		if (vote[0] <= max)
		{
			vote[0]++;
			vote[check]--;
			count++;
		}
		else break;
	}
	printf("%d", count);
	return 0;
}
