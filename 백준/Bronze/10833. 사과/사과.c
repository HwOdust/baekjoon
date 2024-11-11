#include <stdio.h>

int main()
{
	int t, a, b, apple = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		apple += b % a;
	}
	printf("%d", apple);
	return 0;
}
