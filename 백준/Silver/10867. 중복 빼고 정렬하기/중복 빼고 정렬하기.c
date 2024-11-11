#include<stdio.h>
int main()
{
	int n, i,s, arr[2001] = { 0 },save=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s);
		arr[s+1000]++;
	}
	for (i = 0; i <= 2000; i++)if (arr[i] > 0)printf("%d ", i - 1000);
	return 0;
}
