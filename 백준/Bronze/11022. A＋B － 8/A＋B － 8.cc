#include <stdio.h>
int main()
{
	int n, a = 0, b = 0, c = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		c = a + b;

		printf("Case #%d: %d + %d = %d\n", i, a, b, c);

	}

	return 0;
}
