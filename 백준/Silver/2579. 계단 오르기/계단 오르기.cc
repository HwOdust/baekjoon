#include<iostream>
using namespace std;

int main()
{
	int i, t, dp[301] = { 0 }, sum = 0, mAAx[301] = { 0 };
	scanf("%d", &t);
	for (i = 1; i <= t; i++)scanf("%d", &dp[i]);
	mAAx[0] = 0;
	mAAx[1] = dp[1];
	mAAx[2] = dp[1] + dp[2];
	if (dp[1] + dp[3] > dp[2] + dp[3])mAAx[3] = dp[1] + dp[3];
	else mAAx[3] = dp[2] + dp[3];

	for (i = 4; i <= t; i++)
	{
		mAAx[i] = max(dp[i - 1] + mAAx[i - 3], mAAx[i - 2]) + dp[i];
	}
	printf("%d", mAAx[t]);


	return 0;
}
