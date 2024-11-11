#include<stdio.h>
int toast[1000001] = { 0 };
int main()
{ 
	int m, n;
	toast[1] = 1;
	scanf("%d %d", &m, &n);
	for (int i = 2; i <= 1000001; i++)
	{
		for (int j = 2; i * j <= 1000001; j++)
		{
			toast[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (toast[i] == 0)printf("%d\n", i);
	}
	return 0;
}
