#include <stdio.h>

int main()
{
	int a = 0, b = 0, t,n1,n2;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n1, &n2);
		if (n1 > n2)a++;
		else if (n1 < n2)b++;
	}
	printf("%d %d", a, b);
	return 0;
}