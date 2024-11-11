#include<stdio.h>
int main()
{
	int t, n,k,i,cnt=0,j;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		k = 0;
		cnt = 0;
		for (i = 1; i <= n ; i++)
		{
			k = 0;
			for (j = 1; j <= i + 1; j++)k += j;
			k *= i;
			cnt += k;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
