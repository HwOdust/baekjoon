#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, cnt = 0;
		scanf("%d %d", &a, &b);
		cnt += a / b;
		if (a % b > 0)cnt++;
		printf("%d\n", cnt);
	}

	return 0;
}
