#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, count = 0,sum=0;
	scanf("%d", &n);
	for (i = 1; sum <= n; i++)
	{
		sum += i;
		if ((n - sum) % i == 0&&n-sum>=0)count++;
	}
	printf("%d", count);
	return 0;
}
