#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n, i=6,count=0;

	scanf("%d", &n);

	if (n == 64)
	{
		printf("1");
		return 0;
	}
	while (n!=0)
	{
		if (n >= pow(2, i))
		{
			n -= pow(2, i);
			count++;
		}
		i--;
	}
	printf("%d", count);
	return 0;
}


