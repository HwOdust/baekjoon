#include<stdio.h>
int main()
{
	int n, i, k, num[1001] = { 0 },cnt=0;
	scanf("%d %d", &n, &k);
	for (i = 2; i <= n; i++)num[i] = i;
	
	for (i = 2; i <= n; i++)
	{
		if (num[i] == 0)continue;
		else
		{
			for (int j = i; j <= n; j += i)
			{
				if (num[j] == 0)continue;
				else
				{
					num[j] = 0;
					cnt++;
				}
				if (cnt == k)
				{
					printf("%d", j);
					return 0;
				}
			}
		}
	}
}