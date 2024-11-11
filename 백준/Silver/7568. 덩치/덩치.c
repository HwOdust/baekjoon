#include<stdio.h>

int main()
{
	int n, i, weight[50] = { 0 }, height[50] = { 0 }, check = 0, rank[50] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%d %d", &weight[i], &height[i]);
	for (i = 0; i < n; i++)
	{
		check = 0;
		for (int j = 0; j < n; j++)
		{
			if (i != j && weight[i] < weight[j] && height[i] < height[j])check++;
		}
		printf("%d ", check+1);
	}
	return 0;
}