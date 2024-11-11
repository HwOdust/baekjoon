#include<stdio.h>

int main()
{
	int a, b, k = 0,cnt=0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 1)cnt++;
	}
	if (a % 2 == 0)cnt++;
	printf("%d", cnt);

	return 0;
}