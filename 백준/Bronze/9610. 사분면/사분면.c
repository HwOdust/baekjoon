#include <stdio.h>

int main()
{
	int t, x, y, q[5] = { 0 }, axis = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 || y == 0)axis++;
		else if (x > 0 && y > 0)q[1]++;
		else if (x > 0 && y < 0)q[4]++;
		else if (x < 0 && y < 0)q[3]++;
		else q[2]++;
	}
	for (int i = 1; i < 5; i++)printf("Q%d: %d\n", i, q[i]);
	printf("AXIS: %d", axis);
	return 0;
}