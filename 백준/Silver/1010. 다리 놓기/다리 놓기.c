#include<stdio.h>
long long int sum=1;
int main()
{
	int N, a, b, i,j, arr[30];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &b, &a);
		sum = 1;
		for (j = 0; j < b; j++)arr[j] = 0;
		for (j = b; j >= 1; j--)
		{
			sum *= a;
			if (sum % j == 0)
			{
				sum /= j;
				arr[j - 1] = 1;
			}
			a--;
		}
		for (j = 0; j < b; j++)
		{
			if (arr[j] == 0)sum /= j + 1;
		}
		printf("%lld\n", sum);
	}
}