#include<stdio.h>
int main()
{
	int i,arr[10] = { 0 },n, k,sum=0,cnt=0,max=0;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] <= k)max = i;
	}
	for (i = max; i>=0; i--)
	{
		if (k / arr[i] > 0)
		{
			cnt += k / arr[i];
			k %= arr[i];
		}
	}
	printf("%d", cnt);
	
	return 0;
}