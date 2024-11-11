#include<stdio.h>
#include<string.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < 2)
	{
		printf("Before");
		return 0;
	}
	if (a > 2)
	{
		printf("After");
		return 0;
	}
	if (b == 18)printf("Special");
	else if (b < 18)printf("Before");
	else printf("After");
	return 0;
}