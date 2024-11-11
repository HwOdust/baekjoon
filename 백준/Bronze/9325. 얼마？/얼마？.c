#include <stdio.h>

int main()
{
	int t,sum,n,q,p;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &sum);
		scanf("%d", &n);
		while (n--)
		{
			scanf("%d %d", &q, &p);
			sum += q * p;
		}
		printf("%d\n", sum);
	}
	return 0;
}
