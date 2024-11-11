#include<stdio.h>
#include<stdlib.h>

int arr[1001] = { 0 };

int compare(int* a, int* b)
{
	if (*a < *b)return 1;
	else return -1;
}

int main()
{
	int n, i, k;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(arr[0]), compare);
	printf("%d", arr[k - 1]);
	return 0;
}