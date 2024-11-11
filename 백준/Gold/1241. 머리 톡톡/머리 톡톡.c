#include<stdio.h>
int arr[1000000] = { 0 }, save[1000000] = { 0 };
int main()
{
	int i, n, k,sum=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		save[i] = k;
		arr[k - 1]++;
	}

	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 1; j*j <= save[i]; j++)
		{
			if (save[i] % j == 0)
			{
				sum += arr[j - 1]; 
				if (j != save[i] / j)
				{
					sum += arr[save[i] / j - 1];
				}
			}
		}
		printf("%d\n", sum - 1);
	}
	return 0;
}