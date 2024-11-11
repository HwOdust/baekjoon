#include<stdio.h>

int arr[2000000] = { 0 };
int compare(const* a, const* b)
{
	return *a - *b;
}
int main()
{
	int n, m, i;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	for (i = n; i < m+n; i++)scanf("%d", &arr[i]);
	qsort(arr, n+m, sizeof(int), compare);
	for (i = 0; i < n + m; i++)printf("%d ", arr[i]);

	return 0;
}
