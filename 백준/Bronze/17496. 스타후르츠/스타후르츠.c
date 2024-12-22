#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n, t, c, p,cnt=0;
	scanf("%d %d %d %d", &n, &t, &c, &p);

	for (int i = 1; i <= n; i+=t)
	{
		cnt += c;
	}
	cnt -= c;
	printf("%d", cnt * p);
	return 0;
}