#include <stdio.h>

int main()
{
	int n,sans=0;
	while (1)
	{
		sans = 0;
		scanf("%d", &n);
		if (n == 0)return 0;
		for (int i = 1; i <= n; i++)
		{
			sans += i * i;
		}
		printf("%d\n", sans);
	}


	return 0;
}