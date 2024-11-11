#include<stdio.h>
#include<stdlib.h>

int compare(const int *a, const int *b)
{
	return *a - *b;
}
int main()
{
	int t, arr[1001] = { 0 }, n = 0, cnt = 0, c = 0, c2 = 0, c3 = 0, k = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n);
	qsort(arr, t, sizeof(int), compare);
	for (int i = 0; i < t; i++)
	{
		if (arr[0] > n)
		{
			printf("%d", (n)*(arr[0]-n)-1);
			return 0;
		}
		else if (arr[i] > n)
		{
			
			c = n - arr[i - 1];
			c2 = arr[i] - n;
			break;
		}
		else if (arr[i] == n)c3 = 1;
	}
	if (c3==1)printf("0");
	else printf("%d", c * c2 - 1);

	return 0;
}