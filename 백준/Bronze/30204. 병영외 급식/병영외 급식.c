#include<stdio.h>

int main()
{
	int n, x,sum=0,xx;
	scanf("%d %d", &n,&xx);
	while (n--)
	{
		scanf("%d", &x);
		sum += x;
	}
	if (sum % xx == 0)printf("1");
	else printf("0");



	return 0;
}