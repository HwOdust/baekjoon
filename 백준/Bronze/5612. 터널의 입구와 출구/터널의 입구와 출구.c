#include <stdio.h>

int main()
{
	int n, m, a, b, c = 0;
	scanf("%d %d", &n,&m);
	int max = m;
	while (n--)
	{
		scanf("%d %d", &a, &b);
		m +=a - b;
		if (m < 0)c = 1;
		if (m > max)max = m;
	}
	if (c == 1)printf("0");
	else printf("%d", max);

	return 0;
}

