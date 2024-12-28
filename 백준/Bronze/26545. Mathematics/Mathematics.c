#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int t, a, sum=0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", sum);
	return 0;
}