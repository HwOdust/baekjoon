#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n, m, arr[100001] = { 0 }, sum = 0, x, y;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		sum += x;
		arr[i] = sum;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", arr[y] - arr[x-1]);
	}


	return 0;
}