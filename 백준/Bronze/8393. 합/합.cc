#include <stdio.h>
int main()
{
	int n, t=0;

	scanf("%d", &n);
	

	for (int i = 1; i <= n; i++)
	{
		t = t + i;
	}

	printf("%d", t);

	return 0;
}