#include <stdio.h>

int main()
{
	int t,c,s,sumc = 100, sums = 100;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &c, &s);
		if (c < s)sumc -= s;
		else if (c > s)sums -= c;
	}
	printf("%d\n%d", sumc, sums);

	return 0;
}
