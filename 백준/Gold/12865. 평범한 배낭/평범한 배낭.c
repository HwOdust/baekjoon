#include<stdio.h>
int dp[101][100001] = { 0 }, bag[101][2] = { 0 };

int maxfind(int a, int b)
{
	if (a > b)return a;
	else return b;
}



int main()
{
	int x, n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &x);
			bag[i][j] = x;
		}
	}
	for (int i = 1; i <= n; i++)
	{

		for (int j = 0; j < bag[i][0]; j++)dp[i][j] = dp[i - 1][j];//복사
		for (int j = bag[i][0]; j <= k; j ++ )
		{
			dp[i][j] = maxfind(dp[i - 1][j], bag[i][1] + dp[i - 1][j - bag[i][0]]);
		}
	}

	printf("%d", dp[n][k]);
	
	return 0;
}
//max(dp[i-1][j],volume + dp[i-1][j-weight[i]])