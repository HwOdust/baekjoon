#include<stdio.h>
int arr[1000001] = { 0 }, suu[100001] = { 0 };
int main()
{
	int n, x, i,cnt=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		suu[i] = x;
		arr[x]++;
	}
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (suu[i]<x&&x-suu[i]<=1000000&&arr[x - suu[i]] > 0)cnt++; //쌍 개수 카운트
	}
	printf("%d", cnt/2); 
	return 0;
}
