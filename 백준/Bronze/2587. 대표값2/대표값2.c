#include<stdio.h>
#include<stdlib.h>

int arr[5] = { 0 };

int compare(int* a, int* b)
{
	if (*a > *b)return 1;
	else return -1;
}

int main()
{
	int n, i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	qsort(arr, 5, sizeof(arr[0]), compare);
	
	printf("%d\n", sum / 5);
	printf("%d", arr[2]);
	return 0;
}