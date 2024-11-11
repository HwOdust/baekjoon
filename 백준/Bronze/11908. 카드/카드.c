#include<stdio.h>
int main()
{
	int max = 0, s, sum = 0,i;
	scanf("%d", &i);
	while (i--)
	{
		scanf("%d", &s);
		sum += s;
		if (s > max)max = s;
	}
	printf("%d", sum - max);

	return 0;
}
