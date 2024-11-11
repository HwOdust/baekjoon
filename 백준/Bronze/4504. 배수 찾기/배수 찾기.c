#include<stdio.h>
int main()
{
	int n, t;
	scanf("%d", &n);
	while (1)
	{
		scanf("%d", &t);
		if (t == 0)return 0;
		if (t % n == 0)printf("%d is a multiple of %d.\n", t, n);
		else printf("%d is NOT a multiple of %d.\n", t, n);
	}
	return 0;
}

