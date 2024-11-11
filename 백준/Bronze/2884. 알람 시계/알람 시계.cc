#include <stdio.h>
int main()
{
	int h, m;
	scanf("%d %d", &h, &m);

	if (m - 45 >= 0)
	{
		m = m - 45;
		printf("%d %d", h, m);
	}

	else if (m - 45 < 0)
	{
		if (h == 0)
		{
			h = 23;
		}

		else if (h != 0)
		{
			h -= 1;
		}

		m = 60 - (45 - m);

		printf("%d %d", h, m);

	}

	return 0;
}
