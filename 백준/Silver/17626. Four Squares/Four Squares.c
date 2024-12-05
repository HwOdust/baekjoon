#include <stdio.h>
#include<math.h>

int min(int a, int b)
{
	if (a < b)return a;
	else return b;
}


int main()
{
	int n, cnt = 0, dp[100000] = { 0 };
	scanf("%d", &n);

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		int x = sqrt(i);
		if (i == x * x)
		{
			dp[i] = 1;
			continue;
		}
		dp[i] = dp[i - x * x] + 1;
		for (int j = x - 1; j >= 1; j--)
		{
			dp[i] = min(dp[i - j * j] + 1, dp[i]); //최솟값 탐색
		}
	}
	printf("%d", dp[n]);

	return 0;
}