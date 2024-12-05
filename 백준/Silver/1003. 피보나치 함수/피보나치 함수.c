#include<stdio.h>

int fibo[40] = { 0 };

int main()
{
	int t,n;

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i <= 40; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n == 0)printf("1 0\n");
		else
		{
			printf("%d %d\n", fibo[n - 1], fibo[n]);
		}

	}

	return 0;
}