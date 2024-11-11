#include <stdio.h>
int main()
{
	long int n;
	int a,b;
	scanf("%ld", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}