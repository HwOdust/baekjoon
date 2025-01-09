#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int arr[100000] = { 0 };
int main()
{
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i]; //13
	}
	if (sum < m)
	{
		printf("-1");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		sum -= arr[i];
		if (sum < m)
		{
			printf("%d", i + 1);
			break;
		}
	}



	return 0;
}
