#include<stdio.h>

int main()
{
	int arr[51] = { 0 }, n, i, t, R = 0, C = 0, min = 10;;
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d", &arr[i]);
	
	for (i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	int sum;
	int final;
	if (n == 1)printf("4");
	else
	{
		for (i = 0; i <n; i++)
		{
			sum = 0;
			R = 0;
			for (int j = 0; j < 4; j++)
			{
				if (R + arr[i + j + 1] - arr[i + j] < 5)
				{
					if (arr[i + j + 1] == 0)break;
					sum++;
					R += arr[i + j + 1] - arr[i + j];
				}
				else break;
			}
			final = 4 - sum;
			if (final < min)min = final;
		}
		printf("%d", min);
	}
	return 0;
}