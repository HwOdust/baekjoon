

#include<stdio.h>
int main()
{
	int i, n, want=0, count=0;
	scanf("%d", &n);
	
	int arr[100] = { 0 };

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &want);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == want) count++;
	}

	printf("%d\n", count);
	return 0;
}
