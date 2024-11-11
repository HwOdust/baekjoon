#include<stdio.h>
#include<stdlib.h>
int arr[500001] = { 0 };

int compare(const* a, const* b)
{
	return (*a - *b);
}

int main()
{
	int t,num;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)scanf("%d", &arr[i]);
	qsort(arr, t, sizeof(int), compare);
	for (int i = 0; i < t; i++)printf("%d ", arr[i]);
	return 0;
}

