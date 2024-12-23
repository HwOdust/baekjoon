#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int arr[1000001] = { 0 };
int compare(const int* a, const int* b)
{
	return *a - *b;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)printf("%d\n", arr[i]);
	return 0;
}