#include<stdio.h>

int minfind(int a, int b)
{
	if (a > b)return b;
	else return a;
}



int main()
{
	int house[1001][3] = { 0 }, t, w, dp[1001][3] = { 0 };
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &w);
			house[i][j] = w;
		}
	}
	dp[0][1] = house[0][1];
	dp[0][2] = house[0][2];
	dp[0][0] = house[0][0];
	for (int i = 1; i < t; i++)
	{
		dp[i][0] = minfind(dp[i - 1][1], dp[i - 1][2]) + house[i][0];
		dp[i][1]= minfind(dp[i - 1][0], dp[i - 1][2]) + house[i][1];
		dp[i][2]= minfind(dp[i - 1][1], dp[i - 1][0]) + house[i][2];

	}

	printf("%d", minfind(minfind(dp[t - 1][0], dp[t - 1][1]), dp[t - 1][2]));

	return 0;
}