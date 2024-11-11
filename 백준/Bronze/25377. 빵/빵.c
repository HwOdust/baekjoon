#include<stdio.h>

int main()
{
	int k, fast = 1000, ok = 0,a,b;
	scanf("%d", &k);
	while (k--)
	{
		scanf("%d %d", &a, &b);
		if (a <= b)ok++;
		else continue;
		if (b <= fast)fast = b;
		
	}
	if (ok > 0)printf("%d", fast);
	else printf("-1");

	return 0;
}
