#include<stdio.h>
int arr[300001] = { 0 };
int compare(const* a, const* b)
{
	return *a - *b;
}
int main()
{
	double sum = 0;
	int i,cnt,P,n;
	scanf("%d", &n);
	P = n * 0.15 + 0.5;
	cnt = n-2*P;
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for (i = P; i < n-P; i++)sum += arr[i];
	P = sum / cnt + 0.5;
	if (n == 0)printf("0");
	else printf("%d", P);
	return 0;
}