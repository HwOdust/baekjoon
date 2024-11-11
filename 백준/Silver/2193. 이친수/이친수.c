#include<stdio.h>
int main()
{
	long long int n, arr[100] = { 1,1 },i=2;
	scanf("%lld", &n);
	if (n > 2)
	{
		while (1)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
			if (i == n - 1)break;
			i++;
		}
	}
	if (n < 3)printf("1");
	else printf("%lld", arr[i]);
	return 0;
}