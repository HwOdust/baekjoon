#include <stdio.h>
#include <string.h>
#include <limits.h>
make_sheep(int a)
{
	if (a >= 0)return a;
	else return -a;
}

int main()
{
	int min = INT_MAX, c1=0,c2=0, n, dragonwater[100000] = { 0 };
	scanf("%d", &n);
	int L = 0, R = n - 1;
	for (int i = 0; i < n; i++)scanf("%d", &dragonwater[i]);
	
	while (L<R)
	{
		if (make_sheep(dragonwater[L] + dragonwater[R]) <= min)
		{
			//printf("makesheep-ed, a = %d\n", make_sheep(dragonwater[L] + dragonwater[R]));
			//printf("%d %d\n", make_sheep(dragonwater[L] + dragonwater[R]), min);
			min = make_sheep(dragonwater[L] + dragonwater[R]);
			c1 = dragonwater[L];
			c2 = dragonwater[R];
		}
		if (dragonwater[L] + dragonwater[R] > 0)
			R--;
		else if (dragonwater[L] + dragonwater[R] < 0)
			L++;
		else {			//diff == 0
			break;
		}

		
	}

	printf("%d %d", c1, c2);

	return 0;
}

