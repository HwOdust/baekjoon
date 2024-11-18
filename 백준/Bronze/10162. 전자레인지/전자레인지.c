#include <stdio.h>

int main()
{//5m 1m 10s
	int t, a, b, c,rest=0;
	scanf("%d", &t);
	if (t % 10 != 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d %d %d", t / 300, (t % 300) / 60, ((t % 300) % 60) / 10);

	return 0;
}

