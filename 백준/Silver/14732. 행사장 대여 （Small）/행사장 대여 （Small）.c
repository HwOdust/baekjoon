#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, t, ga1, ga2, se1, se2, arr[501][501] = { 0 },cnt=0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d %d", &ga1, &se1, &ga2, &se2);
		for (i = ga1; i < ga2; i++)
		{
			for (j = se1; j < se2; j++)
			{
				arr[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 501; i++)
	{
		for (j = 0; j < 501; j++)
		{
			if (arr[i][j] == 1)cnt += 1;
		}
	}
	printf("%d", cnt);
	return 0;
}
