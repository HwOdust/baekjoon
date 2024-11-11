#include<stdio.h>
int main()
{
	long long int T, x, y, i, d, j = 2, c;
	scanf("%lld", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%lld %lld", &x, &y);
		d = y - x;
		j = 2;
		while (1)
		{
			if (d == 1 || d == 2)
			{
				c = d;
				break;
			}
			else if (j * (j - 1) < d && d <= j * j)
			{
				c = 2 * j - 1;
				break;
			}
			else if (j * j < d && d <= j * (j + 1))
			{
				c = 2 * j;
				break;
			}
			j++;
		}
		printf("%lld\n", c);
	}
	return 0;
}