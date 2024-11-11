#include<stdio.h>
#include<string.h>

int main()
{
	int t, k, m;
	scanf("%d", &t);
	while (t--)
	{
		int sum = 0;
		scanf("%d", &k);
		while (k--)
		{
			scanf("%d", &m);
			sum += m;
		}
		printf("%d\n", sum);
	}
	return 0;
	
}
