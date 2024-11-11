#include<stdio.h>
int main()
{
	int n, m, s = 0,k,sum=0;
	scanf("%d %d", &n, &m);
	while (n--)
	{
		scanf("%d", &k);
		if (k > s)s = k;
	}
	sum += s;
	s = 0;
	while (m--)
	{
		scanf("%d", &k);
		if (k > s)s = k;
	}
	printf("%d", sum + s);
	return 0;
}
