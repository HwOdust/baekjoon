#include<stdio.h>
int main()
{
	int t,k,s,M,m;
	scanf("%d", &t);
	while (t--)
	{
		M = -1000000;
		m = 1000000;
		scanf("%d", &k);
		while (k--)
		{
			scanf("%d", &s);
			if (s > M)M = s;
			if (s < m)m = s;
		}
		printf("%d %d\n", m, M);
	}

	return 0;
}

