#include<stdio.h>
int main()
{
	int n, x, s, c, p, cnt = 0;
	scanf("%d %d %d", &n, &x, &s);
	while (n--)
	{
		scanf("%d %d", &c, &p);
		if (x >= c)
		{
			if (p >s)cnt = 1;
		}
	}
	if (cnt == 1)printf("YES");
	else printf("NO");
	return 0;
}