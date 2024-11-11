#include<stdio.h>

int main()
{
	int i, n, T, P, arr[6] = { 0 }, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < 6; i++)scanf("%d", &arr[i]);
	scanf("%d %d", &T, &P);
	for (i = 0; i < 6; i++)
	{
		cnt += arr[i] / T + 1;
		if (arr[i] % T == 0)cnt--;
	}
	printf("%d\n%d %d", cnt, n / P, n % P);
	return 0;
}
