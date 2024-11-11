#include<stdio.h>
int main()
{
	int n, m, k, i,apple[10]={0}, change, check = 1, spawn1, spawn2;
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < m; i++)apple[i] = 1;
	for (i = 0; i < k; i++)
	{
		scanf("%d", &change);
		if (i == 0)
		{
			spawn1 = 0;
			spawn2 = m - 1;
		}
		while (1)
		{
			if (apple[change - 1] < check && spawn2 < change-1)
			{
				check++;
				for (int j = 0; j < m; j++)apple[spawn1+1+j]=check;
				spawn1++;
				spawn2++;
			}
			else if (apple[change - 1] < check && spawn1 > change - 1)
			{
				check++;
				for (int j = 0; j < m; j++)apple[spawn2 - 1 - j]=check;
				spawn1--;
				spawn2--;
			}
			if (apple[change - 1] == check)break;
		}
	}
	printf("%d\n", check - 1);
	return 0;
}
