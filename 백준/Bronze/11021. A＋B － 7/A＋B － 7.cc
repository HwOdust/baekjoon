#include <stdio.h>
int main()
{
	int n, a = 0, b = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		a = a + b;

		printf("Case #%d: %d\n", i, a);

	}

	return 0;
}