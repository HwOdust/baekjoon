#include<stdio.h>

int main()
{
	int sum = 0, i = 5,s;
	while (i--)
	{
		scanf("%d", &s);
		if (s < 40)sum += 40;
		else sum += s;
	}
	printf("%d", sum/5);
	return 0;
}

