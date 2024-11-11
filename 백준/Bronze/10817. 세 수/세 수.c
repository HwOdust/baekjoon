#include <stdio.h>
#include<stdlib.h>
int compare(const int* a, const int* b)
{
	return *a - *b;
}
int main()
{
	int arr[4] = { 0 };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	qsort(arr, 3, sizeof(int), compare);
	printf("%d", arr[1]);

	return 0;
}
