#include<stdio.h>

int main()
{
	int cnt=0,a, b, c, d,a2,b2,c2;
	scanf("%d-%d-%d %d", &a, &b, &c, &d);
	while (d--)
	{
		scanf("%d-%d-%d", &a2, &b2, &c2);
		if (a < a2)cnt++;
		else if(a==a2)
		{
			if (b < b2)cnt++;
			else if(b==b2)
			{
				if (c <= c2)cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}