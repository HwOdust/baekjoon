#include <stdio.h>
int main()
{
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	if (m + t >= 60)  //1시간 50분 + 70분 >> 3시간 0분
	{


		h = ((m + t) / 60) + h;
		m = (m + t) % 60;

		if (h == 24)
		{
			h = 0;
		}

		else if (h > 24)
		{
			h = h - 24;
		}

		printf("%d %d", h, m);
	}

	else if (m + t < 60)
	{
		if (h >= 24)
		{
			h = 0;
		}

		m = m + t;
		

		printf("%d %d", h, m);
	}

	return 0;
}