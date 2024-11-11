#include<stdio.h>
int main()
{
	int i = 5, sum = 0, s;
	while (i--)
	{
		scanf("%d", &s);
		sum += s;
	}
	printf("%d",sum);

	return 0;
}

