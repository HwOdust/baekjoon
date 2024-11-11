#include<stdio.h>
#include<stdlib.h>

int arr[1001] = { 0 };

int compare(int* a, int* b)
{
	if (*a > *b)return 1;
	else return -1;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(arr[0]), compare);
	for (i = 0; i < n; i++)printf("%d\n", arr[i]);
	return 0;
}