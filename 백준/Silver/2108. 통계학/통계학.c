#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[500000] = { 0 }, arr2[8001] = { 0 };
int compare(const* a, const* b)
{
	return *a - *b;
}
int main()
{
	int S = 4000,M=0,n,i,c=0,cnt=0,NN=0;
	double sum = 0,sum2=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		arr2[S + arr[i]]++;
	}
	qsort(arr, n, sizeof(int), compare);
	for (i = 0; i < 8001; i++)if(arr2[i] > M)M = arr2[i];
	for (int k = 0; k < 8001; k++)
	{
		if (arr2[k] == M)
		{
			NN = k;
			cnt++;
		}
		if (cnt == 2)break;
	}
	if (-0.4 <= sum / n && sum / n <= 0)sum2 = 0;
	else sum2 = sum / n;
	printf("%0.lf\n%d\n%d\n%d", sum2, arr[(n - 1) / 2],NN-S,arr[n-1]-arr[0]);
	return 0;
}