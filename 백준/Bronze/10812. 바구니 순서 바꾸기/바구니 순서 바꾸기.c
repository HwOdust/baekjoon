#include<stdio.h>
#include<string.h>

int main()
{
	int arr[101] = { 0 }, n, m,i,j, begin, end, mid, B[101] = { 0 };
	scanf("%d %d", &n,&m);
	for (i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d %d %d", &begin, &end, &mid);
		for (j = begin - 1; j < end; j++)B[j] = arr[j];
		for (j = begin - 1; j < begin + end - mid; j++)arr[j] = B[j + mid - begin];
		for (j = begin + end - mid; j < end; j++)arr[j] = B[j - end + mid - 1];

	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

