#include<stdio.h>

int main()
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	int i, t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	
	for (i = b; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)break;
	}

	printf("%lld", a * b / i);
	return 0;
}