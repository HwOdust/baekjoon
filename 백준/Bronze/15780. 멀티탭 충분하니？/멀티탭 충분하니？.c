#include<stdio.h>
int main()
{
	int cnt = 0, n, k,a;
	scanf("%d %d", &n, &k);
	while (k--)
	{
		scanf("%d", &a);
		if (a % 2 == 0)cnt += a / 2;
		else cnt += a / 2 + 1;
	}
	if (cnt >= n)printf("YES");
	else printf("NO");
	return 0;
}
