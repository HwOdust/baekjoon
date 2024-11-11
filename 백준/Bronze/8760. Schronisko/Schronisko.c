#include<stdio.h>

int main()
{
	int t, w, h;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &w, &h);
		printf("%d\n", (w * h) / 2);
	}
	return 0;
}