#include<stdio.h>
#include<string.h>

int main()
{
	int sum = 0, n, x, arr[100001] = { 0 },min=0;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
	min = arr[0] * x + arr[1] * x;
	for (int i = 1; i < n-1; i++)
	{
		if (arr[i] * x + arr[i + 1] * x < min)min = arr[i] * x + arr[i + 1] * x;
		
	}

	printf("%d", min);

	return 0;
	
}
