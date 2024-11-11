#include<stdio.h>
int main()
{
	long long int n, i = 1, count = 0,sum=0;
	scanf("%lld", &n);
	while (sum <= n)
	{
		sum += i;
		i++;
		if(sum<=n)count++;
	}
	printf("%lld", count);
}