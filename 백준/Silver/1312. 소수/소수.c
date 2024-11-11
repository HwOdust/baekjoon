#include<stdio.h>
int main()
{
	int a, b, n, i;
	char sosu[1000001] = { 0 };
	scanf("%d %d %d", &a, &b, &n);
	for (i = 0; i <= n; i++)
	{
		sosu[i] = a / b + '0';
		a = (a % b) * 10;
	}
	printf("%c", sosu[n]);
}