#include<stdio.h>

int main()
{
	int n, h, s,sum=0,c=0;
	scanf("%d %d",&n, &h);
	while (n--)
	{
		scanf("%d", &s);
		sum += s;
		c++;
		if (sum >= h)
		{
			printf("%d", c);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
