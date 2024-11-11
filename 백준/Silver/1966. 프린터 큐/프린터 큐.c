#include<stdio.h>
int main()
{
	int c, t,j, n, m, i,arr[10000] = { 0 },moon,cnt,B,TT;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		B = n;
		cnt = 0;
		TT = m;
		for (i = 0; i < n; i++)scanf("%d", &arr[i]);
		for (i = 0; i < B; i++)
		{
			c = 0;
			for (j = i+1; j < B; j++)
			{
				if (arr[i] < arr[j])
				{
					c = 1;
					break;
				}
			}
			if (c == 1)
			{
				if (TT == i)
				{
					TT = B;
				}
				arr[B] = arr[i];
				arr[i] = 0;
				B++;
			}
			else
			{
				arr[i] = 0;
				cnt++;
				if (i == TT)
				{
					printf("%d\n", cnt);
					break;
				}
			}
		}
		for (i = 0; i < B; i++)arr[i] = 0;
	}
	return 0;
}