#include<stdio.h>
int main()
{
	long long k, n, ss,s;
	scanf("%lld %lld", &k, &n);
	if (n == 1)
	{
		printf("-1");
		return 0;
	}
	ss = k * n / (n - 1);
	if((k * n) % (n - 1) !=0)printf("%lld", ss+1);
	else printf("%lld", ss);
	return 0;
}