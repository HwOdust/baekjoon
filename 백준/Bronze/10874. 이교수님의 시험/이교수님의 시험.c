#include <stdio.h>

int main()
{
	int n,x;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		int cnt = 0;
		for (int i = 1; i <= 10; i++)
		{
			scanf("%d", &x);
			if (x == (i - 1) % 5 + 1)cnt++;
		}
		if (cnt == 10)printf("%d\n", j);
	}
	
	return 0;
}
