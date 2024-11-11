#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int a, i,sum=0,ii=0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
		ii += i * i * i;
	}
	printf("%d\n", sum);
	printf("%d\n", sum * sum);
	printf("%d", ii);
	

	return 0;
}



