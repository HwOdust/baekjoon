#include<stdio.h>
#include<string.h>

int main()
{
	int t, a, b, c, p,cnt=0,cnt2=0;
	scanf("%d", &t);
	while (t--)
	{
		cnt = 0;
		cnt2 = 0;
		scanf("%d %d %d %d", &a, &b, &c, &p);
		if (p > a)cnt++;
		if (p > b)cnt++;
		if (p > c)cnt++;
		if (a % p == 0)cnt2++;
		if (b % p == 0)cnt2++;
		if (c % p == 0)cnt2++;
		if (cnt < 2 && cnt2 > 1)printf("1\n");
		else printf("0\n");
	}

	return 0;
}

