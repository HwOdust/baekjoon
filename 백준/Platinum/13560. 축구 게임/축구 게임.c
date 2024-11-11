#include<stdio.h>
int arr[10001] = { 0 };

int compare(const int* a, const int* b)
{
	return(*a- *b);
}

int main()
{
	int sum = 0, i, n, cnt = 0,isum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for (i = 0; i < n; i++)
	{
		isum += i;
		sum += arr[i];
		if (isum > sum)
		{
			printf("-1");
			return 0;
		}
	}
	n = (n * (n - 1)) / 2;
	if (n != sum)printf("-1");
	else printf("1");
	return 0;
}